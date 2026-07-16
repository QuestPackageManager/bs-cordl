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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DefaultBinder_BinderState::*)(::ArrayW<int32_t>, int32_t, bool)>(&::System::DefaultBinder_BinderState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c75228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DefaultBinder_BinderState*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& System::DefaultBinder_BinderState::__cordl_internal_get_m_argsMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_argsMap;
}
constexpr ::ArrayW<int32_t> const& System::DefaultBinder_BinderState::__cordl_internal_get_m_argsMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_argsMap;
}
constexpr void System::DefaultBinder_BinderState::__cordl_internal_set_m_argsMap(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_argsMap = value;
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
inline void System::DefaultBinder_BinderState::_ctor(::ArrayW<int32_t> argsMap, int32_t originalSize, bool isParamArray) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder_BinderState*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, argsMap, originalSize, isParamArray);
}
inline ::System::DefaultBinder_BinderState* System::DefaultBinder_BinderState::New_ctor(::ArrayW<int32_t> argsMap, int32_t originalSize, bool isParamArray) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DefaultBinder_BinderState*>(argsMap, originalSize, isParamArray));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DefaultBinder___c::*)()>(&::System::DefaultBinder___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c783fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder___c._SelectProperty_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DefaultBinder___c::*)(::System::Type*)>(&::System::DefaultBinder___c::_SelectProperty_b__2_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c78400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder___c*>(), { "<SelectProperty>b__2_0", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::DefaultBinder___c::setStaticF___9(::System::DefaultBinder___c* value) {
  ::cordl_internals::setStaticField<::System::DefaultBinder___c*, "<>9", ::System::DefaultBinder___c*>(std::forward<::System::DefaultBinder___c*>(value));
}
inline ::System::DefaultBinder___c* System::DefaultBinder___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::DefaultBinder___c*, "<>9", ::System::DefaultBinder___c*>();
}
inline void System::DefaultBinder___c::setStaticF___9__2_0(::System::Predicate_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::System::Type*>*, "<>9__2_0", ::System::DefaultBinder___c*>(std::forward<::System::Predicate_1<::System::Type*>*>(value));
}
inline ::System::Predicate_1<::System::Type*>* System::DefaultBinder___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Type*>*, "<>9__2_0", ::System::DefaultBinder___c*>();
}
inline void System::DefaultBinder___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::DefaultBinder___c::_SelectProperty_b__2_0(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder___c*>(), { "<SelectProperty>b__2_0", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::System::DefaultBinder___c* System::DefaultBinder___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DefaultBinder___c*>());
}
// Ctor Parameters []
constexpr ::System::DefaultBinder___c::DefaultBinder___c() {}
//  Writing Method size for method: ::System::DefaultBinder.BindToMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (
    ::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*>, ::by_ref<::ArrayW<::System::Object*>>,
                                ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>, ::by_ref<::System::Object*>)>(
    &::System::DefaultBinder::BindToMethod)> {
  constexpr static std::size_t size = 0x1dec;
  constexpr static std::size_t addrs = 0x5c730e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { ::i2c::class_of<::System::DefaultBinder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.BindToField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::FieldInfo*>,
                                                                                                                     ::System::Object*, ::System::Globalization::CultureInfo*)>(
    &::System::DefaultBinder::BindToField)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x5c75510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { ::i2c::class_of<::System::DefaultBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.SelectProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (
    ::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::PropertyInfo*>, ::System::Type*, ::ArrayW<::System::Type*>,
                                ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::SelectProperty)> {
  constexpr static std::size_t size = 0x9bc;
  constexpr static std::size_t addrs = 0x5c75aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { ::i2c::class_of<::System::DefaultBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::DefaultBinder::*)(::System::Object*, ::System::Type*, ::System::Globalization::CultureInfo*)>(
    &::System::DefaultBinder::ChangeType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c76ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { ::i2c::class_of<::System::DefaultBinder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ReorderArgumentArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DefaultBinder::*)(::by_ref<::ArrayW<::System::Object*>>, ::System::Object*)>(&::System::DefaultBinder::ReorderArgumentArray)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5c76ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { ::i2c::class_of<::System::DefaultBinder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ExactBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::ArrayW<::System::Reflection::MethodBase*>, ::ArrayW<::System::Type*>,
                                                                                             ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::ExactBinding)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5c771dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "ExactBinding",
                                                                                        {},
                                                                                        { ::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                                                                                          ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ExactPropertyBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (*)(::ArrayW<::System::Reflection::PropertyInfo*>, ::System::Type*, ::ArrayW<::System::Type*>,
                                                                                               ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::ExactPropertyBinding)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5c77590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "ExactPropertyBinding",
                                                                           {},
                                                                           { ::i2c::type_of<::ArrayW<::System::Reflection::PropertyInfo*>>(), ::i2c::type_of<::System::Type*>(),
                                                                             ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecific
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::System::Reflection::ParameterInfo*>, ::ArrayW<int32_t>, ::System::Type*, ::ArrayW<::System::Reflection::ParameterInfo*>,
                                                                   ::ArrayW<int32_t>, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(
    &::System::DefaultBinder::FindMostSpecific)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5c76a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                { "FindMostSpecific",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*, ::System::Type*, ::System::Type*)>(&::System::DefaultBinder::FindMostSpecificType)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x5c766a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                { "FindMostSpecificType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::MethodBase*, ::ArrayW<int32_t>, ::System::Type*, ::System::Reflection::MethodBase*, ::ArrayW<int32_t>,
                                                                   ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(&::System::DefaultBinder::FindMostSpecificMethod)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5c75390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                             { "FindMostSpecificMethod",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*)>(&::System::DefaultBinder::FindMostSpecificField)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c759b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                { "FindMostSpecificField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*)>(&::System::DefaultBinder::FindMostSpecificProperty)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c76db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                { "FindMostSpecificProperty", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CompareMethodSigAndName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*)>(&::System::DefaultBinder::CompareMethodSigAndName)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c777fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                { "CompareMethodSigAndName", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.GetHierarchyDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::System::DefaultBinder::GetHierarchyDepth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c77928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "GetHierarchyDepth", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostDerivedNewSlotMeth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::ArrayW<::System::Reflection::MethodBase*>, int32_t)>(
    &::System::DefaultBinder::FindMostDerivedNewSlotMeth)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5c77448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                             { "FindMostDerivedNewSlotMeth", {}, { ::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ReorderParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<::System::Object*>)>(&::System::DefaultBinder::ReorderParams)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c75238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "ReorderParams", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CreateParamOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<int32_t>, ::ArrayW<::System::Reflection::ParameterInfo*>, ::ArrayW<::StringW>)>(&::System::DefaultBinder::CreateParamOrder)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5c74ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DefaultBinder*>(),
            { "CreateParamOrder", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanConvertPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::DefaultBinder::CanConvertPrimitive)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5c7645c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "CanConvertPrimitive", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanConvertPrimitiveObjectToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::RuntimeType*)>(&::System::DefaultBinder::CanConvertPrimitiveObjectToType)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c75120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                             { "CanConvertPrimitiveObjectToType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CompareMethodSig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*)>(&::System::DefaultBinder::CompareMethodSig)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c77988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                { "CompareMethodSig", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.SelectMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*>,
                                                                                                                      ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(
    &::System::DefaultBinder::SelectMethod)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x5c77ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "SelectMethod",
                                                                           {},
                                                                           { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(),
                                                                             ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanChangePrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::DefaultBinder::CanChangePrimitive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c781e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "CanChangePrimitive", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanPrimitiveWiden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::DefaultBinder::CanPrimitiveWiden)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c78248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "CanPrimitiveWiden", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DefaultBinder::*)()>(&::System::DefaultBinder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7830c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::DefaultBinder::setStaticF__primitiveConversions(::ArrayW<::System::DefaultBinder_Primitives> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::DefaultBinder_Primitives>, "_primitiveConversions", ::System::DefaultBinder*>(std::forward<::ArrayW<::System::DefaultBinder_Primitives>>(value));
}
inline ::ArrayW<::System::DefaultBinder_Primitives> System::DefaultBinder::getStaticF__primitiveConversions() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::DefaultBinder_Primitives>, "_primitiveConversions", ::System::DefaultBinder*>();
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::BindToMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*> match,
                                                                             ::by_ref<::ArrayW<::System::Object*>> args, ::ArrayW<::System::Reflection::ParameterModifier> modifiers,
                                                                             ::System::Globalization::CultureInfo* cultureInfo, ::ArrayW<::StringW> names, ::by_ref<::System::Object*> state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DefaultBinder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method, bindingAttr, match, args, modifiers, cultureInfo, names, state);
}
inline ::System::Reflection::FieldInfo* System::DefaultBinder::BindToField(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::FieldInfo*> match, ::System::Object* value,
                                                                           ::System::Globalization::CultureInfo* cultureInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DefaultBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, bindingAttr, match, value, cultureInfo);
}
inline ::System::Reflection::PropertyInfo* System::DefaultBinder::SelectProperty(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::PropertyInfo*> match,
                                                                                 ::System::Type* returnType, ::ArrayW<::System::Type*> indexes,
                                                                                 ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DefaultBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, bindingAttr, match, returnType, indexes, modifiers);
}
inline ::System::Object* System::DefaultBinder::ChangeType(::System::Object* value, ::System::Type* type, ::System::Globalization::CultureInfo* cultureInfo) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DefaultBinder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, type, cultureInfo);
}
inline void System::DefaultBinder::ReorderArgumentArray(::by_ref<::ArrayW<::System::Object*>> args, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DefaultBinder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, state);
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::ExactBinding(::ArrayW<::System::Reflection::MethodBase*> match, ::ArrayW<::System::Type*> types,
                                                                             ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "ExactBinding",
                                                                                      {},
                                                                                      { ::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                                                                                        ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, match, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::DefaultBinder::ExactPropertyBinding(::ArrayW<::System::Reflection::PropertyInfo*> match, ::System::Type* returnType, ::ArrayW<::System::Type*> types,
                                                                                       ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "ExactPropertyBinding",
                                                                         {},
                                                                         { ::i2c::type_of<::ArrayW<::System::Reflection::PropertyInfo*>>(), ::i2c::type_of<::System::Type*>(),
                                                                           ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(nullptr, ___internal_method, match, returnType, types, modifiers);
}
inline int32_t System::DefaultBinder::FindMostSpecific(::ArrayW<::System::Reflection::ParameterInfo*> p1, ::ArrayW<int32_t> paramOrder1, ::System::Type* paramArrayType1,
                                                       ::ArrayW<::System::Reflection::ParameterInfo*> p2, ::ArrayW<int32_t> paramOrder2, ::System::Type* paramArrayType2,
                                                       ::ArrayW<::System::Type*> types, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                           { "FindMostSpecific",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, p1, paramOrder1, paramArrayType1, p2, paramOrder2, paramArrayType2, types, args);
}
inline int32_t System::DefaultBinder::FindMostSpecificType(::System::Type* c1, ::System::Type* c2, ::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                              { "FindMostSpecificType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c1, c2, t);
}
inline int32_t System::DefaultBinder::FindMostSpecificMethod(::System::Reflection::MethodBase* m1, ::ArrayW<int32_t> paramOrder1, ::System::Type* paramArrayType1, ::System::Reflection::MethodBase* m2,
                                                             ::ArrayW<int32_t> paramOrder2, ::System::Type* paramArrayType2, ::ArrayW<::System::Type*> types, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "FindMostSpecificMethod",
                                                                         {},
                                                                         { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(),
                                                                           ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(),
                                                                           ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, m1, paramOrder1, paramArrayType1, m2, paramOrder2, paramArrayType2, types, args);
}
inline int32_t System::DefaultBinder::FindMostSpecificField(::System::Reflection::FieldInfo* cur1, ::System::Reflection::FieldInfo* cur2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                              { "FindMostSpecificField", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cur1, cur2);
}
inline int32_t System::DefaultBinder::FindMostSpecificProperty(::System::Reflection::PropertyInfo* cur1, ::System::Reflection::PropertyInfo* cur2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                              { "FindMostSpecificProperty", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cur1, cur2);
}
inline bool System::DefaultBinder::CompareMethodSigAndName(::System::Reflection::MethodBase* m1, ::System::Reflection::MethodBase* m2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                              { "CompareMethodSigAndName", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m1, m2);
}
inline int32_t System::DefaultBinder::GetHierarchyDepth(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "GetHierarchyDepth", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t);
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::FindMostDerivedNewSlotMeth(::ArrayW<::System::Reflection::MethodBase*> match, int32_t cMatches) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                           { "FindMostDerivedNewSlotMeth", {}, { ::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, match, cMatches);
}
inline void System::DefaultBinder::ReorderParams(::ArrayW<int32_t> paramOrder, ::ArrayW<::System::Object*> vars) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "ReorderParams", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, paramOrder, vars);
}
inline bool System::DefaultBinder::CreateParamOrder(::ArrayW<int32_t> paramOrder, ::ArrayW<::System::Reflection::ParameterInfo*> pars, ::ArrayW<::StringW> names) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::DefaultBinder*>(),
                       { "CreateParamOrder", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, paramOrder, pars, names);
}
inline bool System::DefaultBinder::CanConvertPrimitive(::System::RuntimeType* source, ::System::RuntimeType* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "CanConvertPrimitive", {}, { ::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, target);
}
inline bool System::DefaultBinder::CanConvertPrimitiveObjectToType(::System::Object* source, ::System::RuntimeType* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "CanConvertPrimitiveObjectToType", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::RuntimeType*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, type);
}
inline bool System::DefaultBinder::CompareMethodSig(::System::Reflection::MethodBase* m1, ::System::Reflection::MethodBase* m2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(),
                                                           { "CompareMethodSig", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m1, m2);
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::SelectMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*> match,
                                                                             ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "SelectMethod",
                                                                         {},
                                                                         { ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(),
                                                                           ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method, bindingAttr, match, types, modifiers);
}
inline bool System::DefaultBinder::CanChangePrimitive(::System::Type* source, ::System::Type* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "CanChangePrimitive", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, target);
}
inline bool System::DefaultBinder::CanPrimitiveWiden(::System::Type* source, ::System::Type* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { "CanPrimitiveWiden", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, target);
}
inline void System::DefaultBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DefaultBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DefaultBinder* System::DefaultBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DefaultBinder*>());
}
// Ctor Parameters []
constexpr ::System::DefaultBinder::DefaultBinder() {}
