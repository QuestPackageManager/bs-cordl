#pragma once
// IWYU pragma private; include "System\Reflection\Emit\DynamicMethod.hpp"
#include "System/Reflection/zzzz__MethodInfo_impl.hpp"
#include "System/Reflection/Emit/zzzz__DynamicMethod_def.hpp"
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
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodAttributes (::System::Reflection::Emit::DynamicMethod::*)()>(
    &::System::Reflection::Emit::DynamicMethod::get_Attributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b92014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::DynamicMethod::*)()>(&::System::Reflection::Emit::DynamicMethod::get_DeclaringType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9204c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::DynamicMethod::*)()>(&::System::Reflection::Emit::DynamicMethod::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b92084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.GetParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::Emit::DynamicMethod::*)()>(
    &::System::Reflection::Emit::DynamicMethod::GetParameters)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b920bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.get_MethodHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeMethodHandle (::System::Reflection::Emit::DynamicMethod::*)()>(&::System::Reflection::Emit::DynamicMethod::get_MethodHandle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b920f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::DynamicMethod::*)()>(&::System::Reflection::Emit::DynamicMethod::get_ReflectedType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9212c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::DynamicMethod::*)(bool)>(
    &::System::Reflection::Emit::DynamicMethod::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b92164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::DynamicMethod::*)(::System::Type*, bool)>(
    &::System::Reflection::Emit::DynamicMethod::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9219c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.GetMethodImplementationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodImplAttributes (::System::Reflection::Emit::DynamicMethod::*)()>(
    &::System::Reflection::Emit::DynamicMethod::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b921d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.GetBaseDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::Emit::DynamicMethod::*)()>(
    &::System::Reflection::Emit::DynamicMethod::GetBaseDefinition)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9220c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Reflection::Emit::DynamicMethod::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                                 ::System::Globalization::CultureInfo*)>(&::System::Reflection::Emit::DynamicMethod::Invoke)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b92244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::DynamicMethod.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::DynamicMethod::*)(::System::Type*, bool)>(&::System::Reflection::Emit::DynamicMethod::IsDefined)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9227c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 12 }));
    return ___internal_method;
  }
};
inline ::System::Reflection::MethodAttributes System::Reflection::Emit::DynamicMethod::get_Attributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodAttributes>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::DynamicMethod::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::DynamicMethod::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::Emit::DynamicMethod::GetParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline ::System::RuntimeMethodHandle System::Reflection::Emit::DynamicMethod::get_MethodHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeMethodHandle>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::DynamicMethod::get_ReflectedType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::DynamicMethod::GetCustomAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::DynamicMethod::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Reflection::MethodImplAttributes System::Reflection::Emit::DynamicMethod::GetMethodImplementationFlags() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodImplAttributes>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::Emit::DynamicMethod::GetBaseDefinition() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::Emit::DynamicMethod::Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                         ::ArrayW<::System::Object*> parameters, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
inline bool System::Reflection::Emit::DynamicMethod::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::DynamicMethod*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::DynamicMethod::DynamicMethod() {}
