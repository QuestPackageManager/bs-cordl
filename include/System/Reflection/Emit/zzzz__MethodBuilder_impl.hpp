#pragma once
// IWYU pragma private; include "System/Reflection/Emit/MethodBuilder.hpp"
#include "System/Reflection/zzzz__MethodInfo_impl.hpp"
#include "System/Reflection/Emit/zzzz__MethodBuilder_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodAttributes (::System::Reflection::Emit::MethodBuilder::*)()>(
    &::System::Reflection::Emit::MethodBuilder::get_Attributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b90f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::MethodBuilder::*)()>(&::System::Reflection::Emit::MethodBuilder::get_DeclaringType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b90fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.get_MethodHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeMethodHandle (::System::Reflection::Emit::MethodBuilder::*)()>(&::System::Reflection::Emit::MethodBuilder::get_MethodHandle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b90ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::MethodBuilder::*)()>(&::System::Reflection::Emit::MethodBuilder::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b91034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::MethodBuilder::*)()>(&::System::Reflection::Emit::MethodBuilder::get_ReflectedType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9106c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.GetBaseDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::Emit::MethodBuilder::*)()>(
    &::System::Reflection::Emit::MethodBuilder::GetBaseDefinition)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b910a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::MethodBuilder::*)(bool)>(
    &::System::Reflection::Emit::MethodBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b910dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::MethodBuilder::*)(::System::Type*, bool)>(
    &::System::Reflection::Emit::MethodBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b91114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.GetMethodImplementationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodImplAttributes (::System::Reflection::Emit::MethodBuilder::*)()>(
    &::System::Reflection::Emit::MethodBuilder::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9114c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.GetParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::Emit::MethodBuilder::*)()>(
    &::System::Reflection::Emit::MethodBuilder::GetParameters)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b91184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Reflection::Emit::MethodBuilder::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                                 ::System::Globalization::CultureInfo*)>(&::System::Reflection::Emit::MethodBuilder::Invoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b911bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::MethodBuilder.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::MethodBuilder::*)(::System::Type*, bool)>(&::System::Reflection::Emit::MethodBuilder::IsDefined)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b911f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 12 }));
    return ___internal_method;
  }
};
inline ::System::Reflection::MethodAttributes System::Reflection::Emit::MethodBuilder::get_Attributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodAttributes>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::MethodBuilder::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::RuntimeMethodHandle System::Reflection::Emit::MethodBuilder::get_MethodHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeMethodHandle>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::MethodBuilder::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::MethodBuilder::get_ReflectedType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::Emit::MethodBuilder::GetBaseDefinition() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::MethodBuilder::GetCustomAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::MethodBuilder::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Reflection::MethodImplAttributes System::Reflection::Emit::MethodBuilder::GetMethodImplementationFlags() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodImplAttributes>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::Emit::MethodBuilder::GetParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::Emit::MethodBuilder::Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                         ::ArrayW<::System::Object*> parameters, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
inline bool System::Reflection::Emit::MethodBuilder::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::MethodBuilder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::MethodBuilder::MethodBuilder() {}
