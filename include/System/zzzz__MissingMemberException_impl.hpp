#pragma once
// IWYU pragma private; include "System\MissingMemberException.hpp"
#include "System/zzzz__MemberAccessException_impl.hpp"
#include "System/zzzz__MissingMemberException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::MissingMemberException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MissingMemberException::*)()>(&::System::MissingMemberException::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c6a3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MissingMemberException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MissingMemberException::*)(::StringW)>(&::System::MissingMemberException::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c6a374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MissingMemberException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MissingMemberException::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                  ::System::Runtime::Serialization::StreamingContext)>(&::System::MissingMemberException::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5c6a43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MissingMemberException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MissingMemberException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::MissingMemberException::GetObjectData)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c6a79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(), { ::i2c::class_of<::System::MissingMemberException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MissingMemberException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::MissingMemberException::*)()>(&::System::MissingMemberException::get_Message)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c6a6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(), { ::i2c::class_of<::System::MissingMemberException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MissingMemberException.FormatSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::System::MissingMemberException::FormatSignature)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c6a8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(), { "FormatSignature", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::MissingMemberException::__cordl_internal_get_ClassName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassName;
}
constexpr ::StringW const& System::MissingMemberException::__cordl_internal_get_ClassName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ClassName;
}
constexpr void System::MissingMemberException::__cordl_internal_set_ClassName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ClassName = value;
}
constexpr ::StringW& System::MissingMemberException::__cordl_internal_get_MemberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberName;
}
constexpr ::StringW const& System::MissingMemberException::__cordl_internal_get_MemberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MemberName;
}
constexpr void System::MissingMemberException::__cordl_internal_set_MemberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MemberName = value;
}
constexpr ::ArrayW<uint8_t>& System::MissingMemberException::__cordl_internal_get_Signature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Signature;
}
constexpr ::ArrayW<uint8_t> const& System::MissingMemberException::__cordl_internal_get_Signature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Signature;
}
constexpr void System::MissingMemberException::__cordl_internal_set_Signature(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Signature = value;
}
inline void System::MissingMemberException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::MissingMemberException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::MissingMemberException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::MissingMemberException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::MissingMemberException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::MissingMemberException::get_Message() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::MissingMemberException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::MissingMemberException::FormatSignature(::ArrayW<uint8_t> signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MissingMemberException*>(), { "FormatSignature", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, signature);
}
inline ::System::MissingMemberException* System::MissingMemberException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MissingMemberException*>());
}
inline ::System::MissingMemberException* System::MissingMemberException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MissingMemberException*>(message));
}
inline ::System::MissingMemberException* System::MissingMemberException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MissingMemberException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::MissingMemberException::MissingMemberException() {}
