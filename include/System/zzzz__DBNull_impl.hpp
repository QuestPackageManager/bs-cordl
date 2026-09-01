#pragma once
// IWYU pragma private; include "System\DBNull.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DBNull_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::DBNull._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DBNull::*)()>(&::System::DBNull::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c26134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DBNull::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::DBNull::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c26138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DBNull*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DBNull::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::DBNull::GetObjectData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c26184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::DBNull*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::DBNull::*)()>(&::System::DBNull::ToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c26194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { ::i2c::class_of<::System::DBNull*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::ToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c261a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.GetTypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::System::DBNull::*)()>(&::System::DBNull::GetTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c261bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "GetTypeCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c261c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c26210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c2625c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c262a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c262f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c26340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c2638c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c263d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c26424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c26470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c264bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c26508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c26554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DBNull::*)(::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c265a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DBNull.System_IConvertible_ToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::DBNull::*)(::System::Type*, ::System::IFormatProvider*)>(&::System::DBNull::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c265ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
inline void System::DBNull::setStaticF_Value(::System::DBNull* value) {
  ::cordl_internals::setStaticField<::System::DBNull*, "Value", ::System::DBNull*>(std::forward<::System::DBNull*>(value));
}
inline ::System::DBNull* System::DBNull::getStaticF_Value() {
  return ::cordl_internals::getStaticField<::System::DBNull*, "Value", ::System::DBNull*>();
}
inline void System::DBNull::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::DBNull::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DBNull*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::DBNull::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DBNull*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::DBNull::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DBNull*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::DBNull::ToString(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, provider);
}
inline ::System::TypeCode System::DBNull::GetTypeCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "GetTypeCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(this, ___internal_method);
}
inline bool System::DBNull::System_IConvertible_ToBoolean(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, provider);
}
inline char16_t System::DBNull::System_IConvertible_ToChar(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, provider);
}
inline int8_t System::DBNull::System_IConvertible_ToSByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method, provider);
}
inline uint8_t System::DBNull::System_IConvertible_ToByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, provider);
}
inline int16_t System::DBNull::System_IConvertible_ToInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, provider);
}
inline uint16_t System::DBNull::System_IConvertible_ToUInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, provider);
}
inline int32_t System::DBNull::System_IConvertible_ToInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, provider);
}
inline uint32_t System::DBNull::System_IConvertible_ToUInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, provider);
}
inline int64_t System::DBNull::System_IConvertible_ToInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, provider);
}
inline uint64_t System::DBNull::System_IConvertible_ToUInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, provider);
}
inline float_t System::DBNull::System_IConvertible_ToSingle(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, provider);
}
inline double_t System::DBNull::System_IConvertible_ToDouble(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, provider);
}
inline ::System::Decimal System::DBNull::System_IConvertible_ToDecimal(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method, provider);
}
inline ::System::DateTime System::DBNull::System_IConvertible_ToDateTime(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, provider);
}
inline ::System::Object* System::DBNull::System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DBNull*>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, provider);
}
inline ::System::DBNull* System::DBNull::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DBNull*>());
}
inline ::System::DBNull* System::DBNull::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DBNull*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::DBNull::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::DBNull::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IConvertible"
constexpr System::DBNull::operator ::System::IConvertible*() noexcept {
  return static_cast<::System::IConvertible*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* System::DBNull::i___System__IConvertible() noexcept {
  return static_cast<::System::IConvertible*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::DBNull::DBNull() {}
