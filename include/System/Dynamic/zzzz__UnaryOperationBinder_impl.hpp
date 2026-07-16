#pragma once
// IWYU pragma private; include "System/Dynamic/UnaryOperationBinder.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_impl.hpp"
#include "System/Dynamic/zzzz__UnaryOperationBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
//  Writing Method size for method: ::System::Dynamic::UnaryOperationBinder.FallbackUnaryOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (::System::Dynamic::UnaryOperationBinder::*)(::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::UnaryOperationBinder::FallbackUnaryOperation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc3630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Dynamic::UnaryOperationBinder*>(), { "FallbackUnaryOperation", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::UnaryOperationBinder.FallbackUnaryOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::UnaryOperationBinder::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(&::System::Dynamic::UnaryOperationBinder::FallbackUnaryOperation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::UnaryOperationBinder*>(), { ::i2c::class_of<::System::Dynamic::UnaryOperationBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::UnaryOperationBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::UnaryOperationBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::UnaryOperationBinder::Bind)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fc3640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::UnaryOperationBinder*>(),
                                                { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::UnaryOperationBinder::FallbackUnaryOperation(::System::Dynamic::DynamicMetaObject* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::UnaryOperationBinder*>(), { "FallbackUnaryOperation", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::UnaryOperationBinder::FallbackUnaryOperation(::System::Dynamic::DynamicMetaObject* target,
                                                                                                           ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::UnaryOperationBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, errorSuggestion);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::UnaryOperationBinder::Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::UnaryOperationBinder*>(),
                                              { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
// Ctor Parameters []
constexpr ::System::Dynamic::UnaryOperationBinder::UnaryOperationBinder() {}
