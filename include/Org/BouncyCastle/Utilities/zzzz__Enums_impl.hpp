#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Enums.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__Enums_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Enums.GetEnumValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Enum* (*)(::System::Type*, ::StringW)>(&::Org::BouncyCastle::Utilities::Enums::GetEnumValue)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x363b624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { "GetEnumValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Enums.GetEnumValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::Type*)>(&::Org::BouncyCastle::Utilities::Enums::GetEnumValues)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x363b7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { "GetEnumValues", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Enums.GetArbitraryValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Enum* (*)(::System::Type*)>(&::Org::BouncyCastle::Utilities::Enums::GetArbitraryValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x363b8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { "GetArbitraryValue", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Enums.IsEnumType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Org::BouncyCastle::Utilities::Enums::IsEnumType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x363b7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { "IsEnumType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Enums._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Enums::*)()>(&::Org::BouncyCastle::Utilities::Enums::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363b978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Enum* Org::BouncyCastle::Utilities::Enums::GetEnumValue(::System::Type* enumType, ::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { "GetEnumValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Enum*>(nullptr, ___internal_method, enumType, s);
}
inline ::System::Array* Org::BouncyCastle::Utilities::Enums::GetEnumValues(::System::Type* enumType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { "GetEnumValues", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, enumType);
}
inline ::System::Enum* Org::BouncyCastle::Utilities::Enums::GetArbitraryValue(::System::Type* enumType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { "GetArbitraryValue", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Enum*>(nullptr, ___internal_method, enumType);
}
inline bool Org::BouncyCastle::Utilities::Enums::IsEnumType(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { "IsEnumType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline void Org::BouncyCastle::Utilities::Enums::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Enums*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Enums* Org::BouncyCastle::Utilities::Enums::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Enums*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Enums::Enums() {}
