#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\CSharpCodeHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CSharpCodeHelpers_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers.IsProperIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::IsProperIdentifier)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6500d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(), { "IsProperIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers.IsEmptyOrProperIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::IsEmptyOrProperIdentifier)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6500e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(), { "IsEmptyOrProperIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers.IsEmptyOrProperNamespaceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::IsEmptyOrProperNamespaceName)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6500e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(), { "IsEmptyOrProperNamespaceName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers.MakeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::MakeIdentifier)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6500ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(),
                                                                                           { "MakeIdentifier", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers.MakeTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::MakeTypeName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6501108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(),
                                                                                           { "MakeTypeName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::IsProperIdentifier(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(), { "IsProperIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::IsEmptyOrProperIdentifier(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(), { "IsEmptyOrProperIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline bool UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::IsEmptyOrProperNamespaceName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(), { "IsEmptyOrProperNamespaceName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name);
}
inline ::StringW UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::MakeIdentifier(::StringW name, ::StringW suffix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(),
                                                                                         { "MakeIdentifier", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, suffix);
}
inline ::StringW UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::MakeTypeName(::StringW name, ::StringW suffix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*>(),
                                                                                         { "MakeTypeName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, suffix);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers::CSharpCodeHelpers() {}
