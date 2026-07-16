#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/StringBuffer.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_def.hpp"
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Utilities::StringBuffer::*)()>(&::Newtonsoft::Json::Utilities::StringBuffer::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d31404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::StringBuffer::*)(int32_t)>(&::Newtonsoft::Json::Utilities::StringBuffer::set_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3140c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "set_Position", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.get_IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Utilities::StringBuffer::*)()>(&::Newtonsoft::Json::Utilities::StringBuffer::get_IsEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d31414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "get_IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::StringBuffer::*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*, int32_t)>(
    &::Newtonsoft::Json::Utilities::StringBuffer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d31424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::StringBuffer::*)(::ArrayW<char16_t>)>(&::Newtonsoft::Json::Utilities::StringBuffer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d3144c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::StringBuffer::*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*, char16_t)>(
    &::Newtonsoft::Json::Utilities::StringBuffer::Append)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d31458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(),
                                                             { "Append", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::StringBuffer::*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*, ::ArrayW<char16_t>, int32_t, int32_t)>(
    &::Newtonsoft::Json::Utilities::StringBuffer::Append)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d31540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(),
            { "Append", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::StringBuffer::*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*)>(
    &::Newtonsoft::Json::Utilities::StringBuffer::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d315c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "Clear", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.EnsureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Utilities::StringBuffer::*)(::Newtonsoft::Json::IArrayPool_1<char16_t>*, int32_t)>(
    &::Newtonsoft::Json::Utilities::StringBuffer::EnsureSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d314d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(),
                                                             { "EnsureSize", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Utilities::StringBuffer::*)()>(&::Newtonsoft::Json::Utilities::StringBuffer::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d315f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { ::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Utilities::StringBuffer::*)(int32_t, int32_t)>(&::Newtonsoft::Json::Utilities::StringBuffer::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d31600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "ToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::StringBuffer.get_InternalBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::Newtonsoft::Json::Utilities::StringBuffer::*)()>(&::Newtonsoft::Json::Utilities::StringBuffer::get_InternalBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d31608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "get_InternalBuffer", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t Newtonsoft::Json::Utilities::StringBuffer::get_Position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Utilities::StringBuffer::set_Position(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "set_Position", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Utilities::StringBuffer::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Utilities::StringBuffer::_ctor(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, int32_t initalSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bufferPool, initalSize);
}
inline void Newtonsoft::Json::Utilities::StringBuffer::_ctor(::ArrayW<char16_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline void Newtonsoft::Json::Utilities::StringBuffer::Append(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(),
                                                           { "Append", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bufferPool, value);
}
inline void Newtonsoft::Json::Utilities::StringBuffer::Append(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, ::ArrayW<char16_t> buffer, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(),
          { "Append", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bufferPool, buffer, startIndex, count);
}
inline void Newtonsoft::Json::Utilities::StringBuffer::Clear(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "Clear", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bufferPool);
}
inline void Newtonsoft::Json::Utilities::StringBuffer::EnsureSize(::Newtonsoft::Json::IArrayPool_1<char16_t>* bufferPool, int32_t appendLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(),
                                                           { "EnsureSize", {}, { ::i2c::type_of<::Newtonsoft::Json::IArrayPool_1<char16_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bufferPool, appendLength);
}
inline ::StringW Newtonsoft::Json::Utilities::StringBuffer::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Utilities::StringBuffer::ToString(int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "ToString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, start, length);
}
inline ::ArrayW<char16_t> Newtonsoft::Json::Utilities::StringBuffer::get_InternalBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::StringBuffer>(), { "get_InternalBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_position", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer(::ArrayW<char16_t> _buffer, int32_t _position) noexcept {
  this->_buffer = _buffer;
  this->_position = _position;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::StringBuffer::StringBuffer() {}
