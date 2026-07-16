#pragma once
// IWYU pragma private; include "System/Reflection/MonoMethodInfo.hpp"
#include "System/Reflection/zzzz__CallingConventions_impl.hpp"
#include "System/Reflection/zzzz__MethodAttributes_impl.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_impl.hpp"
#include "System/Reflection/zzzz__MonoMethodInfo_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.get_method_info
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::System::Reflection::MonoMethodInfo>)>(&::System::Reflection::MonoMethodInfo::get_method_info)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8aa84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(),
                                                             { "get_method_info", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Reflection::MonoMethodInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.get_method_attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::System::Reflection::MonoMethodInfo::get_method_attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8aa88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "get_method_attributes", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.GetMethodInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MonoMethodInfo (*)(::System::IntPtr)>(&::System::Reflection::MonoMethodInfo::GetMethodInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b8aa90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetMethodInfo", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.GetDeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::IntPtr)>(&::System::Reflection::MonoMethodInfo::GetDeclaringType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b8aac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetDeclaringType", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.GetReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::IntPtr)>(&::System::Reflection::MonoMethodInfo::GetReturnType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b8aae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetReturnType", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodAttributes (*)(::System::IntPtr)>(&::System::Reflection::MonoMethodInfo::GetAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8ab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetAttributes", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.GetCallingConvention
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::CallingConventions (*)(::System::IntPtr)>(&::System::Reflection::MonoMethodInfo::GetCallingConvention)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b8ab18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetCallingConvention", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.GetMethodImplementationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodImplAttributes (*)(::System::IntPtr)>(&::System::Reflection::MonoMethodInfo::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b8ab40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetMethodImplementationFlags", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.get_parameter_info
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (*)(::System::IntPtr, ::System::Reflection::MemberInfo*)>(
    &::System::Reflection::MonoMethodInfo::get_parameter_info)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8ab68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(),
                                                             { "get_parameter_info", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.GetParametersInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (*)(::System::IntPtr, ::System::Reflection::MemberInfo*)>(
    &::System::Reflection::MonoMethodInfo::GetParametersInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8ab6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(),
                                                             { "GetParametersInfo", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.get_retval_marshal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::MarshalAsAttribute* (*)(::System::IntPtr)>(&::System::Reflection::MonoMethodInfo::get_retval_marshal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8ab70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "get_retval_marshal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MonoMethodInfo.GetReturnParameterInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ParameterInfo* (*)(::System::Reflection::RuntimeMethodInfo*)>(
    &::System::Reflection::MonoMethodInfo::GetReturnParameterInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b8ab78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetReturnParameterInfo", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>() } })));
    return ___internal_method;
  }
};
inline void System::Reflection::MonoMethodInfo::get_method_info(::System::IntPtr handle, ::by_ref<::System::Reflection::MonoMethodInfo> info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(),
                                                           { "get_method_info", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Reflection::MonoMethodInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, info);
}
inline int32_t System::Reflection::MonoMethodInfo::get_method_attributes(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "get_method_attributes", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::System::Reflection::MonoMethodInfo System::Reflection::MonoMethodInfo::GetMethodInfo(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetMethodInfo", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MonoMethodInfo>(nullptr, ___internal_method, handle);
}
inline ::System::Type* System::Reflection::MonoMethodInfo::GetDeclaringType(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetDeclaringType", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, handle);
}
inline ::System::Type* System::Reflection::MonoMethodInfo::GetReturnType(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetReturnType", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, handle);
}
inline ::System::Reflection::MethodAttributes System::Reflection::MonoMethodInfo::GetAttributes(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetAttributes", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodAttributes>(nullptr, ___internal_method, handle);
}
inline ::System::Reflection::CallingConventions System::Reflection::MonoMethodInfo::GetCallingConvention(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetCallingConvention", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::CallingConventions>(nullptr, ___internal_method, handle);
}
inline ::System::Reflection::MethodImplAttributes System::Reflection::MonoMethodInfo::GetMethodImplementationFlags(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetMethodImplementationFlags", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodImplAttributes>(nullptr, ___internal_method, handle);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::MonoMethodInfo::get_parameter_info(::System::IntPtr handle, ::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(),
                                                           { "get_parameter_info", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(nullptr, ___internal_method, handle, member);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::MonoMethodInfo::GetParametersInfo(::System::IntPtr handle, ::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(),
                                                           { "GetParametersInfo", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(nullptr, ___internal_method, handle, member);
}
inline ::System::Runtime::InteropServices::MarshalAsAttribute* System::Reflection::MonoMethodInfo::get_retval_marshal(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "get_retval_marshal", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::MarshalAsAttribute*>(nullptr, ___internal_method, handle);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::MonoMethodInfo::GetReturnParameterInfo(::System::Reflection::RuntimeMethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::MonoMethodInfo>(), { "GetReturnParameterInfo", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterInfo*>(nullptr, ___internal_method, method);
}
// Ctor Parameters [CppParam { name: "parent", ty: "::System::Type*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ret", ty: "::System::Type*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "attrs", ty: "::System::Reflection::MethodAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "iattrs", ty: "::System::Reflection::MethodImplAttributes",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "callconv", ty: "::System::Reflection::CallingConventions", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::MonoMethodInfo::MonoMethodInfo(::System::Type* parent, ::System::Type* ret, ::System::Reflection::MethodAttributes attrs,
                                                               ::System::Reflection::MethodImplAttributes iattrs, ::System::Reflection::CallingConventions callconv) noexcept {
  this->parent = parent;
  this->ret = ret;
  this->attrs = attrs;
  this->iattrs = iattrs;
  this->callconv = callconv;
}
// Ctor Parameters []
constexpr ::System::Reflection::MonoMethodInfo::MonoMethodInfo() {}
