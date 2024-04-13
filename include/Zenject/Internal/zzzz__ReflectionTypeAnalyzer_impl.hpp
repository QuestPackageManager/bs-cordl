#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeAnalyzer_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeAnalyzer_def.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3474f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0._GetPropertyInfos_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo* (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::*)(::System::Reflection::PropertyInfo*)>(
        &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::_GetPropertyInfos_b__1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3474f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*>::get(), "<GetPropertyInfos>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3474fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x347501c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*>());
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::_GetPropertyInfos_b__1(::System::Reflection::PropertyInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*>::get(), "<GetPropertyInfos>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0::__ReflectionTypeAnalyzer____c__DisplayClass5_0() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34751dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1._GetPropertyInfos_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::*)(::System::Type*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::_GetPropertyInfos_b__2)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x34751e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*>::get(), "<GetPropertyInfos>b__2",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x34752b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x347530c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::PropertyInfo*& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::__cordl_internal_set_x(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*>());
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::_GetPropertyInfos_b__2(::System::Type* a) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*>::get(), "<GetPropertyInfos>b__2",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1::__ReflectionTypeAnalyzer____c__DisplayClass5_1() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeAnalyzer____c::*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3475530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c._GetPropertyInfos_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::__ReflectionTypeAnalyzer____c::*)(::System::Reflection::PropertyInfo*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c::_GetPropertyInfos_b__5_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3475538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<GetPropertyInfos>b__5_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c._GetFieldInfos_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::__ReflectionTypeAnalyzer____c::*)(::System::Reflection::FieldInfo*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c::_GetFieldInfos_b__6_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3475638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<GetFieldInfos>b__6_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c._GetMethodInfos_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::__ReflectionTypeAnalyzer____c::*)(::System::Reflection::MethodInfo*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c::_GetMethodInfos_b__7_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3475740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<GetMethodInfos>b__7_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c._TryGetInjectConstructor_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::__ReflectionTypeAnalyzer____c::*)(::System::Reflection::ConstructorInfo*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c::_TryGetInjectConstructor_b__11_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3475848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<TryGetInjectConstructor>b__11_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c._TryGetInjectConstructor_b__11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::__ReflectionTypeAnalyzer____c::*)(::System::Reflection::ConstructorInfo*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c::_TryGetInjectConstructor_b__11_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3475950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<TryGetInjectConstructor>b__11_1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c._TryGetInjectConstructor_b__11_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::Internal::__ReflectionTypeAnalyzer____c::*)(::System::Reflection::ConstructorInfo*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c::_TryGetInjectConstructor_b__11_2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3475968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<TryGetInjectConstructor>b__11_2",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x34759c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::__ReflectionTypeAnalyzer____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3475a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c::setStaticF___9(::Zenject::Internal::__ReflectionTypeAnalyzer____c* value) {
  ::cordl_internals::setStaticField<::Zenject::Internal::__ReflectionTypeAnalyzer____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>(
      std::forward<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>(value));
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c* Zenject::Internal::__ReflectionTypeAnalyzer____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::Internal::__ReflectionTypeAnalyzer____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>();
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c::setStaticF___9__5_0(::System::Func_2<::System::Reflection::PropertyInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::PropertyInfo*, bool>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::PropertyInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::PropertyInfo*, bool>* Zenject::Internal::__ReflectionTypeAnalyzer____c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::PropertyInfo*, bool>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>();
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c::setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, bool>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* Zenject::Internal::__ReflectionTypeAnalyzer____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, bool>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>();
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c::setStaticF___9__7_0(::System::Func_2<::System::Reflection::MethodInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::MethodInfo*, bool>*, "<>9__7_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::MethodInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::MethodInfo*, bool>* Zenject::Internal::__ReflectionTypeAnalyzer____c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::MethodInfo*, bool>*, "<>9__7_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>();
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c::setStaticF___9__11_0(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* Zenject::Internal::__ReflectionTypeAnalyzer____c::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>();
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c::setStaticF___9__11_1(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*, "<>9__11_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* Zenject::Internal::__ReflectionTypeAnalyzer____c::getStaticF___9__11_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*, "<>9__11_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>();
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c::setStaticF___9__11_2(::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>*, "<>9__11_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* Zenject::Internal::__ReflectionTypeAnalyzer____c::getStaticF___9__11_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>*, "<>9__11_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get>();
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c* Zenject::Internal::__ReflectionTypeAnalyzer____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>());
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::__ReflectionTypeAnalyzer____c::_GetPropertyInfos_b__5_0(::System::Reflection::PropertyInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<GetPropertyInfos>b__5_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool Zenject::Internal::__ReflectionTypeAnalyzer____c::_GetFieldInfos_b__6_0(::System::Reflection::FieldInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<GetFieldInfos>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool Zenject::Internal::__ReflectionTypeAnalyzer____c::_GetMethodInfos_b__7_0(::System::Reflection::MethodInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<GetMethodInfos>b__7_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline bool Zenject::Internal::__ReflectionTypeAnalyzer____c::_TryGetInjectConstructor_b__11_0(::System::Reflection::ConstructorInfo* c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<TryGetInjectConstructor>b__11_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool Zenject::Internal::__ReflectionTypeAnalyzer____c::_TryGetInjectConstructor_b__11_1(::System::Reflection::ConstructorInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<TryGetInjectConstructor>b__11_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline int32_t Zenject::Internal::__ReflectionTypeAnalyzer____c::_TryGetInjectConstructor_b__11_2(::System::Reflection::ConstructorInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "<TryGetInjectConstructor>b__11_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::__ReflectionTypeAnalyzer____c::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeAnalyzer____c::__ReflectionTypeAnalyzer____c() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3475be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0._GetFieldInfos_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo* (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::*)(::System::Reflection::FieldInfo*)>(
        &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::_GetFieldInfos_b__1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3475bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*>::get(), "<GetFieldInfos>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3475ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3475cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*>());
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::_GetFieldInfos_b__1(::System::Reflection::FieldInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*>::get(), "<GetFieldInfos>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0::__ReflectionTypeAnalyzer____c__DisplayClass6_0() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3475738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1._GetFieldInfos_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::*)(::System::Type*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::_GetFieldInfos_b__2)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3475ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*>::get(), "<GetFieldInfos>b__2",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3475f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3475fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> const& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::__cordl_internal_set_x(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*>());
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::_GetFieldInfos_b__2(::System::Type* a) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*>::get(), "<GetFieldInfos>b__2",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1::__ReflectionTypeAnalyzer____c__DisplayClass6_1() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34761a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0._GetMethodInfos_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::*)(::System::Reflection::ParameterInfo*)>(
        &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::_GetMethodInfos_b__2)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x34761ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*>::get(), "<GetMethodInfos>b__2",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3476218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3476274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*&
Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*> const&
Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__cordl_internal_set___9__2(
    ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*>());
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::_GetMethodInfos_b__2(::System::Reflection::ParameterInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*>::get(), "<GetMethodInfos>b__2",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0::__ReflectionTypeAnalyzer____c__DisplayClass7_0() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3475840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1._GetMethodInfos_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::*)(::System::Type*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::_GetMethodInfos_b__1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3476434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*>::get(), "<GetMethodInfos>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x34764a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x34764fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::__cordl_internal_set_x(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*>());
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::_GetMethodInfos_b__1(::System::Type* a) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*>::get(), "<GetMethodInfos>b__1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1::__ReflectionTypeAnalyzer____c__DisplayClass7_1() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34766bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0._GetConstructorInfo_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::*)(::System::Reflection::ParameterInfo*)>(
        &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::_GetConstructorInfo_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x34766c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*>::get(), "<GetConstructorInfo>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3476730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x347678c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*>());
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*
Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::_GetConstructorInfo_b__0(::System::Reflection::ParameterInfo* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*>::get(), "<GetConstructorInfo>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*, false>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0::__ReflectionTypeAnalyzer____c__DisplayClass8_0() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3475948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0._TryGetInjectConstructor_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::*)(::System::Type*)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::_TryGetInjectConstructor_b__3)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x347694c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*>::get(), "<TryGetInjectConstructor>b__3",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3476a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(
    &::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3476a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*>::get(),
                                                 "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ConstructorInfo*& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::__cordl_internal_set_c(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___c)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*>());
}
inline void Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::_TryGetInjectConstructor_b__3(::System::Type* a) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*>::get(), "<TryGetInjectConstructor>b__3",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*>::get(),
                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0::__ReflectionTypeAnalyzer____c__DisplayClass11_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.AddCustomInjectAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3472b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "AddCustomInjectAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetReflectionInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::ReflectionTypeInfo* (*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::GetReflectionInfo)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x346e014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetReflectionInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetPropertyInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetPropertyInfos)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3473498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetPropertyInfos",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetFieldInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetFieldInfos)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x34732a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetFieldInfos",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetMethodInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetMethodInfos)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x3472e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetMethodInfos",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetConstructorInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* (*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::GetConstructorInfo)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x3472c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetConstructorInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.CreateInjectableInfoForParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* (*)(::System::Type*, ::System::Reflection::ParameterInfo*)>(
        &::Zenject::Internal::ReflectionTypeAnalyzer::CreateInjectableInfoForParam)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3473a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "CreateInjectableInfoForParam", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetInjectableInfoForMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectableInfo* (*)(::System::Type*, ::System::Reflection::MemberInfo*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::GetInjectableInfoForMember)> {
  constexpr static std::size_t size = 0x1248;
  constexpr static std::size_t addrs = 0x3473cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetInjectableInfoForMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.TryGetInjectConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::TryGetInjectConstructor)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x347368c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "TryGetInjectConstructor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void Zenject::Internal::ReflectionTypeAnalyzer::setStaticF__injectAttributeTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "_injectAttributeTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::System::Type*>* Zenject::Internal::ReflectionTypeAnalyzer::getStaticF__injectAttributeTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "_injectAttributeTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get>();
}
template <typename T> inline void Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "AddCustomInjectAttribute",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "AddCustomInjectAttribute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline ::Zenject::Internal::ReflectionTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer::GetReflectionInfo(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetReflectionInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo*, false>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* Zenject::Internal::ReflectionTypeAnalyzer::GetPropertyInfos(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetPropertyInfos",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*, false>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* Zenject::Internal::ReflectionTypeAnalyzer::GetFieldInfos(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetFieldInfos",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*, false>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* Zenject::Internal::ReflectionTypeAnalyzer::GetMethodInfos(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetMethodInfos",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*, false>(nullptr, ___internal_method, type);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* Zenject::Internal::ReflectionTypeAnalyzer::GetConstructorInfo(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetConstructorInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*, false>(nullptr, ___internal_method, type);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* Zenject::Internal::ReflectionTypeAnalyzer::CreateInjectableInfoForParam(::System::Type* parentType,
                                                                                                                                               ::System::Reflection::ParameterInfo* paramInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "CreateInjectableInfoForParam", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*, false>(nullptr, ___internal_method, parentType, paramInfo);
}
inline ::Zenject::InjectableInfo* Zenject::Internal::ReflectionTypeAnalyzer::GetInjectableInfoForMember(::System::Type* parentType, ::System::Reflection::MemberInfo* memInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "GetInjectableInfoForMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectableInfo*, false>(nullptr, ___internal_method, parentType, memInfo);
}
inline ::System::Reflection::ConstructorInfo* Zenject::Internal::ReflectionTypeAnalyzer::TryGetInjectConstructor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeAnalyzer*>::get(), "TryGetInjectConstructor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer::ReflectionTypeAnalyzer() {}
