#pragma once
// IWYU pragma private; include "System/Xml/ReadContentAsBinaryHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/Xml/zzzz__Base64Decoder_def.hpp"
#include "System/Xml/zzzz__BinHexDecoder_def.hpp"
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ReadContentAsBinaryHelper_State::ReadContentAsBinaryHelper_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::ReadContentAsBinaryHelper_State::ReadContentAsBinaryHelper_State() {}
constexpr ::System::Xml::ReadContentAsBinaryHelper_State System::Xml::ReadContentAsBinaryHelper_State::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::ReadContentAsBinaryHelper_State System::Xml::ReadContentAsBinaryHelper_State::InReadContent{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::ReadContentAsBinaryHelper_State System::Xml::ReadContentAsBinaryHelper_State::InReadElementContent{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)(::System::Xml::XmlReader*)>(&::System::Xml::ReadContentAsBinaryHelper::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61ace58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.CreateOrReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ReadContentAsBinaryHelper* (*)(::System::Xml::ReadContentAsBinaryHelper*, ::System::Xml::XmlReader*)>(
    &::System::Xml::ReadContentAsBinaryHelper::CreateOrReset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61acee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                                                             { "CreateOrReset", {}, { ::i2c::type_of<::System::Xml::ReadContentAsBinaryHelper*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ReadContentAsBinaryHelper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x61acf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                                                             { "ReadContentAsBase64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ReadContentAsBinaryHelper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x61ad350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                                                             { "ReadContentAsBinHex", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Finish)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61ad5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61acf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Init)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61ad14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.InitBase64Decoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::InitBase64Decoder)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61ad2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "InitBase64Decoder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.InitBinHexDecoder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::InitBinHexDecoder)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61ad538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "InitBinHexDecoder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.ReadContentAsBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::ReadContentAsBinaryHelper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinary)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x61ad178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                                                             { "ReadContentAsBinary", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.MoveToNextContentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ReadContentAsBinaryHelper::*)(bool)>(&::System::Xml::ReadContentAsBinaryHelper::MoveToNextContentNode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x61ad6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "MoveToNextContentNode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reader = value;
}
constexpr ::System::Xml::ReadContentAsBinaryHelper_State& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Xml::ReadContentAsBinaryHelper_State const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_state(::System::Xml::ReadContentAsBinaryHelper_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr int32_t& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueOffset;
}
constexpr int32_t const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueOffset;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_valueOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueOffset = value;
}
constexpr bool& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_isEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnd;
}
constexpr bool const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_isEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnd;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_isEnd(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEnd = value;
}
constexpr bool& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_canReadValueChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canReadValueChunk;
}
constexpr bool const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_canReadValueChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canReadValueChunk;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_canReadValueChunk(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canReadValueChunk = value;
}
constexpr ::ArrayW<char16_t>& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChunk;
}
constexpr ::ArrayW<char16_t> const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChunk;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_valueChunk(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueChunk = value;
}
constexpr int32_t& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueChunkLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChunkLength;
}
constexpr int32_t const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueChunkLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChunkLength;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_valueChunkLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueChunkLength = value;
}
constexpr ::System::Xml::IncrementalReadDecoder*& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr ::System::Xml::IncrementalReadDecoder* const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_decoder(::System::Xml::IncrementalReadDecoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decoder = value;
}
constexpr ::System::Xml::Base64Decoder*& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_base64Decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base64Decoder;
}
constexpr ::System::Xml::Base64Decoder* const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_base64Decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base64Decoder;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_base64Decoder(::System::Xml::Base64Decoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___base64Decoder = value;
}
constexpr ::System::Xml::BinHexDecoder*& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_binHexDecoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binHexDecoder;
}
constexpr ::System::Xml::BinHexDecoder* const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_binHexDecoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binHexDecoder;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_binHexDecoder(::System::Xml::BinHexDecoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binHexDecoder = value;
}
inline void System::Xml::ReadContentAsBinaryHelper::_ctor(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::System::Xml::ReadContentAsBinaryHelper* System::Xml::ReadContentAsBinaryHelper::CreateOrReset(::System::Xml::ReadContentAsBinaryHelper* helper, ::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                                                           { "CreateOrReset", {}, { ::i2c::type_of<::System::Xml::ReadContentAsBinaryHelper*>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadContentAsBinaryHelper*>(nullptr, ___internal_method, helper, reader);
}
inline int32_t System::Xml::ReadContentAsBinaryHelper::ReadContentAsBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                                                           { "ReadContentAsBase64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                                                           { "ReadContentAsBinHex", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::ReadContentAsBinaryHelper::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::ReadContentAsBinaryHelper::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::ReadContentAsBinaryHelper::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::ReadContentAsBinaryHelper::InitBase64Decoder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "InitBase64Decoder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::ReadContentAsBinaryHelper::InitBinHexDecoder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "InitBinHexDecoder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinary(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                                                           { "ReadContentAsBinary", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline bool System::Xml::ReadContentAsBinaryHelper::MoveToNextContentNode(bool moveIfOnContentNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(), { "MoveToNextContentNode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, moveIfOnContentNode);
}
inline ::System::Xml::ReadContentAsBinaryHelper* System::Xml::ReadContentAsBinaryHelper::New_ctor(::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::ReadContentAsBinaryHelper*>(reader));
}
// Ctor Parameters []
constexpr ::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinaryHelper() {}
