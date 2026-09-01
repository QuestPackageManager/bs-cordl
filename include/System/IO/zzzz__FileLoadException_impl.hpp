#pragma once
// IWYU pragma private; include "System\IO\FileLoadException.hpp"
#include "System/IO/zzzz__IOException_impl.hpp"
#include "System/IO/zzzz__FileLoadException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::IO::FileLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileLoadException::*)()>(&::System::IO::FileLoadException::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bf6804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileLoadException::*)(::StringW)>(&::System::IO::FileLoadException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bf6864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileLoadException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileLoadException::*)()>(&::System::IO::FileLoadException::get_Message)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bf6888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { ::i2c::class_of<::System::IO::FileLoadException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileLoadException.get_FileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileLoadException::*)()>(&::System::IO::FileLoadException::get_FileName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf6928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { "get_FileName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileLoadException.get_FusionLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileLoadException::*)()>(&::System::IO::FileLoadException::get_FusionLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf6930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { "get_FusionLog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileLoadException.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileLoadException::*)()>(&::System::IO::FileLoadException::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5bf6938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { ::i2c::class_of<::System::IO::FileLoadException*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileLoadException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileLoadException::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                 ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::FileLoadException::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bf6b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileLoadException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileLoadException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::FileLoadException::GetObjectData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5bf6bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { ::i2c::class_of<::System::IO::FileLoadException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileLoadException.FormatFileLoadExceptionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::IO::FileLoadException::FormatFileLoadExceptionMessage)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bf68ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { "FormatFileLoadExceptionMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::FileLoadException::__cordl_internal_get__FileName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FileName_k__BackingField;
}
constexpr ::StringW const& System::IO::FileLoadException::__cordl_internal_get__FileName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FileName_k__BackingField;
}
constexpr void System::IO::FileLoadException::__cordl_internal_set__FileName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FileName_k__BackingField = value;
}
constexpr ::StringW& System::IO::FileLoadException::__cordl_internal_get__FusionLog_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FusionLog_k__BackingField;
}
constexpr ::StringW const& System::IO::FileLoadException::__cordl_internal_get__FusionLog_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FusionLog_k__BackingField;
}
constexpr void System::IO::FileLoadException::__cordl_internal_set__FusionLog_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FusionLog_k__BackingField = value;
}
inline void System::IO::FileLoadException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileLoadException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::StringW System::IO::FileLoadException::get_Message() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileLoadException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::FileLoadException::get_FileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { "get_FileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::FileLoadException::get_FusionLog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { "get_FusionLog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::FileLoadException::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileLoadException*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::IO::FileLoadException::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::IO::FileLoadException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::FileLoadException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::IO::FileLoadException::FormatFileLoadExceptionMessage(::StringW fileName, int32_t hResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::FileLoadException*>(), { "FormatFileLoadExceptionMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fileName, hResult);
}
inline ::System::IO::FileLoadException* System::IO::FileLoadException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileLoadException*>());
}
inline ::System::IO::FileLoadException* System::IO::FileLoadException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileLoadException*>(message));
}
inline ::System::IO::FileLoadException* System::IO::FileLoadException::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileLoadException*>(info, context));
}
// Ctor Parameters []
constexpr ::System::IO::FileLoadException::FileLoadException() {}
