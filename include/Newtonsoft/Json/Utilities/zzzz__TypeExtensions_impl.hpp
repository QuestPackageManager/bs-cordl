#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\TypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__TypeExtensions_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Delegate*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::Method)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d348ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "Method", {}, { ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberTypes (*)(::System::Reflection::MemberInfo*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::MemberType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d34904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "MemberType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.ContainsGenericParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::ContainsGenericParameters)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d3491c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "ContainsGenericParameters", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsInterface)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d34938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsInterface", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsGenericType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsGenericType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d3494c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsGenericType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsGenericTypeDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d34968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsGenericTypeDefinition", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.BaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::BaseType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d34984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "BaseType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.Assembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::Assembly)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d349a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "Assembly", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsEnum)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d349bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsEnum", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsClass)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d349d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsClass", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsSealed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsSealed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d34a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsSealed", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsAbstract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsAbstract)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d34a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsAbstract", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsVisible)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d34a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsVisible", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsValueType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d34a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.IsPrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::IsPrimitive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d34aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsPrimitive", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.AssignableToTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::StringW, bool, ::by_ref<::System::Type*>)>(&::Newtonsoft::Json::Utilities::TypeExtensions::AssignableToTypeName)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d34ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(),
                            { "AssignableToTypeName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.AssignableToTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::StringW, bool)>(&::Newtonsoft::Json::Utilities::TypeExtensions::AssignableToTypeName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d34bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(),
                                                             { "AssignableToTypeName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::TypeExtensions.ImplementInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::Newtonsoft::Json::Utilities::TypeExtensions::ImplementInterface)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5d34c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(),
                                                                                           { "ImplementInterface", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::Reflection::MethodInfo* Newtonsoft::Json::Utilities::TypeExtensions::Method(::System::Delegate* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "Method", {}, { ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, d);
}
inline ::System::Reflection::MemberTypes Newtonsoft::Json::Utilities::TypeExtensions::MemberType(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "MemberType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes>(nullptr, ___internal_method, memberInfo);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::ContainsGenericParameters(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "ContainsGenericParameters", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsInterface(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsInterface", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsGenericType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsGenericType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsGenericTypeDefinition(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsGenericTypeDefinition", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Type* Newtonsoft::Json::Utilities::TypeExtensions::BaseType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "BaseType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::Assembly* Newtonsoft::Json::Utilities::TypeExtensions::Assembly(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "Assembly", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsEnum(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsEnum", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsClass(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsClass", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsSealed(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsSealed", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsAbstract(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsAbstract", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsVisible(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsVisible", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsValueType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsValueType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::IsPrimitive(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(), { "IsPrimitive", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::AssignableToTypeName(::System::Type* type, ::StringW fullTypeName, bool searchInterfaces, ::by_ref<::System::Type*> match) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(),
                          { "AssignableToTypeName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, fullTypeName, searchInterfaces, match);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::AssignableToTypeName(::System::Type* type, ::StringW fullTypeName, bool searchInterfaces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(),
                                                           { "AssignableToTypeName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, fullTypeName, searchInterfaces);
}
inline bool Newtonsoft::Json::Utilities::TypeExtensions::ImplementInterface(::System::Type* type, ::System::Type* interfaceType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::TypeExtensions*>(),
                                                                                         { "ImplementInterface", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, interfaceType);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::TypeExtensions::TypeExtensions() {}
