#pragma once
// IWYU pragma private; include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
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
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea06b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._GetPropertyInfos_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::PropertyInfo*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c::_GetPropertyInfos_b__6_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6ea06b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                           { "<GetPropertyInfos>b__6_0", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._GetFieldInfos_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::FieldInfo*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c::_GetFieldInfos_b__7_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6ea07bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                           { "<GetFieldInfos>b__7_0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._GetMethodInfos_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::MethodInfo*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c::_GetMethodInfos_b__8_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6ea08c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                           { "<GetMethodInfos>b__8_0", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._TryGetInjectConstructor_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::ConstructorInfo*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__12_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6ea09c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                           { "<TryGetInjectConstructor>b__12_0", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._TryGetInjectConstructor_b__12_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::ConstructorInfo*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__12_1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ea0ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                           { "<TryGetInjectConstructor>b__12_1", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c._TryGetInjectConstructor_b__12_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::Internal::ReflectionTypeAnalyzer___c::*)(::System::Reflection::ConstructorInfo*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__12_2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ea0b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                           { "<TryGetInjectConstructor>b__12_2", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea0b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea0ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9(::Zenject::Internal::ReflectionTypeAnalyzer___c* value) {
  ::cordl_internals::setStaticField<::Zenject::Internal::ReflectionTypeAnalyzer___c*, "<>9", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>(
      std::forward<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(value));
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Zenject::Internal::ReflectionTypeAnalyzer___c*, "<>9", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__6_0(::System::Func_2<::System::Reflection::PropertyInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::PropertyInfo*, bool>*, "<>9__6_0", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>(
      std::forward<::System::Func_2<::System::Reflection::PropertyInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::PropertyInfo*, bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::PropertyInfo*, bool>*, "<>9__6_0", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__7_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, bool>*, "<>9__7_0", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, bool>*, "<>9__7_0", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__8_0(::System::Func_2<::System::Reflection::MethodInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::MethodInfo*, bool>*, "<>9__8_0", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>(
      std::forward<::System::Func_2<::System::Reflection::MethodInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::MethodInfo*, bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::MethodInfo*, bool>*, "<>9__8_0", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__12_0(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*, "<>9__12_0", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>(
      std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*, "<>9__12_0", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__12_1(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*, "<>9__12_1", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>(
      std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__12_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, bool>*, "<>9__12_1", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::setStaticF___9__12_2(::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>*, "<>9__12_2", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>(
      std::forward<::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>*>(value));
}
inline ::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* Zenject::Internal::ReflectionTypeAnalyzer___c::getStaticF___9__12_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>*, "<>9__12_2", ::Zenject::Internal::ReflectionTypeAnalyzer___c*>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_GetPropertyInfos_b__6_0(::System::Reflection::PropertyInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                         { "<GetPropertyInfos>b__6_0", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_GetFieldInfos_b__7_0(::System::Reflection::FieldInfo* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(), { "<GetFieldInfos>b__7_0", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_GetMethodInfos_b__8_0(::System::Reflection::MethodInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                         { "<GetMethodInfos>b__8_0", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__12_0(::System::Reflection::ConstructorInfo* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                         { "<TryGetInjectConstructor>b__12_0", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__12_1(::System::Reflection::ConstructorInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                         { "<TryGetInjectConstructor>b__12_1", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline int32_t Zenject::Internal::ReflectionTypeAnalyzer___c::_TryGetInjectConstructor_b__12_2(::System::Reflection::ConstructorInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(),
                                                                                         { "<TryGetInjectConstructor>b__12_2", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c* Zenject::Internal::ReflectionTypeAnalyzer___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeAnalyzer___c*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c::ReflectionTypeAnalyzer___c() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::*)()>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea0ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0._TryGetInjectConstructor_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::_TryGetInjectConstructor_b__3)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6ea0d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0*>(),
                                                                                           { "<TryGetInjectConstructor>b__3", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea0e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea0e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ConstructorInfo*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::__cordl_internal_get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr ::System::Reflection::ConstructorInfo* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::__cordl_internal_get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___c;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::__cordl_internal_set_c(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___c = value;
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::_TryGetInjectConstructor_b__3(::System::Type* a) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0*>(),
                                                                                         { "<TryGetInjectConstructor>b__3", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass12_0::ReflectionTypeAnalyzer___c__DisplayClass12_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::*)()>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea0fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0._GetPropertyInfos_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::*)(::System::Reflection::PropertyInfo*)>(
        &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::_GetPropertyInfos_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6ea0fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>(),
                                                                                           { "<GetPropertyInfos>b__1", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea108c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea10d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::_GetPropertyInfos_b__1(::System::Reflection::PropertyInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>(),
                                                                                         { "<GetPropertyInfos>b__1", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0::ReflectionTypeAnalyzer___c__DisplayClass6_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::*)()>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea07b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1._GetPropertyInfos_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::_GetPropertyInfos_b__2)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6ea1264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>(),
                                                                                           { "<GetPropertyInfos>b__2", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea1338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea137c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::PropertyInfo*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::System::Reflection::PropertyInfo* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__cordl_internal_set_x(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::_GetPropertyInfos_b__2(::System::Type* a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>(), { "<GetPropertyInfos>b__2", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1::ReflectionTypeAnalyzer___c__DisplayClass6_1() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::*)()>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea1510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0._GetFieldInfos_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* (
    ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::*)(::System::Reflection::FieldInfo*)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::_GetFieldInfos_b__1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6ea1514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>(),
                                                                                           { "<GetFieldInfos>b__1", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea15b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea15f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::_GetFieldInfos_b__1(::System::Reflection::FieldInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>(),
                                                                                         { "<GetFieldInfos>b__1", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0::ReflectionTypeAnalyzer___c__DisplayClass7_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::*)()>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea08bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1._GetFieldInfos_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::_GetFieldInfos_b__2)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6ea178c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>(), { "<GetFieldInfos>b__2", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea1860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea18a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::System::Reflection::FieldInfo* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__cordl_internal_set_x(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::_GetFieldInfos_b__2(::System::Type* a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>(), { "<GetFieldInfos>b__2", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1::ReflectionTypeAnalyzer___c__DisplayClass7_1() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::*)()>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea1a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0._GetMethodInfos_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::*)(::System::Reflection::ParameterInfo*)>(
        &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::_GetMethodInfos_b__2)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ea1a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>(),
                                                                                           { "<GetMethodInfos>b__2", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea1aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea1af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*&
Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__cordl_internal_get___9__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* const&
Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__cordl_internal_get___9__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____9__2;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__cordl_internal_set___9__2(
    ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____9__2 = value;
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::_GetMethodInfos_b__2(::System::Reflection::ParameterInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>(),
                                                                                         { "<GetMethodInfos>b__2", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0::ReflectionTypeAnalyzer___c__DisplayClass8_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::*)()>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea09c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1._GetMethodInfos_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::_GetMethodInfos_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6ea1c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1*>(), { "<GetMethodInfos>b__1", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea1cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea1d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::System::Reflection::MethodInfo* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::__cordl_internal_set_x(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::_GetMethodInfos_b__1(::System::Type* a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1*>(), { "<GetMethodInfos>b__1", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_1::ReflectionTypeAnalyzer___c__DisplayClass8_1() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::*)()>(
    &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ea1ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0._GetConstructorInfo_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* (::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::*)(::System::Reflection::ParameterInfo*)>(
        &::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::_GetConstructorInfo_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ea1ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0*>(),
                                                                                           { "<GetConstructorInfo>b__0", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::__zenCreate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ea1f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0*>(),
                                                                                           { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6ea1f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::_GetConstructorInfo_b__0(::System::Reflection::ParameterInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0*>(),
                                                                                         { "<GetConstructorInfo>b__0", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>(this, ___internal_method, x);
}
inline ::System::Object* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0*>(),
                                                                                         { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0* Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass9_0::ReflectionTypeAnalyzer___c__DisplayClass9_0() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Zenject::Internal::ReflectionTypeAnalyzer::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6e9efc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.AddCustomInjectAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e9f1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "AddCustomInjectAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetReflectionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::Internal::ReflectionTypeInfo* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::GetReflectionInfo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6e9a448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetReflectionInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetPropertyInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* (*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::GetPropertyInfos)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6e9fb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetPropertyInfos", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetFieldInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* (*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::GetFieldInfos)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6e9f958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetFieldInfos", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetMethodInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* (*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::GetMethodInfos)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x6e9f4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetMethodInfos", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetConstructorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* (*)(::System::Type*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::GetConstructorInfo)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6e9f2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetConstructorInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.CreateInjectableInfoForParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* (*)(::System::Type*, ::System::Reflection::ParameterInfo*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::CreateInjectableInfoForParam)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6ea01dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(),
                                                             { "CreateInjectableInfoForParam", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.GetInjectableInfoForMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectableInfo* (*)(::System::Type*, ::System::Reflection::MemberInfo*)>(
    &::Zenject::Internal::ReflectionTypeAnalyzer::GetInjectableInfoForMember)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6ea0408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(),
                                                             { "GetInjectableInfoForMember", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeAnalyzer.TryGetInjectConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*)>(&::Zenject::Internal::ReflectionTypeAnalyzer::TryGetInjectConstructor)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x6e9fd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "TryGetInjectConstructor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::Internal::ReflectionTypeAnalyzer::setStaticF__injectAttributeTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "_injectAttributeTypes", ::Zenject::Internal::ReflectionTypeAnalyzer*>(
      std::forward<::System::Collections::Generic::HashSet_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::System::Type*>* Zenject::Internal::ReflectionTypeAnalyzer::getStaticF__injectAttributeTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Type*>*, "_injectAttributeTypes", ::Zenject::Internal::ReflectionTypeAnalyzer*>();
}
inline void Zenject::Internal::ReflectionTypeAnalyzer::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline void Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "AddCustomInjectAttribute", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Zenject::Internal::ReflectionTypeAnalyzer::AddCustomInjectAttribute(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "AddCustomInjectAttribute", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline ::Zenject::Internal::ReflectionTypeInfo* Zenject::Internal::ReflectionTypeAnalyzer::GetReflectionInfo(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetReflectionInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* Zenject::Internal::ReflectionTypeAnalyzer::GetPropertyInfos(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetPropertyInfos", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* Zenject::Internal::ReflectionTypeAnalyzer::GetFieldInfos(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetFieldInfos", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* Zenject::Internal::ReflectionTypeAnalyzer::GetMethodInfos(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetMethodInfos", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*>(nullptr, ___internal_method, type);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* Zenject::Internal::ReflectionTypeAnalyzer::GetConstructorInfo(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "GetConstructorInfo", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>(nullptr, ___internal_method, type);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* Zenject::Internal::ReflectionTypeAnalyzer::CreateInjectableInfoForParam(::System::Type* parentType,
                                                                                                                                            ::System::Reflection::ParameterInfo* paramInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(),
                                                           { "CreateInjectableInfoForParam", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::ParameterInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>(nullptr, ___internal_method, parentType, paramInfo);
}
inline ::Zenject::InjectableInfo* Zenject::Internal::ReflectionTypeAnalyzer::GetInjectableInfoForMember(::System::Type* parentType, ::System::Reflection::MemberInfo* memInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(),
                                                           { "GetInjectableInfoForMember", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectableInfo*>(nullptr, ___internal_method, parentType, memInfo);
}
inline ::System::Reflection::ConstructorInfo* Zenject::Internal::ReflectionTypeAnalyzer::TryGetInjectConstructor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeAnalyzer*>(), { "TryGetInjectConstructor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeAnalyzer::ReflectionTypeAnalyzer() {}
