#pragma once
// IWYU pragma private; include "System\Dynamic\InvokeBinder.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObjectBinder_impl.hpp"
#include "System/Dynamic/zzzz__InvokeBinder_def.hpp"
#include "System/Dynamic/zzzz__DynamicMetaObject_def.hpp"
//  Writing Method size for method: ::System::Dynamic::InvokeBinder.FallbackInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::InvokeBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::InvokeBinder::FallbackInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fc89c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeBinder*>(),
                                         { "FallbackInvoke", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::InvokeBinder.FallbackInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::InvokeBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>, ::System::Dynamic::DynamicMetaObject*)>(
    &::System::Dynamic::InvokeBinder::FallbackInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeBinder*>(), { ::i2c::class_of<::System::Dynamic::InvokeBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::InvokeBinder.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Dynamic::DynamicMetaObject* (
    ::System::Dynamic::InvokeBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&::System::Dynamic::InvokeBinder::Bind)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fc89d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeBinder*>(),
                                                { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
    return ___internal_method;
  }
};
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::InvokeBinder::FallbackInvoke(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeBinder*>(),
                                       { "FallbackInvoke", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::InvokeBinder::FallbackInvoke(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args,
                                                                                           ::System::Dynamic::DynamicMetaObject* errorSuggestion) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Dynamic::InvokeBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args, errorSuggestion);
}
inline ::System::Dynamic::DynamicMetaObject* System::Dynamic::InvokeBinder::Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Dynamic::InvokeBinder*>(),
                                              { "Bind", {}, { ::i2c::type_of<::System::Dynamic::DynamicMetaObject*>(), ::i2c::type_of<::ArrayW<::System::Dynamic::DynamicMetaObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Dynamic::DynamicMetaObject*>(this, ___internal_method, target, args);
}
// Ctor Parameters []
constexpr ::System::Dynamic::InvokeBinder::InvokeBinder() {}
