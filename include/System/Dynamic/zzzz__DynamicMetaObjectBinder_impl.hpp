#pragma once
// IWYU pragma private; include "System/Dynamic/DynamicMetaObjectBinder.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSiteBinder_impl.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Dynamic::DynamicMetaObjectBinder::*)()>(&::System::Dynamic::DynamicMetaObjectBinder::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fbe144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.get_ReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Dynamic::DynamicMetaObjectBinder::*)()>(&::System::Dynamic::DynamicMetaObjectBinder::get_ReturnType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fbe19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Dynamic::DynamicMetaObjectBinder::*)(::ArrayW<::System::Object*>, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,
                                                   ::System::Linq::Expressions::LabelTarget*)>(&::System::Dynamic::DynamicMetaObjectBinder::Bind)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x5fbe1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(),
                                                             { "Bind",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                                 ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.CreateArgumentMetaObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Dynamic::DynamicMetaObject*> (*)(
    ::ArrayW<::System::Object*>, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*)>(
    &::System::Dynamic::DynamicMetaObjectBinder::CreateArgumentMetaObjects)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5fbe798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(),
                                                             { "CreateArgumentMetaObjects",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                                 ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::DynamicMetaObjectBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::DynamicMetaObjectBinder::Bind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.GetUpdateExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Dynamic::DynamicMetaObjectBinder::*)(::System::Type*)>(
    &::System::Dynamic::DynamicMetaObjectBinder::GetUpdateExpression)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fbe938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), { "GetUpdateExpression", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::DynamicMetaObjectBinder.get_IsStandardBinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Dynamic::DynamicMetaObjectBinder::*)()>(&::System::Dynamic::DynamicMetaObjectBinder::get_IsStandardBinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbea10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), { ::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), 8 }));
    return ___internal_method;
  }
};
inline void System::Dynamic::DynamicMetaObjectBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* System::Dynamic::DynamicMetaObjectBinder::get_ReturnType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression*
System::Dynamic::DynamicMetaObjectBinder::Bind(::ArrayW<::System::Object*> args,
                                               ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters,
                                               ::System::Linq::Expressions::LabelTarget* returnLabel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(),
                                                           { "Bind",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                               ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::LabelTarget*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, args, parameters, returnLabel);
}
inline ::ArrayW<::System::Dynamic::DynamicMetaObject*>
System::Dynamic::DynamicMetaObjectBinder::CreateArgumentMetaObjects(::ArrayW<::System::Object*> args,
                                                                    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(),
                                                           { "CreateArgumentMetaObjects",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                               ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Dynamic::DynamicMetaObject*>>(nullptr, ___internal_method, args, parameters);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::DynamicMetaObjectBinder::Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::DynamicMetaObjectBinder::GetUpdateExpression(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), { "GetUpdateExpression", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, type);
}
inline bool System::Dynamic::DynamicMetaObjectBinder::get_IsStandardBinder() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::DynamicMetaObjectBinder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Dynamic::DynamicMetaObjectBinder* System::Dynamic::DynamicMetaObjectBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Dynamic::DynamicMetaObjectBinder*>());
}
// Ctor Parameters []
constexpr ::System::Dynamic::DynamicMetaObjectBinder::DynamicMetaObjectBinder() {}
