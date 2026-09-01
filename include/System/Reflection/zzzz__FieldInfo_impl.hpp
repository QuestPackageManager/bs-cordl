#pragma once
// IWYU pragma private; include "System\Reflection\FieldInfo.hpp"
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__TypedReference_def.hpp"
//  Writing Method size for method: ::System::Reflection::FieldInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7e014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberTypes (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7e018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldAttributes (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_Attributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_FieldType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_FieldType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsInitOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsInitOnly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b7e020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsInitOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsLiteral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsLiteral)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b7e040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsLiteral", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsNotSerialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsNotSerialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b7e060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsNotSerialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b7e080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsFamily
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsFamily)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b7e0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsFamily", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsPrivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsPrivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b7e0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsPrivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsPublic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsPublic)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b7e0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsPublic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_FieldHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeFieldHandle (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_FieldHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::FieldInfo::*)(::System::Object*)>(&::System::Reflection::FieldInfo::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b7e118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7e124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*)>(&::System::Reflection::FieldInfo::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b7e138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*)>(&::System::Reflection::FieldInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b7e164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::FieldInfo::*)(::System::Object*)>(&::System::Reflection::FieldInfo::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::FieldInfo::*)(::System::Object*, ::System::Object*)>(&::System::Reflection::FieldInfo::SetValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b7e1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::FieldInfo::*)(
    ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(&::System::Reflection::FieldInfo::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.SetValueDirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::FieldInfo::*)(::System::TypedReference, ::System::Object*)>(&::System::Reflection::FieldInfo::SetValueDirect)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b7e204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetRawConstantValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::GetRawConstantValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b7e250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.internal_from_handle_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (*)(::System::IntPtr, ::System::IntPtr)>(&::System::Reflection::FieldInfo::internal_from_handle_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7e29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "internal_from_handle_type", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetFieldFromHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (*)(::System::RuntimeFieldHandle)>(&::System::Reflection::FieldInfo::GetFieldFromHandle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b7e2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "GetFieldFromHandle", {}, { ::i2c::type_of<::System::RuntimeFieldHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetFieldFromHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (*)(::System::RuntimeFieldHandle, ::System::RuntimeTypeHandle)>(
    &::System::Reflection::FieldInfo::GetFieldFromHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b7e2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(),
                                                             { "GetFieldFromHandle", {}, { ::i2c::type_of<::System::RuntimeFieldHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetFieldOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::GetFieldOffset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b7e37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_marshal_info
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::MarshalAsAttribute* (::System::Reflection::FieldInfo::*)()>(
    &::System::Reflection::FieldInfo::get_marshal_info)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7e3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_marshal_info", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5b7e3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "GetPseudoCustomAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*> (::System::Reflection::FieldInfo::*)()>(
    &::System::Reflection::FieldInfo::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5b7e5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "GetPseudoCustomAttributesData", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Reflection::FieldInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Reflection::FieldInfo::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes>(this, ___internal_method);
}
inline ::System::Reflection::FieldAttributes System::Reflection::FieldInfo::get_Attributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldAttributes>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::FieldInfo::get_FieldType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsInitOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsInitOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsLiteral() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsLiteral", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsNotSerialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsNotSerialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsStatic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsFamily() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsFamily", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsPrivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsPrivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsPublic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_IsPublic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::RuntimeFieldHandle System::Reflection::FieldInfo::get_FieldHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeFieldHandle>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::FieldInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::op_Equality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::FieldInfo::op_Inequality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::System::Object* System::Reflection::FieldInfo::GetValue(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline void System::Reflection::FieldInfo::SetValue(::System::Object* obj, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value);
}
inline void System::Reflection::FieldInfo::SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                    ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value, invokeAttr, binder, culture);
}
inline void System::Reflection::FieldInfo::SetValueDirect(::System::TypedReference obj, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value);
}
inline ::System::Object* System::Reflection::FieldInfo::GetRawConstantValue() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Reflection::FieldInfo* System::Reflection::FieldInfo::internal_from_handle_type(::System::IntPtr field_handle, ::System::IntPtr type_handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "internal_from_handle_type", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(nullptr, ___internal_method, field_handle, type_handle);
}
inline ::System::Reflection::FieldInfo* System::Reflection::FieldInfo::GetFieldFromHandle(::System::RuntimeFieldHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "GetFieldFromHandle", {}, { ::i2c::type_of<::System::RuntimeFieldHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(nullptr, ___internal_method, handle);
}
inline ::System::Reflection::FieldInfo* System::Reflection::FieldInfo::GetFieldFromHandle(::System::RuntimeFieldHandle handle, ::System::RuntimeTypeHandle declaringType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(),
                                                           { "GetFieldFromHandle", {}, { ::i2c::type_of<::System::RuntimeFieldHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(nullptr, ___internal_method, handle, declaringType);
}
inline int32_t System::Reflection::FieldInfo::GetFieldOffset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::FieldInfo*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::MarshalAsAttribute* System::Reflection::FieldInfo::get_marshal_info() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "get_marshal_info", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::MarshalAsAttribute*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> System::Reflection::FieldInfo::GetPseudoCustomAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "GetPseudoCustomAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*> System::Reflection::FieldInfo::GetPseudoCustomAttributesData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::FieldInfo*>(), { "GetPseudoCustomAttributesData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*>>(this, ___internal_method);
}
inline ::System::Reflection::FieldInfo* System::Reflection::FieldInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::FieldInfo*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::FieldInfo::FieldInfo() {}
