#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__FastBitConverter_def.hpp"
#include "LiteNetLib/Utils/zzzz__FastBitConverter_def.hpp"
constexpr uint64_t& LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble::__cordl_internal_get_Along() {
  return this->___Along;
}
constexpr uint64_t const& LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble::__cordl_internal_get_Along() const {
  return this->___Along;
}
constexpr void LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble::__cordl_internal_set_Along(uint64_t value) {
  this->___Along = value;
}
constexpr double_t& LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble::__cordl_internal_get_Adouble() {
  return this->___Adouble;
}
constexpr double_t const& LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble::__cordl_internal_get_Adouble() const {
  return this->___Adouble;
}
constexpr void LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble::__cordl_internal_set_Adouble(double_t value) {
  this->___Adouble = value;
}
// Ctor Parameters [CppParam { name: "Along", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Adouble", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble::__FastBitConverter__ConverterHelperDouble(uint64_t Along, double_t Adouble) noexcept {
  this->Along = Along;
  this->Adouble = Adouble;
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::__FastBitConverter__ConverterHelperDouble::__FastBitConverter__ConverterHelperDouble() {}
constexpr int32_t& LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat::__cordl_internal_get_Aint() {
  return this->___Aint;
}
constexpr int32_t const& LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat::__cordl_internal_get_Aint() const {
  return this->___Aint;
}
constexpr void LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat::__cordl_internal_set_Aint(int32_t value) {
  this->___Aint = value;
}
constexpr float_t& LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat::__cordl_internal_get_Afloat() {
  return this->___Afloat;
}
constexpr float_t const& LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat::__cordl_internal_get_Afloat() const {
  return this->___Afloat;
}
constexpr void LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat::__cordl_internal_set_Afloat(float_t value) {
  this->___Afloat = value;
}
// Ctor Parameters [CppParam { name: "Aint", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Afloat", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat::__FastBitConverter__ConverterHelperFloat(int32_t Aint, float_t Afloat) noexcept {
  this->Aint = Aint;
  this->Afloat = Afloat;
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::__FastBitConverter__ConverterHelperFloat::__FastBitConverter__ConverterHelperFloat() {}
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.WriteLittleEndian
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, uint64_t)>(
    &::LiteNetLib::Utils::FastBitConverter::WriteLittleEndian)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23cc464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "WriteLittleEndian", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.WriteLittleEndian
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::LiteNetLib::Utils::FastBitConverter::WriteLittleEndian)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23cc554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "WriteLittleEndian", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.WriteLittleEndian
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int16_t)>(
    &::LiteNetLib::Utils::FastBitConverter::WriteLittleEndian)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23cc5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "WriteLittleEndian", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, double_t)>(
    &::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc61c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, float_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cc624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int16_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23cc62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, uint16_t)>(
    &::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c6928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c6f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, uint32_t)>(
    &::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23cc630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int64_t)>(&::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c2ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::FastBitConverter.GetBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, uint64_t)>(
    &::LiteNetLib::Utils::FastBitConverter::GetBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23cc634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::FastBitConverter::WriteLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, uint64_t data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "WriteLittleEndian", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, offset, data);
}
inline void LiteNetLib::Utils::FastBitConverter::WriteLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "WriteLittleEndian", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, offset, data);
}
inline void LiteNetLib::Utils::FastBitConverter::WriteLittleEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int16_t data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "WriteLittleEndian", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, offset, data);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, double_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, int16_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, int64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bytes, startIndex, value);
}
inline void LiteNetLib::Utils::FastBitConverter::GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t startIndex, uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::FastBitConverter*>::get(), "GetBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bytes, startIndex, value);
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::FastBitConverter::FastBitConverter() {}
