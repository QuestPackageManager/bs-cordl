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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::ReadContentAsBinaryHelper::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ffdb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.CreateOrReset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::ReadContentAsBinaryHelper* (*)(::System::Xml::ReadContentAsBinaryHelper*, ::System::Xml::XmlReader*)>(
    &::System::Xml::ReadContentAsBinaryHelper::CreateOrReset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ffdba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "CreateOrReset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ReadContentAsBinaryHelper*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.ReadContentAsBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::ReadContentAsBinaryHelper::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBase64)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5ffdc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "ReadContentAsBase64", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.ReadContentAsBinHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::ReadContentAsBinaryHelper::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinHex)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ffe010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "ReadContentAsBinHex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Finish)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5ffe268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Finish",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ffdc1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Init)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ffde0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.InitBase64Decoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::InitBase64Decoder)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ffdfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(),
                                                                               "InitBase64Decoder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.InitBinHexDecoder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::InitBinHexDecoder)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ffe1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(),
                                                                               "InitBinHexDecoder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.ReadContentAsBinary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::ReadContentAsBinaryHelper::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinary)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ffde38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "ReadContentAsBinary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.MoveToNextContentNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::ReadContentAsBinaryHelper::*)(bool)>(
    &::System::Xml::ReadContentAsBinaryHelper::MoveToNextContentNode)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ffe3b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "MoveToNextContentNode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueChunk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChunk;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueChunk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChunk;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_valueChunk(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valueChunk)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___base64Decoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___binHexDecoder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::ReadContentAsBinaryHelper::_ctor(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::System::Xml::ReadContentAsBinaryHelper* System::Xml::ReadContentAsBinaryHelper::CreateOrReset(::System::Xml::ReadContentAsBinaryHelper* helper, ::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "CreateOrReset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::ReadContentAsBinaryHelper*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ReadContentAsBinaryHelper*, false>(nullptr, ___internal_method, helper, reader);
}
inline int32_t System::Xml::ReadContentAsBinaryHelper::ReadContentAsBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "ReadContentAsBase64", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline int32_t System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "ReadContentAsBinHex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::ReadContentAsBinaryHelper::Finish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Finish",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::ReadContentAsBinaryHelper::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::ReadContentAsBinaryHelper::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::ReadContentAsBinaryHelper::InitBase64Decoder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(),
                                                                             "InitBase64Decoder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::ReadContentAsBinaryHelper::InitBinHexDecoder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(),
                                                                             "InitBinHexDecoder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinary(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "ReadContentAsBinary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, index, count);
}
inline bool System::Xml::ReadContentAsBinaryHelper::MoveToNextContentNode(bool moveIfOnContentNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "MoveToNextContentNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, moveIfOnContentNode);
}
inline ::System::Xml::ReadContentAsBinaryHelper* System::Xml::ReadContentAsBinaryHelper::New_ctor(::System::Xml::XmlReader* reader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::ReadContentAsBinaryHelper*>(reader));
}
// Ctor Parameters []
constexpr ::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinaryHelper() {}
