#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Utils\MemberInfoExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__MemberInfoExtensions_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Reflection::MemberInfo*, ::System::Object*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::GetValue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5a47dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                             { "GetValue", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::SetValue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5a47f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                         { "SetValue", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.GetDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::GetDataType)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a48160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                                                           { "GetDataType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.IsStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsStatic)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5a482b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(), { "IsStatic", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.IsPublic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsPublic)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5a484d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(), { "IsPublic", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.BuildSignatureForDebugInspector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::MemberInfo*)>(
    &::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::BuildSignatureForDebugInspector)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5a486b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                                                           { "BuildSignatureForDebugInspector", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.IsCompatibleWithDebugInspector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsCompatibleWithDebugInspector)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5a41944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                                                           { "IsCompatibleWithDebugInspector", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.IsTypeEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsTypeEqual)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5a42228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                             { "IsTypeEqual", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.IsBaseTypeEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsBaseTypeEqual)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a48c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                             { "IsBaseTypeEqual", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions.CanBeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::CanBeChanged)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a48dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                                                           { "CanBeChanged", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
inline ::System::Object* Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::GetValue(::System::Reflection::MemberInfo* memberInfo, ::System::Object* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                           { "GetValue", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, memberInfo, instance);
}
inline void Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::SetValue(::System::Reflection::MemberInfo* memberInfo, ::System::Object* instance, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                              { "SetValue", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memberInfo, instance, value);
}
inline ::System::Type* Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::GetDataType(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                                                         { "GetDataType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, memberInfo);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsStatic(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(), { "IsStatic", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memberInfo);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsPublic(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(), { "IsPublic", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memberInfo);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::BuildSignatureForDebugInspector(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                                                         { "BuildSignatureForDebugInspector", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, memberInfo);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsCompatibleWithDebugInspector(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                                                         { "IsCompatibleWithDebugInspector", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memberInfo);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsTypeEqual(::System::Reflection::MemberInfo* member, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                           { "IsTypeEqual", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member, type);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::IsBaseTypeEqual(::System::Reflection::MemberInfo* member, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                           { "IsBaseTypeEqual", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member, type);
}
inline bool Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::CanBeChanged(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions*>(),
                                                                                         { "CanBeChanged", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, memberInfo);
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Utils::MemberInfoExtensions::MemberInfoExtensions() {}
