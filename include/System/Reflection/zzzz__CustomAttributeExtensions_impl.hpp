#pragma once
// IWYU pragma private; include "System\Reflection\CustomAttributeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__CustomAttributeExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::CustomAttributeExtensions.GetCustomAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Reflection::Assembly*, ::System::Type*)>(
    &::System::Reflection::CustomAttributeExtensions::GetCustomAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                             { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeExtensions.GetCustomAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(
    &::System::Reflection::CustomAttributeExtensions::GetCustomAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                             { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeExtensions.GetCustomAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Reflection::MemberInfo*, ::System::Type*, bool)>(
    &::System::Reflection::CustomAttributeExtensions::GetCustomAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeExtensions.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (*)(::System::Reflection::Assembly*)>(
    &::System::Reflection::CustomAttributeExtensions::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeExtensions.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (*)(::System::Reflection::MemberInfo*)>(
    &::System::Reflection::CustomAttributeExtensions::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeExtensions.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(
    &::System::Reflection::CustomAttributeExtensions::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                             { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeExtensions.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (*)(::System::Reflection::MemberInfo*, ::System::Type*, bool)>(
    &::System::Reflection::CustomAttributeExtensions::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::CustomAttributeExtensions.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&::System::Reflection::CustomAttributeExtensions::IsDefined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b85ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                             { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::Attribute* System::Reflection::CustomAttributeExtensions::GetCustomAttribute(::System::Reflection::Assembly* element, ::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                           { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, element, attributeType);
}
inline ::System::Attribute* System::Reflection::CustomAttributeExtensions::GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                           { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, element, attributeType);
}
template <typename T> inline T System::Reflection::CustomAttributeExtensions::GetCustomAttribute(::System::Reflection::Assembly* element) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                           { "GetCustomAttribute", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, element);
}
template <typename T> inline T System::Reflection::CustomAttributeExtensions::GetCustomAttribute(::System::Reflection::MemberInfo* element) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                           { "GetCustomAttribute", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, element);
}
inline ::System::Attribute* System::Reflection::CustomAttributeExtensions::GetCustomAttribute(::System::Reflection::MemberInfo* element, ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                              { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, element, attributeType, inherit);
}
template <typename T> inline T System::Reflection::CustomAttributeExtensions::GetCustomAttribute(::System::Reflection::MemberInfo* element, bool inherit) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                           { "GetCustomAttribute", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, element, inherit);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* System::Reflection::CustomAttributeExtensions::GetCustomAttributes(::System::Reflection::Assembly* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>(nullptr, ___internal_method, element);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* System::Reflection::CustomAttributeExtensions::GetCustomAttributes(::System::Reflection::MemberInfo* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(), { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>(nullptr, ___internal_method, element);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* System::Reflection::CustomAttributeExtensions::GetCustomAttributes(::System::Reflection::MemberInfo* element,
                                                                                                                                               ::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                           { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>(nullptr, ___internal_method, element, attributeType);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* System::Reflection::CustomAttributeExtensions::GetCustomAttributes(::System::Reflection::MemberInfo* element) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                           { "GetCustomAttributes", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method, element);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* System::Reflection::CustomAttributeExtensions::GetCustomAttributes(::System::Reflection::MemberInfo* element,
                                                                                                                                               ::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                              { "GetCustomAttributes", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>*>(nullptr, ___internal_method, element, attributeType, inherit);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* System::Reflection::CustomAttributeExtensions::GetCustomAttributes(::System::Reflection::MemberInfo* element, bool inherit) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                           { "GetCustomAttributes", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method, element, inherit);
}
inline bool System::Reflection::CustomAttributeExtensions::IsDefined(::System::Reflection::MemberInfo* element, ::System::Type* attributeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::CustomAttributeExtensions*>(),
                                                           { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, attributeType);
}
// Ctor Parameters []
constexpr ::System::Reflection::CustomAttributeExtensions::CustomAttributeExtensions() {}
