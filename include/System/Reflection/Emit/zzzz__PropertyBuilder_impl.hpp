#pragma once
// IWYU pragma private; include "System/Reflection/Emit/PropertyBuilder.hpp"
#include "System/Reflection/zzzz__PropertyInfo_impl.hpp"
#include "System/Reflection/Emit/zzzz__PropertyBuilder_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::PropertyBuilder::*)()>(&::System::Reflection::Emit::PropertyBuilder::get_CanRead)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9122c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::PropertyBuilder::*)()>(&::System::Reflection::Emit::PropertyBuilder::get_CanWrite)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b91264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::PropertyBuilder::*)()>(&::System::Reflection::Emit::PropertyBuilder::get_DeclaringType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9129c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::PropertyBuilder::*)()>(&::System::Reflection::Emit::PropertyBuilder::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b912d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.get_PropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::PropertyBuilder::*)()>(&::System::Reflection::Emit::PropertyBuilder::get_PropertyType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9130c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::PropertyBuilder::*)()>(&::System::Reflection::Emit::PropertyBuilder::get_ReflectedType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b91344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::PropertyBuilder::*)(bool)>(
    &::System::Reflection::Emit::PropertyBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9137c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::PropertyBuilder::*)(::System::Type*, bool)>(
    &::System::Reflection::Emit::PropertyBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b913b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.GetGetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::Emit::PropertyBuilder::*)(bool)>(
    &::System::Reflection::Emit::PropertyBuilder::GetGetMethod)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b913ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.GetIndexParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::Emit::PropertyBuilder::*)()>(
    &::System::Reflection::Emit::PropertyBuilder::GetIndexParameters)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b91424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.GetSetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::Emit::PropertyBuilder::*)(bool)>(
    &::System::Reflection::Emit::PropertyBuilder::GetSetMethod)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9145c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Reflection::Emit::PropertyBuilder::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                                   ::System::Globalization::CultureInfo*)>(&::System::Reflection::Emit::PropertyBuilder::GetValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b91494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::PropertyBuilder::*)(::System::Type*, bool)>(&::System::Reflection::Emit::PropertyBuilder::IsDefined)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b914cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::PropertyBuilder.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::Emit::PropertyBuilder::*)(
    ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::Emit::PropertyBuilder::SetValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b91504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 29 }));
    return ___internal_method;
  }
};
inline bool System::Reflection::Emit::PropertyBuilder::get_CanRead() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::Emit::PropertyBuilder::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::PropertyBuilder::get_DeclaringType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::PropertyBuilder::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::PropertyBuilder::get_PropertyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::PropertyBuilder::get_ReflectedType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::PropertyBuilder::GetCustomAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::PropertyBuilder::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Reflection::MethodInfo* System::Reflection::Emit::PropertyBuilder::GetGetMethod(bool nonPublic) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, nonPublic);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::Emit::PropertyBuilder::GetIndexParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::Emit::PropertyBuilder::GetSetMethod(bool nonPublic) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, nonPublic);
}
inline ::System::Object* System::Reflection::Emit::PropertyBuilder::GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                             ::ArrayW<::System::Object*> index, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, index, culture);
}
inline bool System::Reflection::Emit::PropertyBuilder::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline void System::Reflection::Emit::PropertyBuilder::SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                ::ArrayW<::System::Object*> index, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::Emit::PropertyBuilder*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value, invokeAttr, binder, index, culture);
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::PropertyBuilder::PropertyBuilder() {}
