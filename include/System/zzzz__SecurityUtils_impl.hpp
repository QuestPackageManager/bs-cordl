#pragma once
// IWYU pragma private; include "System\SecurityUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__SecurityUtils_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::SecurityUtils.DemandReflectionAccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::SecurityUtils::DemandReflectionAccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6374ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "DemandReflectionAccess", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SecurityUtils.DemandGrantSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::Assembly*)>(&::System::SecurityUtils::DemandGrantSet)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6374ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "DemandGrantSet", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SecurityUtils.HasReflectionPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::SecurityUtils::HasReflectionPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "HasReflectionPermission", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SecurityUtils.SecureCreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::SecurityUtils::SecureCreateInstance)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6374af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "SecureCreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SecurityUtils.SecureCreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::ArrayW<::System::Object*>, bool)>(&::System::SecurityUtils::SecureCreateInstance)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6374afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(),
                                                { "SecureCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SecurityUtils.SecureCreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::ArrayW<::System::Object*>)>(&::System::SecurityUtils::SecureCreateInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "SecureCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SecurityUtils.SecureConstructorInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>, bool)>(
    &::System::SecurityUtils::SecureConstructorInvoke)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6374bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "SecureConstructorInvoke",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                                                                                                              ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SecurityUtils.SecureConstructorInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>, bool, ::System::Reflection::BindingFlags)>(
    &::System::SecurityUtils::SecureConstructorInvoke)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6374bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(),
                                                             { "SecureConstructorInvoke",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SecurityUtils.GenericArgumentsAreVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodInfo*)>(&::System::SecurityUtils::GenericArgumentsAreVisible)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6374d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "GenericArgumentsAreVisible", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SecurityUtils.MethodInfoInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Reflection::MethodInfo*, ::System::Object*, ::ArrayW<::System::Object*>)>(
    &::System::SecurityUtils::MethodInfoInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6374dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(),
                            { "MethodInfoInvoke", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
inline void System::SecurityUtils::DemandReflectionAccess(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "DemandReflectionAccess", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void System::SecurityUtils::DemandGrantSet(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "DemandGrantSet", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assembly);
}
inline bool System::SecurityUtils::HasReflectionPermission(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "HasReflectionPermission", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::SecurityUtils::SecureCreateInstance(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "SecureCreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::SecurityUtils::SecureCreateInstance(::System::Type* type, ::ArrayW<::System::Object*> args, bool allowNonPublic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(),
                                              { "SecureCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, args, allowNonPublic);
}
inline ::System::Object* System::SecurityUtils::SecureCreateInstance(::System::Type* type, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "SecureCreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, args);
}
inline ::System::Object* System::SecurityUtils::SecureConstructorInvoke(::System::Type* type, ::ArrayW<::System::Type*> argTypes, ::ArrayW<::System::Object*> args, bool allowNonPublic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "SecureConstructorInvoke",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                                                                                                            ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, argTypes, args, allowNonPublic);
}
inline ::System::Object* System::SecurityUtils::SecureConstructorInvoke(::System::Type* type, ::ArrayW<::System::Type*> argTypes, ::ArrayW<::System::Object*> args, bool allowNonPublic,
                                                                        ::System::Reflection::BindingFlags extraFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(),
                                                           { "SecureConstructorInvoke",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, argTypes, args, allowNonPublic, extraFlags);
}
inline bool System::SecurityUtils::GenericArgumentsAreVisible(::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(), { "GenericArgumentsAreVisible", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, method);
}
inline ::System::Object* System::SecurityUtils::MethodInfoInvoke(::System::Reflection::MethodInfo* method, ::System::Object* target, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::SecurityUtils*>(),
                          { "MethodInfoInvoke", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, method, target, args);
}
// Ctor Parameters []
constexpr ::System::SecurityUtils::SecurityUtils() {}
