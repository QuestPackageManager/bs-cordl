#pragma once
// IWYU pragma private; include "System\Text\EncoderReplacementFallback.hpp"
#include "System/Text/zzzz__EncoderFallback_impl.hpp"
#include "System/Text/zzzz__EncoderReplacementFallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::EncoderReplacementFallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderReplacementFallback::*)()>(&::System::Text::EncoderReplacementFallback::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ad4264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderReplacementFallback::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Text::EncoderReplacementFallback::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ad5298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallback.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Text::EncoderReplacementFallback::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Text::EncoderReplacementFallback::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ad539c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::EncoderReplacementFallback::*)(::StringW)>(&::System::Text::EncoderReplacementFallback::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5ad5120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallback.get_DefaultString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::EncoderReplacementFallback::*)()>(&::System::Text::EncoderReplacementFallback::get_DefaultString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ad5404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { "get_DefaultString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallback.CreateFallbackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::EncoderFallbackBuffer* (::System::Text::EncoderReplacementFallback::*)()>(
    &::System::Text::EncoderReplacementFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ad540c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallback.get_MaxCharCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderReplacementFallback::*)()>(&::System::Text::EncoderReplacementFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ad549c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallback.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Text::EncoderReplacementFallback::*)(::System::Object*)>(&::System::Text::EncoderReplacementFallback::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ad54b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncoderReplacementFallback.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::EncoderReplacementFallback::*)()>(&::System::Text::EncoderReplacementFallback::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ad5534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { ::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Text::EncoderReplacementFallback::__cordl_internal_get__strDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDefault;
}
constexpr ::StringW const& System::Text::EncoderReplacementFallback::__cordl_internal_get__strDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strDefault;
}
constexpr void System::Text::EncoderReplacementFallback::__cordl_internal_set__strDefault(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strDefault = value;
}
inline void System::Text::EncoderReplacementFallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Text::EncoderReplacementFallback::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Text::EncoderReplacementFallback::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                               ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Text::EncoderReplacementFallback::_ctor(::StringW replacement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, replacement);
}
inline ::StringW System::Text::EncoderReplacementFallback::get_DefaultString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), { "get_DefaultString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Text::EncoderFallbackBuffer* System::Text::EncoderReplacementFallback::CreateFallbackBuffer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer*>(this, ___internal_method);
}
inline int32_t System::Text::EncoderReplacementFallback::get_MaxCharCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Text::EncoderReplacementFallback::Equals(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::Text::EncoderReplacementFallback::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Text::EncoderReplacementFallback*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::EncoderReplacementFallback* System::Text::EncoderReplacementFallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderReplacementFallback*>());
}
inline ::System::Text::EncoderReplacementFallback* System::Text::EncoderReplacementFallback::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                      ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderReplacementFallback*>(info, context));
}
inline ::System::Text::EncoderReplacementFallback* System::Text::EncoderReplacementFallback::New_ctor(::StringW replacement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::EncoderReplacementFallback*>(replacement));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Text::EncoderReplacementFallback::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Text::EncoderReplacementFallback::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Text::EncoderReplacementFallback::EncoderReplacementFallback() {}
