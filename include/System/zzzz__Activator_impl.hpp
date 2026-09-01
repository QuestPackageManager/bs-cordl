#pragma once
// IWYU pragma private; include "System\Activator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Activator_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Activator.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                             ::System::Globalization::CultureInfo*)>(&::System::Activator::CreateInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c71c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Activator*>(),
                                                { "CreateInstance",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(),
                                                    ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Activator.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                             ::System::Globalization::CultureInfo*, ::ArrayW<::System::Object*>)>(&::System::Activator::CreateInstance)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5c71c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(),
                                                                                      ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                                                      ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Activator.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::ArrayW<::System::Object*>)>(&::System::Activator::CreateInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c72828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Activator.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::ArrayW<::System::Object*>, ::ArrayW<::System::Object*>)>(&::System::Activator::CreateInstance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c72840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Activator*>(),
                            { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Activator.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Activator::CreateInstance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c72858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Activator.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, bool)>(&::System::Activator::CreateInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c72864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Activator.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, bool, bool)>(&::System::Activator::CreateInstance)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c7286c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::System::Object* System::Activator::CreateInstance(::System::Type* type, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> args,
                                                           ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Activator*>(),
                                                           { "CreateInstance",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(),
                                                               ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, bindingAttr, binder, args, culture);
}
inline ::System::Object* System::Activator::CreateInstance(::System::Type* type, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> args,
                                                           ::System::Globalization::CultureInfo* culture, ::ArrayW<::System::Object*> activationAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Activator*>(),
                                       { "CreateInstance",
                                         {},
                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(),
                                           ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, bindingAttr, binder, args, culture, activationAttributes);
}
inline ::System::Object* System::Activator::CreateInstance(::System::Type* type, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, args);
}
inline ::System::Object* System::Activator::CreateInstance(::System::Type* type, ::ArrayW<::System::Object*> args, ::ArrayW<::System::Object*> activationAttributes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Activator*>(),
                                       { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, args, activationAttributes);
}
inline ::System::Object* System::Activator::CreateInstance(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::Activator::CreateInstance(::System::Type* type, bool nonPublic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, nonPublic);
}
inline ::System::Object* System::Activator::CreateInstance(::System::Type* type, bool nonPublic, bool wrapExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, nonPublic, wrapExceptions);
}
template <typename T> inline T System::Activator::CreateInstance() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Activator*>(), { "CreateInstance", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Activator::Activator() {}
