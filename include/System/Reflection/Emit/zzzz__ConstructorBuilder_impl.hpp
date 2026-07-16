#pragma once
// IWYU pragma private; include "System/Reflection/Emit/ConstructorBuilder.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_impl.hpp"
#include "System/Reflection/Emit/zzzz__ConstructorBuilder_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodAttributes (::System::Reflection::Emit::ConstructorBuilder::*)()>(
    &::System::Reflection::Emit::ConstructorBuilder::get_Attributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::ConstructorBuilder::*)()>(&::System::Reflection::Emit::ConstructorBuilder::get_DeclaringType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8faac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::ConstructorBuilder::*)()>(&::System::Reflection::Emit::ConstructorBuilder::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.GetParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::Emit::ConstructorBuilder::*)()>(
    &::System::Reflection::Emit::ConstructorBuilder::GetParameters)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.GetMethodImplementationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodImplAttributes (::System::Reflection::Emit::ConstructorBuilder::*)()>(
    &::System::Reflection::Emit::ConstructorBuilder::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.get_MethodHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeMethodHandle (::System::Reflection::Emit::ConstructorBuilder::*)()>(
    &::System::Reflection::Emit::ConstructorBuilder::get_MethodHandle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::Emit::ConstructorBuilder::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*,
                                                                                                                             ::ArrayW<::System::Object*>, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::Emit::ConstructorBuilder::Invoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::ConstructorBuilder::*)(::System::Type*, bool)>(&::System::Reflection::Emit::ConstructorBuilder::IsDefined)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::ConstructorBuilder::*)(bool)>(
    &::System::Reflection::Emit::ConstructorBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::ConstructorBuilder::*)(::System::Type*, bool)>(
    &::System::Reflection::Emit::ConstructorBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::ConstructorBuilder::*)()>(&::System::Reflection::Emit::ConstructorBuilder::get_ReflectedType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::ConstructorBuilder.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Reflection::Emit::ConstructorBuilder::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                                      ::System::Globalization::CultureInfo*)>(&::System::Reflection::Emit::ConstructorBuilder::Invoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b8fcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 33 }));
    return ___internal_method;
  }
};
inline ::System::Reflection::MethodAttributes System::Reflection::Emit::ConstructorBuilder::get_Attributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodAttributes>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::ConstructorBuilder::get_DeclaringType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::ConstructorBuilder::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::Emit::ConstructorBuilder::GetParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline ::System::Reflection::MethodImplAttributes System::Reflection::Emit::ConstructorBuilder::GetMethodImplementationFlags() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodImplAttributes>(this, ___internal_method);
}
inline ::System::RuntimeMethodHandle System::Reflection::Emit::ConstructorBuilder::get_MethodHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeMethodHandle>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::Emit::ConstructorBuilder::Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                              ::ArrayW<::System::Object*> parameters, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, invokeAttr, binder, parameters, culture);
}
inline bool System::Reflection::Emit::ConstructorBuilder::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::ConstructorBuilder::GetCustomAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::ConstructorBuilder::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Type* System::Reflection::Emit::ConstructorBuilder::get_ReflectedType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::Emit::ConstructorBuilder::Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                              ::ArrayW<::System::Object*> parameters, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::ConstructorBuilder*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::ConstructorBuilder::ConstructorBuilder() {}
