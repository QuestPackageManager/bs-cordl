#pragma once
// IWYU pragma private; include "System\Globalization\CultureNotFoundException.hpp"
#include "System/zzzz__ArgumentException_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Globalization/zzzz__CultureNotFoundException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::System::Globalization::CultureNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureNotFoundException::*)()>(&::System::Globalization::CultureNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b98fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureNotFoundException::*)(::StringW, ::StringW)>(&::System::Globalization::CultureNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b9906c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureNotFoundException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureNotFoundException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Globalization::CultureNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5b990a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureNotFoundException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureNotFoundException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Globalization::CultureNotFoundException::GetObjectData)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b992e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { ::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureNotFoundException.get_InvalidCultureId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::System::Globalization::CultureNotFoundException::*)()>(
    &::System::Globalization::CultureNotFoundException::get_InvalidCultureId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b99430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { ::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureNotFoundException.get_InvalidCultureName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureNotFoundException::*)()>(
    &::System::Globalization::CultureNotFoundException::get_InvalidCultureName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b99438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { ::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureNotFoundException.get_DefaultMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Globalization::CultureNotFoundException::get_DefaultMessage)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b99028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { "get_DefaultMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureNotFoundException.get_FormatedInvalidCultureId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureNotFoundException::*)()>(
    &::System::Globalization::CultureNotFoundException::get_FormatedInvalidCultureId)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b99440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { "get_FormatedInvalidCultureId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureNotFoundException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureNotFoundException::*)()>(&::System::Globalization::CultureNotFoundException::get_Message)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b9958c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { ::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::CultureNotFoundException::__cordl_internal_get__invalidCultureName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invalidCultureName;
}
constexpr ::StringW const& System::Globalization::CultureNotFoundException::__cordl_internal_get__invalidCultureName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invalidCultureName;
}
constexpr void System::Globalization::CultureNotFoundException::__cordl_internal_set__invalidCultureName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invalidCultureName = value;
}
constexpr ::System::Nullable_1<int32_t>& System::Globalization::CultureNotFoundException::__cordl_internal_get__invalidCultureId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invalidCultureId;
}
constexpr ::System::Nullable_1<int32_t> const& System::Globalization::CultureNotFoundException::__cordl_internal_get__invalidCultureId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invalidCultureId;
}
constexpr void System::Globalization::CultureNotFoundException::__cordl_internal_set__invalidCultureId(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invalidCultureId = value;
}
inline void System::Globalization::CultureNotFoundException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Globalization::CultureNotFoundException::_ctor(::StringW paramName, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paramName, message);
}
inline void System::Globalization::CultureNotFoundException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Globalization::CultureNotFoundException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Nullable_1<int32_t> System::Globalization::CultureNotFoundException::get_InvalidCultureId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureNotFoundException::get_InvalidCultureName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureNotFoundException::get_DefaultMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { "get_DefaultMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::Globalization::CultureNotFoundException::get_FormatedInvalidCultureId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), { "get_FormatedInvalidCultureId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureNotFoundException::get_Message() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::CultureNotFoundException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Globalization::CultureNotFoundException* System::Globalization::CultureNotFoundException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureNotFoundException*>());
}
inline ::System::Globalization::CultureNotFoundException* System::Globalization::CultureNotFoundException::New_ctor(::StringW paramName, ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureNotFoundException*>(paramName, message));
}
inline ::System::Globalization::CultureNotFoundException* System::Globalization::CultureNotFoundException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureNotFoundException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::Globalization::CultureNotFoundException::CultureNotFoundException() {}
