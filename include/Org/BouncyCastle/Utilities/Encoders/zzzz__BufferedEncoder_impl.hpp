#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/BufferedEncoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__BufferedEncoder_def.hpp"
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__ITranslator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::*)(
    ::Org::BouncyCastle::Utilities::Encoders::ITranslator*, int32_t)>(&::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x25d78a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder.ProcessByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::*)(
    uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::ProcessByte)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x25d79d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder*>::get(), "ProcessByte", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder.ProcessBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::ProcessBytes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x25d7b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder*>::get(), "ProcessBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::__cordl_internal_get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::__cordl_internal_get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Buffer;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::__cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::__cordl_internal_get_bufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::__cordl_internal_get_bufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufOff;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::__cordl_internal_set_bufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufOff = value;
}
constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator*& Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::__cordl_internal_get_translator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translator;
}
constexpr ::Org::BouncyCastle::Utilities::Encoders::ITranslator* const& Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::__cordl_internal_get_translator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___translator;
}
constexpr void Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::__cordl_internal_set_translator(::Org::BouncyCastle::Utilities::Encoders::ITranslator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___translator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::_ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Encoders::ITranslator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, translator, bufferSize);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder*>::get(), "ProcessByte", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, input, outBytes, outOff);
}
inline int32_t Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len,
                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder*>::get(), "ProcessBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, input, inOff, len, outBytes, outOff);
}
inline ::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder* Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::New_ctor(::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator,
                                                                                                                                    int32_t bufferSize) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder*>(translator, bufferSize));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Encoders::BufferedEncoder::BufferedEncoder() {}
