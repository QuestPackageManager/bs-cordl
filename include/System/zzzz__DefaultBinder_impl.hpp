#pragma once
// IWYU pragma private; include "System/DefaultBinder.hpp"
#include "System/Reflection/zzzz__Binder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DefaultBinder_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__DefaultBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::DefaultBinder_BinderState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DefaultBinder_BinderState::*)(::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, bool)>(
    &::System::DefaultBinder_BinderState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a60b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder_BinderState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::DefaultBinder_BinderState::__cordl_internal_get_m_argsMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_argsMap;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::DefaultBinder_BinderState::__cordl_internal_get_m_argsMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_argsMap;
}
constexpr void System::DefaultBinder_BinderState::__cordl_internal_set_m_argsMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_argsMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::DefaultBinder_BinderState::__cordl_internal_get_m_originalSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_originalSize;
}
constexpr int32_t const& System::DefaultBinder_BinderState::__cordl_internal_get_m_originalSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_originalSize;
}
constexpr void System::DefaultBinder_BinderState::__cordl_internal_set_m_originalSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_originalSize = value;
}
constexpr bool& System::DefaultBinder_BinderState::__cordl_internal_get_m_isParamArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isParamArray;
}
constexpr bool const& System::DefaultBinder_BinderState::__cordl_internal_get_m_isParamArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isParamArray;
}
constexpr void System::DefaultBinder_BinderState::__cordl_internal_set_m_isParamArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isParamArray = value;
}
inline void System::DefaultBinder_BinderState::_ctor(::ArrayW<int32_t, ::Array<int32_t>*> argsMap, int32_t originalSize, bool isParamArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder_BinderState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, argsMap, originalSize, isParamArray);
}
inline ::System::DefaultBinder_BinderState* System::DefaultBinder_BinderState::New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> argsMap, int32_t originalSize, bool isParamArray) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::DefaultBinder_BinderState*>(argsMap, originalSize, isParamArray));
}
// Ctor Parameters []
constexpr ::System::DefaultBinder_BinderState::DefaultBinder_BinderState() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DefaultBinder_Primitives::DefaultBinder_Primitives(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::DefaultBinder_Primitives::DefaultBinder_Primitives() {}
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::Boolean{ static_cast<int32_t>(0x8) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::Char{ static_cast<int32_t>(0x10) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::SByte{ static_cast<int32_t>(0x20) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::Byte{ static_cast<int32_t>(0x40) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::Int16{ static_cast<int32_t>(0x80) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::UInt16{ static_cast<int32_t>(0x100) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::Int32{ static_cast<int32_t>(0x200) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::UInt32{ static_cast<int32_t>(0x400) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::Int64{ static_cast<int32_t>(0x800) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::UInt64{ static_cast<int32_t>(0x1000) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::Single{ static_cast<int32_t>(0x2000) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::Double{ static_cast<int32_t>(0x4000) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::Decimal{ static_cast<int32_t>(0x8000) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::DateTime{ static_cast<int32_t>(0x10000) };
constexpr ::System::DefaultBinder_Primitives System::DefaultBinder_Primitives::String{ static_cast<int32_t>(0x40000) };
//  Writing Method size for method: ::System::DefaultBinder___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DefaultBinder___c::*)()>(&::System::DefaultBinder___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a63d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder___c._SelectProperty_b__2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::DefaultBinder___c::*)(::System::Type*)>(&::System::DefaultBinder___c::_SelectProperty_b__2_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a63d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder___c*>::get(), "<SelectProperty>b__2_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void System::DefaultBinder___c::setStaticF___9(::System::DefaultBinder___c* value) {
  ::cordl_internals::setStaticField<::System::DefaultBinder___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder___c*>::get>(
      std::forward<::System::DefaultBinder___c*>(value));
}
inline ::System::DefaultBinder___c* System::DefaultBinder___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::DefaultBinder___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder___c*>::get>();
}
inline void System::DefaultBinder___c::setStaticF___9__2_0(::System::Predicate_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::System::Type*>*, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder___c*>::get>(
      std::forward<::System::Predicate_1<::System::Type*>*>(value));
}
inline ::System::Predicate_1<::System::Type*>* System::DefaultBinder___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Type*>*, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder___c*>::get>();
}
inline void System::DefaultBinder___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::DefaultBinder___c::_SelectProperty_b__2_0(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder___c*>::get(), "<SelectProperty>b__2_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline ::System::DefaultBinder___c* System::DefaultBinder___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::DefaultBinder___c*>());
}
// Ctor Parameters []
constexpr ::System::DefaultBinder___c::DefaultBinder___c() {}
//  Writing Method size for method: ::System::DefaultBinder.BindToMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (
    ::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>,
                                ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>, ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>,
                                ::System::Globalization::CultureInfo*, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ByRef<::System::Object*>)>(&::System::DefaultBinder::BindToMethod)> {
  constexpr static std::size_t size = 0x1dec;
  constexpr static std::size_t addrs = 0x5a5ea50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.BindToField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (
    ::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*>, ::System::Object*,
                                ::System::Globalization::CultureInfo*)>(&::System::DefaultBinder::BindToField)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x5a60e80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.SelectProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (
    ::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*>, ::System::Type*,
                                ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(
    &::System::DefaultBinder::SelectProperty)> {
  constexpr static std::size_t size = 0x9bc;
  constexpr static std::size_t addrs = 0x5a61410;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ChangeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::DefaultBinder::*)(::System::Object*, ::System::Type*, ::System::Globalization::CultureInfo*)>(&::System::DefaultBinder::ChangeType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a62814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ReorderArgumentArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::DefaultBinder::*)(::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>, ::System::Object*)>(&::System::DefaultBinder::ReorderArgumentArray)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5a62864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ExactBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::MethodBase* (*)(::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                                                      ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::DefaultBinder::ExactBinding)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5a62b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "ExactBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ExactPropertyBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Reflection::PropertyInfo* (*)(::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*>, ::System::Type*,
                                            ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                                            ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(&::System::DefaultBinder::ExactPropertyBinding)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5a62f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "ExactPropertyBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecific
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Type*,
                            ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Type*,
                            ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::DefaultBinder::FindMostSpecific)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5a623a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecific", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Type*, ::System::Type*, ::System::Type*)>(&::System::DefaultBinder::FindMostSpecificType)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x5a62010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecificType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::System::Reflection::MethodBase*, ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Type*, ::System::Reflection::MethodBase*, ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Type*,
    ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::DefaultBinder::FindMostSpecificMethod)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5a60d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecificMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*)>(
    &::System::DefaultBinder::FindMostSpecificField)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a61320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecificField", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*)>(
    &::System::DefaultBinder::FindMostSpecificProperty)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a62724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecificProperty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CompareMethodSigAndName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*)>(
    &::System::DefaultBinder::CompareMethodSigAndName)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a6316c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CompareMethodSigAndName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.GetHierarchyDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Type*)>(&::System::DefaultBinder::GetHierarchyDepth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a63298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "GetHierarchyDepth", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostDerivedNewSlotMeth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Reflection::MethodBase* (*)(::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>, int32_t)>(&::System::DefaultBinder::FindMostDerivedNewSlotMeth)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5a62db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostDerivedNewSlotMeth", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ReorderParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::DefaultBinder::ReorderParams)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a60ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "ReorderParams", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CreateParamOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::DefaultBinder::CreateParamOrder)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5a6083c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CreateParamOrder", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanConvertPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::DefaultBinder::CanConvertPrimitive)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5a61dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CanConvertPrimitive", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanConvertPrimitiveObjectToType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::System::RuntimeType*)>(&::System::DefaultBinder::CanConvertPrimitiveObjectToType)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a60a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CanConvertPrimitiveObjectToType", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CompareMethodSig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*)>(
    &::System::DefaultBinder::CompareMethodSig)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a632f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CompareMethodSig", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.SelectMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (
    ::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>,
                                ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>)>(
    &::System::DefaultBinder::SelectMethod)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x5a63424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "SelectMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanChangePrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::DefaultBinder::CanChangePrimitive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a63b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CanChangePrimitive", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanPrimitiveWiden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::DefaultBinder::CanPrimitiveWiden)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a63bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CanPrimitiveWiden", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DefaultBinder::*)()>(&::System::DefaultBinder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a63c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::DefaultBinder::setStaticF__primitiveConversions(::ArrayW<::System::DefaultBinder_Primitives, ::Array<::System::DefaultBinder_Primitives>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::DefaultBinder_Primitives, ::Array<::System::DefaultBinder_Primitives>*>, "_primitiveConversions",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get>(
      std::forward<::ArrayW<::System::DefaultBinder_Primitives, ::Array<::System::DefaultBinder_Primitives>*>>(value));
}
inline ::ArrayW<::System::DefaultBinder_Primitives, ::Array<::System::DefaultBinder_Primitives>*> System::DefaultBinder::getStaticF__primitiveConversions() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::DefaultBinder_Primitives, ::Array<::System::DefaultBinder_Primitives>*>, "_primitiveConversions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get>();
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::BindToMethod(::System::Reflection::BindingFlags bindingAttr,
                                                                             ::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match,
                                                                             ::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> args,
                                                                             ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers,
                                                                             ::System::Globalization::CultureInfo* cultureInfo, ::ArrayW<::StringW, ::Array<::StringW>*> names,
                                                                             ::ByRef<::System::Object*> state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(this, ___internal_method, bindingAttr, match, args, modifiers, cultureInfo, names, state);
}
inline ::System::Reflection::FieldInfo* System::DefaultBinder::BindToField(::System::Reflection::BindingFlags bindingAttr,
                                                                           ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> match, ::System::Object* value,
                                                                           ::System::Globalization::CultureInfo* cultureInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*, false>(this, ___internal_method, bindingAttr, match, value, cultureInfo);
}
inline ::System::Reflection::PropertyInfo* System::DefaultBinder::SelectProperty(::System::Reflection::BindingFlags bindingAttr,
                                                                                 ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> match,
                                                                                 ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> indexes,
                                                                                 ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(this, ___internal_method, bindingAttr, match, returnType, indexes, modifiers);
}
inline ::System::Object* System::DefaultBinder::ChangeType(::System::Object* value, ::System::Type* type, ::System::Globalization::CultureInfo* cultureInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, type, cultureInfo);
}
inline void System::DefaultBinder::ReorderArgumentArray(::ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> args, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args, state);
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::ExactBinding(::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match,
                                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                             ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "ExactBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, match, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::DefaultBinder::ExactPropertyBinding(::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> match,
                                                                                       ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                                       ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "ExactPropertyBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*, false>(nullptr, ___internal_method, match, returnType, types, modifiers);
}
inline int32_t System::DefaultBinder::FindMostSpecific(::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> p1,
                                                       ::ArrayW<int32_t, ::Array<int32_t>*> paramOrder1, ::System::Type* paramArrayType1,
                                                       ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> p2,
                                                       ::ArrayW<int32_t, ::Array<int32_t>*> paramOrder2, ::System::Type* paramArrayType2, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecific", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p1, paramOrder1, paramArrayType1, p2, paramOrder2, paramArrayType2, types, args);
}
inline int32_t System::DefaultBinder::FindMostSpecificType(::System::Type* c1, ::System::Type* c2, ::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecificType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, c1, c2, t);
}
inline int32_t System::DefaultBinder::FindMostSpecificMethod(::System::Reflection::MethodBase* m1, ::ArrayW<int32_t, ::Array<int32_t>*> paramOrder1, ::System::Type* paramArrayType1,
                                                             ::System::Reflection::MethodBase* m2, ::ArrayW<int32_t, ::Array<int32_t>*> paramOrder2, ::System::Type* paramArrayType2,
                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecificMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, m1, paramOrder1, paramArrayType1, m2, paramOrder2, paramArrayType2, types, args);
}
inline int32_t System::DefaultBinder::FindMostSpecificField(::System::Reflection::FieldInfo* cur1, ::System::Reflection::FieldInfo* cur2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecificField", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cur1, cur2);
}
inline int32_t System::DefaultBinder::FindMostSpecificProperty(::System::Reflection::PropertyInfo* cur1, ::System::Reflection::PropertyInfo* cur2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostSpecificProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cur1, cur2);
}
inline bool System::DefaultBinder::CompareMethodSigAndName(::System::Reflection::MethodBase* m1, ::System::Reflection::MethodBase* m2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CompareMethodSigAndName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m1, m2);
}
inline int32_t System::DefaultBinder::GetHierarchyDepth(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "GetHierarchyDepth", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, t);
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::FindMostDerivedNewSlotMeth(::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match,
                                                                                           int32_t cMatches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "FindMostDerivedNewSlotMeth", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, match, cMatches);
}
inline void System::DefaultBinder::ReorderParams(::ArrayW<int32_t, ::Array<int32_t>*> paramOrder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> vars) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "ReorderParams", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, paramOrder, vars);
}
inline bool System::DefaultBinder::CreateParamOrder(::ArrayW<int32_t, ::Array<int32_t>*> paramOrder,
                                                    ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> pars,
                                                    ::ArrayW<::StringW, ::Array<::StringW>*> names) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CreateParamOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, paramOrder, pars, names);
}
inline bool System::DefaultBinder::CanConvertPrimitive(::System::RuntimeType* source, ::System::RuntimeType* target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CanConvertPrimitive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, target);
}
inline bool System::DefaultBinder::CanConvertPrimitiveObjectToType(::System::Object* source, ::System::RuntimeType* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CanConvertPrimitiveObjectToType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, type);
}
inline bool System::DefaultBinder::CompareMethodSig(::System::Reflection::MethodBase* m1, ::System::Reflection::MethodBase* m2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CompareMethodSig", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m1, m2);
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::SelectMethod(::System::Reflection::BindingFlags bindingAttr,
                                                                             ::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*> match,
                                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                             ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "SelectMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase*, ::Array<::System::Reflection::MethodBase*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(this, ___internal_method, bindingAttr, match, types, modifiers);
}
inline bool System::DefaultBinder::CanChangePrimitive(::System::Type* source, ::System::Type* target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CanChangePrimitive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, target);
}
inline bool System::DefaultBinder::CanPrimitiveWiden(::System::Type* source, ::System::Type* target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), "CanPrimitiveWiden", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, target);
}
inline void System::DefaultBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::DefaultBinder* System::DefaultBinder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::DefaultBinder*>());
}
// Ctor Parameters []
constexpr ::System::DefaultBinder::DefaultBinder() {}
