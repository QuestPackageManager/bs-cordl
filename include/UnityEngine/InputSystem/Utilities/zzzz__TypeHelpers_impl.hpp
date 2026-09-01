#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\TypeHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeHelpers_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeHelpers.IsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TypeCode)>(&::UnityEngine::InputSystem::Utilities::TypeHelpers::IsInt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x650ac20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeHelpers*>(), { "IsInt", {}, { ::i2c::type_of<::System::TypeCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeHelpers.GetValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Reflection::MemberInfo*)>(&::UnityEngine::InputSystem::Utilities::TypeHelpers::GetValueType)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650ac30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeHelpers*>(), { "GetValueType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeHelpers.GetNiceTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::UnityEngine::InputSystem::Utilities::TypeHelpers::GetNiceTypeName)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x650ad58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeHelpers*>(), { "GetNiceTypeName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::TypeHelpers.GetGenericTypeArgumentFromHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*, ::System::Type*, int32_t)>(
    &::UnityEngine::InputSystem::Utilities::TypeHelpers::GetGenericTypeArgumentFromHierarchy)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x650b128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeHelpers*>(),
                                                { "GetGenericTypeArgumentFromHierarchy", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
template <typename TObject> inline TObject UnityEngine::InputSystem::Utilities::TypeHelpers::As(::System::Object* obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeHelpers*>(), { "As", { ::i2c::class_of<TObject>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TObject>() })));
  return ::cordl_internals::RunMethodRethrow<TObject>(nullptr, ___internal_method, obj);
}
inline bool UnityEngine::InputSystem::Utilities::TypeHelpers::IsInt(::System::TypeCode type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeHelpers*>(), { "IsInt", {}, { ::i2c::type_of<::System::TypeCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Type* UnityEngine::InputSystem::Utilities::TypeHelpers::GetValueType(::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeHelpers*>(), { "GetValueType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, member);
}
inline ::StringW UnityEngine::InputSystem::Utilities::TypeHelpers::GetNiceTypeName(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeHelpers*>(), { "GetNiceTypeName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::System::Type* UnityEngine::InputSystem::Utilities::TypeHelpers::GetGenericTypeArgumentFromHierarchy(::System::Type* type, ::System::Type* genericTypeDefinition, int32_t argumentIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TypeHelpers*>(),
                                              { "GetGenericTypeArgumentFromHierarchy", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type, genericTypeDefinition, argumentIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::TypeHelpers::TypeHelpers() {}
