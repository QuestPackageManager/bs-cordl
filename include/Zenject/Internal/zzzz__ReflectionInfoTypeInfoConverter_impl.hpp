#pragma once
// IWYU pragma private; include "Zenject\Internal\ReflectionInfoTypeInfoConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__ReflectionInfoTypeInfoConverter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/Internal/zzzz__ReflectionInfoTypeInfoConverter_def.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "Zenject/zzzz__ZenFactoryMethod_def.hpp"
#include "Zenject/zzzz__ZenInjectMethod_def.hpp"
#include "Zenject/zzzz__ZenMemberSetterMethod_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::*)()>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea0c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c._ConvertMethod_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::InjectableInfo* (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::*)(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*)>(
        &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::_ConvertMethod_b__0_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ea0c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(),
                                                             { "<ConvertMethod>b__0_1", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c._ConvertConstructor_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::InjectableInfo* (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::*)(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*)>(
        &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::_ConvertConstructor_b__1_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ea0c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(),
                                                             { "<ConvertConstructor>b__1_0", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c._GetOnlyPropertySetter_b__8_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::*)(::System::Reflection::FieldInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::_GetOnlyPropertySetter_b__8_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ea0c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(),
                                                                                           { "<GetOnlyPropertySetter>b__8_1", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea0c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea0cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c::setStaticF___9(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c* value) {
  ::cordl_internals::setStaticField<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*, "<>9", ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(
      std::forward<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(value));
}
inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c* Zenject::Internal::ReflectionInfoTypeInfoConverter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*, "<>9", ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>();
}
inline void
Zenject::Internal::ReflectionInfoTypeInfoConverter___c::setStaticF___9__0_1(::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>*, "<>9__0_1",
                                    ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(
      std::forward<::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>*>(value));
}
inline ::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* Zenject::Internal::ReflectionInfoTypeInfoConverter___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>*, "<>9__0_1",
                                           ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>();
}
inline void
Zenject::Internal::ReflectionInfoTypeInfoConverter___c::setStaticF___9__1_0(::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>*, "<>9__1_0",
                                    ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(
      std::forward<::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>*>(value));
}
inline ::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* Zenject::Internal::ReflectionInfoTypeInfoConverter___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>*, "<>9__1_0",
                                           ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>();
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c::setStaticF___9__8_1(::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>*, "<>9__8_1", ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* Zenject::Internal::ReflectionInfoTypeInfoConverter___c::getStaticF___9__8_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>*, "<>9__8_1", ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>();
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectableInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter___c::_ConvertMethod_b__0_1(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(),
                                                           { "<ConvertMethod>b__0_1", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectableInfo*>(this, ___internal_method, x);
}
inline ::Zenject::InjectableInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter___c::_ConvertConstructor_b__1_0(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(),
                                                           { "<ConvertConstructor>b__1_0", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectableInfo*>(this, ___internal_method, x);
}
inline ::StringW Zenject::Internal::ReflectionInfoTypeInfoConverter___c::_GetOnlyPropertySetter_b__8_1(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(),
                                                                                         { "<GetOnlyPropertySetter>b__8_1", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, f);
}
inline ::System::Object* Zenject::Internal::ReflectionInfoTypeInfoConverter___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c* Zenject::Internal::ReflectionInfoTypeInfoConverter___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c::ReflectionInfoTypeInfoConverter___c() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::*)()>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea0320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0._ConvertMethod_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::*)(::System::Object*, ::ArrayW<::System::Object*>)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::_ConvertMethod_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6ea0e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*>(),
                                                             { "<ConvertMethod>b__0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea0e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea0edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::__cordl_internal_get_methodInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodInfo;
}
constexpr ::System::Reflection::MethodInfo* const& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::__cordl_internal_get_methodInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodInfo;
}
constexpr void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::__cordl_internal_set_methodInfo(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___methodInfo = value;
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::_ConvertMethod_b__0(::System::Object* obj, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*>(),
                                                           { "<ConvertMethod>b__0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, args);
}
inline ::System::Object* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::*)()>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea06f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0._TryCreateFactoryMethod_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::*)(::ArrayW<::System::Object*>)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::_TryCreateFactoryMethod_b__0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6ea1070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*>(),
                                                                                           { "<TryCreateFactoryMethod>b__0", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea1104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea1148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::_TryCreateFactoryMethod_b__0(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*>(),
                                                                                         { "<TryCreateFactoryMethod>b__0", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, args);
}
inline ::System::Object* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::*)()>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea0be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0._GetOnlyPropertySetter_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::*)(::System::Reflection::FieldInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::_GetOnlyPropertySetter_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6ea12dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(),
                                                                                           { "<GetOnlyPropertySetter>b__0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0._GetOnlyPropertySetter_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::*)(::System::Object*, ::System::Object*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::_GetOnlyPropertySetter_b__2)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6ea13bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(),
                                                             { "<GetOnlyPropertySetter>b__2", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea14a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea14e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__cordl_internal_get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__cordl_internal_get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__cordl_internal_set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propertyName = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__cordl_internal_get_writeableFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeableFields;
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* const&
Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__cordl_internal_get_writeableFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeableFields;
}
constexpr void
Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__cordl_internal_set_writeableFields(::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeableFields = value;
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::_GetOnlyPropertySetter_b__0(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(),
                                                                                         { "<GetOnlyPropertySetter>b__0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::_GetOnlyPropertySetter_b__2(::System::Object* injectable, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(),
                                                           { "<GetOnlyPropertySetter>b__2", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable, value);
}
inline ::System::Object* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::*)()>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea14a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1._GetOnlyPropertySetter_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::*)(::System::Reflection::FieldInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::_GetOnlyPropertySetter_b__3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ea167c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*>(),
                                                                                           { "<GetOnlyPropertySetter>b__3", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea169c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea16e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__cordl_internal_get_injectable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___injectable;
}
constexpr ::System::Object* const& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__cordl_internal_get_injectable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___injectable;
}
constexpr void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__cordl_internal_set_injectable(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___injectable = value;
}
constexpr ::System::Object*& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::System::Object* const& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__cordl_internal_set_value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::_GetOnlyPropertySetter_b__3(::System::Reflection::FieldInfo* f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*>(),
                                                                                         { "<GetOnlyPropertySetter>b__3", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline ::System::Object* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::*)()>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea0be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0._GetSetter_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::*)(::System::Object*, ::System::Object*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::_GetSetter_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6ea1874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(),
                                                                                           { "<GetSetter>b__0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0._GetSetter_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::*)(::System::Object*, ::System::Object*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::_GetSetter_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ea188c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(),
                                                                                           { "<GetSetter>b__1", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea18b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea18f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__cordl_internal_get_fieldInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldInfo;
}
constexpr ::System::Reflection::FieldInfo* const& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__cordl_internal_get_fieldInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldInfo;
}
constexpr void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__cordl_internal_set_fieldInfo(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldInfo = value;
}
constexpr ::System::Reflection::PropertyInfo*& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__cordl_internal_get_propInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propInfo;
}
constexpr ::System::Reflection::PropertyInfo* const& Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__cordl_internal_get_propInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propInfo;
}
constexpr void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__cordl_internal_set_propInfo(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propInfo = value;
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::_GetSetter_b__0(::System::Object* injectable, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(),
                                                                                         { "<GetSetter>b__0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable, value);
}
inline void Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::_GetSetter_b__1(::System::Object* injectable, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(),
                                                                                         { "<GetSetter>b__1", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, injectable, value);
}
inline ::System::Object* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0* Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.ConvertMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo_InjectMethodInfo* (*)(::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertMethod)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6ea0120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                                                           { "ConvertMethod", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.ConvertConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo_InjectConstructorInfo* (*)(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*, ::System::Type*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertConstructor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6e9db9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                         { "ConvertConstructor", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.ConvertField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo_InjectMemberInfo* (*)(::System::Type*, ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertField)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e9de40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                { "ConvertField", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.ConvertProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo_InjectMemberInfo* (*)(::System::Type*, ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertProperty)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e9dec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                { "ConvertProperty", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.TryCreateFactoryMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenFactoryMethod* (*)(::System::Type*, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateFactoryMethod)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6ea032c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                         { "TryCreateFactoryMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.TryCreateFactoryMethodCompiledLambdaExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenFactoryMethod* (*)(::System::Type*, ::System::Reflection::ConstructorInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateFactoryMethodCompiledLambdaExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea06f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                         { "TryCreateFactoryMethodCompiledLambdaExpression", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.TryCreateActionForMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenInjectMethod* (*)(::System::Reflection::MethodInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateActionForMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea0324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                                                           { "TryCreateActionForMethod", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.GetAllFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* (*)(::System::Type*, ::System::Reflection::BindingFlags)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::GetAllFields)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6ea06fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                             { "GetAllFields", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.GetOnlyPropertySetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenMemberSetterMethod* (*)(::System::Type*, ::StringW)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::GetOnlyPropertySetter)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x6ea084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                                                           { "GetOnlyPropertySetter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.GetSetter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenMemberSetterMethod* (*)(::System::Type*, ::System::Reflection::MemberInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::GetSetter)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6ea0500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                             { "GetSetter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionInfoTypeInfoConverter.TryGetSetterAsCompiledExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::ZenMemberSetterMethod* (*)(::System::Type*, ::System::Reflection::MemberInfo*)>(
    &::Zenject::Internal::ReflectionInfoTypeInfoConverter::TryGetSetterAsCompiledExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea0be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                             { "TryGetSetterAsCompiledExpression", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
inline ::Zenject::InjectTypeInfo_InjectMethodInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertMethod(::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo* injectMethod) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                                                         { "ConvertMethod", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo_InjectMethodInfo*>(nullptr, ___internal_method, injectMethod);
}
inline ::Zenject::InjectTypeInfo_InjectConstructorInfo*
Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertConstructor(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* injectConstructor, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                              { "ConvertConstructor", {}, { ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo_InjectConstructorInfo*>(nullptr, ___internal_method, injectConstructor, type);
}
inline ::Zenject::InjectTypeInfo_InjectMemberInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertField(::System::Type* parentType,
                                                                                                                    ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* injectField) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                           { "ConvertField", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo_InjectMemberInfo*>(nullptr, ___internal_method, parentType, injectField);
}
inline ::Zenject::InjectTypeInfo_InjectMemberInfo* Zenject::Internal::ReflectionInfoTypeInfoConverter::ConvertProperty(::System::Type* parentType,
                                                                                                                       ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* injectProperty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                              { "ConvertProperty", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo_InjectMemberInfo*>(nullptr, ___internal_method, parentType, injectProperty);
}
inline ::Zenject::ZenFactoryMethod* Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateFactoryMethod(::System::Type* type,
                                                                                                               ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* reflectionInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                       { "TryCreateFactoryMethod", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenFactoryMethod*>(nullptr, ___internal_method, type, reflectionInfo);
}
inline ::Zenject::ZenFactoryMethod* Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateFactoryMethodCompiledLambdaExpression(::System::Type* type,
                                                                                                                                       ::System::Reflection::ConstructorInfo* constructor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                       { "TryCreateFactoryMethodCompiledLambdaExpression", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenFactoryMethod*>(nullptr, ___internal_method, type, constructor);
}
inline ::Zenject::ZenInjectMethod* Zenject::Internal::ReflectionInfoTypeInfoConverter::TryCreateActionForMethod(::System::Reflection::MethodInfo* methodInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                                                         { "TryCreateActionForMethod", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenInjectMethod*>(nullptr, ___internal_method, methodInfo);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* Zenject::Internal::ReflectionInfoTypeInfoConverter::GetAllFields(::System::Type* t,
                                                                                                                                                         ::System::Reflection::BindingFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                           { "GetAllFields", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*>(nullptr, ___internal_method, t, flags);
}
inline ::Zenject::ZenMemberSetterMethod* Zenject::Internal::ReflectionInfoTypeInfoConverter::GetOnlyPropertySetter(::System::Type* parentType, ::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                                                         { "GetOnlyPropertySetter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenMemberSetterMethod*>(nullptr, ___internal_method, parentType, propertyName);
}
inline ::Zenject::ZenMemberSetterMethod* Zenject::Internal::ReflectionInfoTypeInfoConverter::GetSetter(::System::Type* parentType, ::System::Reflection::MemberInfo* memInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                           { "GetSetter", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenMemberSetterMethod*>(nullptr, ___internal_method, parentType, memInfo);
}
inline ::Zenject::ZenMemberSetterMethod* Zenject::Internal::ReflectionInfoTypeInfoConverter::TryGetSetterAsCompiledExpression(::System::Type* parentType, ::System::Reflection::MemberInfo* memInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionInfoTypeInfoConverter*>(),
                                                           { "TryGetSetterAsCompiledExpression", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ZenMemberSetterMethod*>(nullptr, ___internal_method, parentType, memInfo);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionInfoTypeInfoConverter::ReflectionInfoTypeInfoConverter() {}
