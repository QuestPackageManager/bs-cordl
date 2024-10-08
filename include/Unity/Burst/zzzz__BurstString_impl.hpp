#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__BurstString_impl.hpp"
#include "Unity/Burst/zzzz__BurstString_def.hpp"
#include "Unity/Burst/zzzz__BurstString_def.hpp"
//  Writing Method size for method: ::Unity::Burst::__BurstString__PreserveAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::__BurstString__PreserveAttribute::*)()>(
    &::Unity::Burst::__BurstString__PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4494190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__PreserveAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Unity::Burst::__BurstString__PreserveAttribute* Unity::Burst::__BurstString__PreserveAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::__BurstString__PreserveAttribute*>());
}
inline void Unity::Burst::__BurstString__PreserveAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__PreserveAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__PreserveAttribute::__BurstString__PreserveAttribute() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::__BurstString__NumberBufferKind::__BurstString__NumberBufferKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__NumberBufferKind::__BurstString__NumberBufferKind() {}
constexpr ::Unity::Burst::__BurstString__NumberBufferKind Unity::Burst::__BurstString__NumberBufferKind::Integer{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::__BurstString__NumberBufferKind Unity::Burst::__BurstString__NumberBufferKind::Float{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Unity::Burst::__BurstString__NumberBuffer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::__BurstString__NumberBuffer::*)(
    ::Unity::Burst::__BurstString__NumberBufferKind, ::cordl_internals::Ptr<uint8_t>, int32_t, int32_t, bool)>(&::Unity::Burst::__BurstString__NumberBuffer::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4491464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__NumberBuffer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__NumberBufferKind>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__NumberBuffer.GetDigitsPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<uint8_t> (::Unity::Burst::__BurstString__NumberBuffer::*)()>(
    &::Unity::Burst::__BurstString__NumberBuffer::GetDigitsPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4494198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__NumberBuffer>::get(),
                                                                               "GetDigitsPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Burst::__BurstString__NumberBuffer::_ctor(::Unity::Burst::__BurstString__NumberBufferKind kind, ::cordl_internals::Ptr<uint8_t> buffer, int32_t digitsCount, int32_t scale,
                                                             bool isNegative) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__NumberBuffer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__NumberBufferKind>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, kind, buffer, digitsCount, scale, isNegative);
}
inline ::cordl_internals::Ptr<uint8_t> Unity::Burst::__BurstString__NumberBuffer::GetDigitsPointer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__NumberBuffer>::get(),
                                                                             "GetDigitsPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<uint8_t>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Kind", ty:
// "::Unity::Burst::__BurstString__NumberBufferKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "DigitsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Scale", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsNegative", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::__BurstString__NumberBuffer::__BurstString__NumberBuffer(::cordl_internals::Ptr<uint8_t> _buffer, ::Unity::Burst::__BurstString__NumberBufferKind Kind, int32_t DigitsCount,
                                                                                   int32_t Scale, bool IsNegative) noexcept {
  this->_buffer = _buffer;
  this->Kind = Kind;
  this->DigitsCount = DigitsCount;
  this->Scale = Scale;
  this->IsNegative = IsNegative;
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__NumberBuffer::__BurstString__NumberBuffer() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::__BurstString__NumberFormatKind::__BurstString__NumberFormatKind(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__NumberFormatKind::__BurstString__NumberFormatKind() {}
constexpr ::Unity::Burst::__BurstString__NumberFormatKind Unity::Burst::__BurstString__NumberFormatKind::General{ static_cast<uint8_t>(0x0u) };
constexpr ::Unity::Burst::__BurstString__NumberFormatKind Unity::Burst::__BurstString__NumberFormatKind::Decimal{ static_cast<uint8_t>(0x1u) };
constexpr ::Unity::Burst::__BurstString__NumberFormatKind Unity::Burst::__BurstString__NumberFormatKind::DecimalForceSigned{ static_cast<uint8_t>(0x2u) };
constexpr ::Unity::Burst::__BurstString__NumberFormatKind Unity::Burst::__BurstString__NumberFormatKind::Hexadecimal{ static_cast<uint8_t>(0x3u) };
//  Writing Method size for method: ::Unity::Burst::__BurstString__FormatOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Unity::Burst::__BurstString__FormatOptions::*)(::Unity::Burst::__BurstString__NumberFormatKind, int8_t, uint8_t, bool)>(&::Unity::Burst::__BurstString__FormatOptions::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4492158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__NumberFormatKind>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__FormatOptions.get_Uppercase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::__BurstString__FormatOptions::*)()>(
    &::Unity::Burst::__BurstString__FormatOptions::get_Uppercase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4491410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(),
                                                                               "get_Uppercase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__FormatOptions.EncodeToRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Burst::__BurstString__FormatOptions::*)()>(
    &::Unity::Burst::__BurstString__FormatOptions::EncodeToRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44941a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(),
                                                                               "EncodeToRaw", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__FormatOptions.GetBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Burst::__BurstString__FormatOptions::*)()>(
    &::Unity::Burst::__BurstString__FormatOptions::GetBase)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x44913f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(), "GetBase",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__FormatOptions.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Burst::__BurstString__FormatOptions::*)()>(
    &::Unity::Burst::__BurstString__FormatOptions::ToString)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x44941a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(), 3));
    return ___internal_method;
  }
};
inline void Unity::Burst::__BurstString__FormatOptions::_ctor(::Unity::Burst::__BurstString__NumberFormatKind kind, int8_t alignAndSize, uint8_t specifier, bool lowercase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__NumberFormatKind>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, kind, alignAndSize, specifier, lowercase);
}
inline bool Unity::Burst::__BurstString__FormatOptions::get_Uppercase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(),
                                                                             "get_Uppercase", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Unity::Burst::__BurstString__FormatOptions::EncodeToRaw() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(), "EncodeToRaw",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Unity::Burst::__BurstString__FormatOptions::GetBase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(), "GetBase",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Unity::Burst::__BurstString__FormatOptions::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__FormatOptions>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Kind", ty: "::Unity::Burst::__BurstString__NumberFormatKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "AlignAndSize", ty: "int8_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "Specifier", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Lowercase", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::__BurstString__FormatOptions::__BurstString__FormatOptions(::Unity::Burst::__BurstString__NumberFormatKind Kind, int8_t AlignAndSize, uint8_t Specifier,
                                                                                     bool Lowercase) noexcept {
  this->Kind = Kind;
  this->AlignAndSize = AlignAndSize;
  this->Specifier = Specifier;
  this->Lowercase = Lowercase;
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__FormatOptions::__BurstString__FormatOptions() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer::__BurstString__tBigInt___m_blocks_e__FixedBuffer(uint32_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer::__BurstString__tBigInt___m_blocks_e__FixedBuffer() {}
//  Writing Method size for method: ::Unity::Burst::__BurstString__tBigInt.GetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Burst::__BurstString__tBigInt::*)()>(&::Unity::Burst::__BurstString__tBigInt::GetLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4494494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "GetLength",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tBigInt.GetBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Burst::__BurstString__tBigInt::*)(int32_t)>(&::Unity::Burst::__BurstString__tBigInt::GetBlock)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x44937cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "GetBlock", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tBigInt.SetZero
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::__BurstString__tBigInt::*)()>(&::Unity::Burst::__BurstString__tBigInt::SetZero)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x449449c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "SetZero",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tBigInt.IsZero
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::__BurstString__tBigInt::*)()>(&::Unity::Burst::__BurstString__tBigInt::IsZero)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x44937d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "IsZero",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tBigInt.SetU64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::__BurstString__tBigInt::*)(uint64_t)>(&::Unity::Burst::__BurstString__tBigInt::SetU64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x449379c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "SetU64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tBigInt.SetU32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::__BurstString__tBigInt::*)(uint32_t)>(&::Unity::Burst::__BurstString__tBigInt::SetU32)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4492ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "SetU32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tBigInt.GetU32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Burst::__BurstString__tBigInt::*)()>(&::Unity::Burst::__BurstString__tBigInt::GetU32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x44944a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "GetU32",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t Unity::Burst::__BurstString__tBigInt::GetLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "GetLength",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline uint32_t Unity::Burst::__BurstString__tBigInt::GetBlock(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "GetBlock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, idx);
}
inline void Unity::Burst::__BurstString__tBigInt::SetZero() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "SetZero",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Burst::__BurstString__tBigInt::IsZero() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "IsZero",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Burst::__BurstString__tBigInt::SetU64(uint64_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "SetU64", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void Unity::Burst::__BurstString__tBigInt::SetU32(uint32_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "SetU32", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline uint32_t Unity::Burst::__BurstString__tBigInt::GetU32() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tBigInt>::get(), "GetU32",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_blocks", ty:
// "::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::__BurstString__tBigInt::__BurstString__tBigInt(int32_t m_length, ::GlobalNamespace::__BurstString__tBigInt___m_blocks_e__FixedBuffer m_blocks) noexcept {
  this->m_length = m_length;
  this->m_blocks = m_blocks;
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__tBigInt::__BurstString__tBigInt() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::__BurstString__CutoffMode::__BurstString__CutoffMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__CutoffMode::__BurstString__CutoffMode() {}
constexpr ::Unity::Burst::__BurstString__CutoffMode Unity::Burst::__BurstString__CutoffMode::Unique{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::__BurstString__CutoffMode Unity::Burst::__BurstString__CutoffMode::TotalLength{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Burst::__BurstString__CutoffMode Unity::Burst::__BurstString__CutoffMode::FractionLength{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::__BurstString__PrintFloatFormat::__BurstString__PrintFloatFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__PrintFloatFormat::__BurstString__PrintFloatFormat() {}
constexpr ::Unity::Burst::__BurstString__PrintFloatFormat Unity::Burst::__BurstString__PrintFloatFormat::Positional{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Burst::__BurstString__PrintFloatFormat Unity::Burst::__BurstString__PrintFloatFormat::Scientific{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Unity::Burst::__BurstString__tFloatUnion32.IsNegative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::__BurstString__tFloatUnion32::*)()>(
    &::Unity::Burst::__BurstString__tFloatUnion32::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4493fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion32>::get(),
                                                                               "IsNegative", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tFloatUnion32.GetExponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Burst::__BurstString__tFloatUnion32::*)()>(
    &::Unity::Burst::__BurstString__tFloatUnion32::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4493f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion32>::get(),
                                                                               "GetExponent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tFloatUnion32.GetMantissa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Burst::__BurstString__tFloatUnion32::*)()>(
    &::Unity::Burst::__BurstString__tFloatUnion32::GetMantissa)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4493fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion32>::get(),
                                                                               "GetMantissa", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Burst::__BurstString__tFloatUnion32::__cordl_internal_get_m_floatingPoint() {
  return this->___m_floatingPoint;
}
constexpr float_t const& Unity::Burst::__BurstString__tFloatUnion32::__cordl_internal_get_m_floatingPoint() const {
  return this->___m_floatingPoint;
}
constexpr void Unity::Burst::__BurstString__tFloatUnion32::__cordl_internal_set_m_floatingPoint(float_t value) {
  this->___m_floatingPoint = value;
}
constexpr uint32_t& Unity::Burst::__BurstString__tFloatUnion32::__cordl_internal_get_m_integer() {
  return this->___m_integer;
}
constexpr uint32_t const& Unity::Burst::__BurstString__tFloatUnion32::__cordl_internal_get_m_integer() const {
  return this->___m_integer;
}
constexpr void Unity::Burst::__BurstString__tFloatUnion32::__cordl_internal_set_m_integer(uint32_t value) {
  this->___m_integer = value;
}
inline bool Unity::Burst::__BurstString__tFloatUnion32::IsNegative() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion32>::get(), "IsNegative",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint32_t Unity::Burst::__BurstString__tFloatUnion32::GetExponent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion32>::get(), "GetExponent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t Unity::Burst::__BurstString__tFloatUnion32::GetMantissa() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion32>::get(), "GetMantissa",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_integer", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::__BurstString__tFloatUnion32::__BurstString__tFloatUnion32(float_t m_floatingPoint, uint32_t m_integer) noexcept {
  this->m_floatingPoint = m_floatingPoint;
  this->m_integer = m_integer;
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__tFloatUnion32::__BurstString__tFloatUnion32() {}
//  Writing Method size for method: ::Unity::Burst::__BurstString__tFloatUnion64.IsNegative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::__BurstString__tFloatUnion64::*)()>(
    &::Unity::Burst::__BurstString__tFloatUnion64::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4493fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion64>::get(),
                                                                               "IsNegative", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tFloatUnion64.GetExponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Unity::Burst::__BurstString__tFloatUnion64::*)()>(
    &::Unity::Burst::__BurstString__tFloatUnion64::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4493fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion64>::get(),
                                                                               "GetExponent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::__BurstString__tFloatUnion64.GetMantissa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Unity::Burst::__BurstString__tFloatUnion64::*)()>(
    &::Unity::Burst::__BurstString__tFloatUnion64::GetMantissa)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4493fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion64>::get(),
                                                                               "GetMantissa", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr double_t& Unity::Burst::__BurstString__tFloatUnion64::__cordl_internal_get_m_floatingPoint() {
  return this->___m_floatingPoint;
}
constexpr double_t const& Unity::Burst::__BurstString__tFloatUnion64::__cordl_internal_get_m_floatingPoint() const {
  return this->___m_floatingPoint;
}
constexpr void Unity::Burst::__BurstString__tFloatUnion64::__cordl_internal_set_m_floatingPoint(double_t value) {
  this->___m_floatingPoint = value;
}
constexpr uint64_t& Unity::Burst::__BurstString__tFloatUnion64::__cordl_internal_get_m_integer() {
  return this->___m_integer;
}
constexpr uint64_t const& Unity::Burst::__BurstString__tFloatUnion64::__cordl_internal_get_m_integer() const {
  return this->___m_integer;
}
constexpr void Unity::Burst::__BurstString__tFloatUnion64::__cordl_internal_set_m_integer(uint64_t value) {
  this->___m_integer = value;
}
inline bool Unity::Burst::__BurstString__tFloatUnion64::IsNegative() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion64>::get(), "IsNegative",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint32_t Unity::Burst::__BurstString__tFloatUnion64::GetExponent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion64>::get(), "GetExponent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint64_t Unity::Burst::__BurstString__tFloatUnion64::GetMantissa() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::__BurstString__tFloatUnion64>::get(), "GetMantissa",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_floatingPoint", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_integer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Burst::__BurstString__tFloatUnion64::__BurstString__tFloatUnion64(double_t m_floatingPoint, uint64_t m_integer) noexcept {
  this->m_floatingPoint = m_floatingPoint;
  this->m_integer = m_integer;
}
// Ctor Parameters []
constexpr ::Unity::Burst::__BurstString__tFloatUnion64::__BurstString__tFloatUnion64() {}
//  Writing Method size for method: ::Unity::Burst::BurstString.CopyFixedString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::Unity::Burst::BurstString::CopyFixedString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x448ff80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "CopyFixedString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x448ffa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, float_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x44901e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, double_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x44904f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, bool, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x44907fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, char16_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x44909cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, uint8_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4490bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, uint16_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4490ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, uint32_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4490d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, uint64_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4490c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, int8_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4490f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, int16_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x44911e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, int32_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x449129c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, int64_t, int32_t)>(
    &::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4491354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertUnsignedIntegerToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, uint64_t, ::Unity::Burst::__BurstString__FormatOptions)>(&::Unity::Burst::BurstString::ConvertUnsignedIntegerToString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x4490dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ConvertUnsignedIntegerToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.GetLengthIntegerToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int64_t, int32_t, int32_t)>(&::Unity::Burst::BurstString::GetLengthIntegerToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x44916f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "GetLengthIntegerToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertIntegerToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, int64_t, ::Unity::Burst::__BurstString__FormatOptions)>(&::Unity::Burst::BurstString::ConvertIntegerToString)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x4491030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ConvertIntegerToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, ByRef<::Unity::Burst::__BurstString__NumberBuffer>,
                                                                                           int32_t, ::Unity::Burst::__BurstString__FormatOptions)>(&::Unity::Burst::BurstString::FormatNumber)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x449147c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatDecimalOrHexadecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, ByRef<::Unity::Burst::__BurstString__NumberBuffer>,
                                                                                           int32_t, bool)>(&::Unity::Burst::BurstString::FormatDecimalOrHexadecimal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x449171c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatDecimalOrHexadecimal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ValueToIntegerChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int32_t, bool)>(&::Unity::Burst::BurstString::ValueToIntegerChar)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4491420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ValueToIntegerChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.OptsSplit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>)>(&::Unity::Burst::BurstString::OptsSplit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x4491c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "OptsSplit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ParseFormatToFormatOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Burst::__BurstString__FormatOptions (*)(::StringW)>(
    &::Unity::Burst::BurstString::ParseFormatToFormatOptions)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x4491da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ParseFormatToFormatOptions", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.AlignRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, int32_t, int32_t)>(
    &::Unity::Burst::BurstString::AlignRight)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4490120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "AlignRight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.AlignLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, int32_t, int32_t)>(
    &::Unity::Burst::BurstString::AlignLeft)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x44900d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "AlignLeft", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.GetLengthForFormatGeneral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::Unity::Burst::__BurstString__NumberBuffer>, int32_t)>(
    &::Unity::Burst::BurstString::GetLengthForFormatGeneral)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x44918f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "GetLengthForFormatGeneral", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatGeneral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, ByRef<::Unity::Burst::__BurstString__NumberBuffer>,
                                                                                           int32_t, uint8_t)>(&::Unity::Burst::BurstString::FormatGeneral)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x4491a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatGeneral", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.RoundNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__NumberBuffer>, int32_t, bool)>(
    &::Unity::Burst::BurstString::RoundNumber)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x44917bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "RoundNumber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ShouldRoundUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::Ptr<uint8_t>, int32_t, bool)>(&::Unity::Burst::BurstString::ShouldRoundUp)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4492170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ShouldRoundUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.LogBase2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&::Unity::Burst::BurstString::LogBase2)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4492194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "LogBase2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, ByRef<::Unity::Burst::__BurstString__tBigInt>)>(
    &::Unity::Burst::BurstString::BigInt_Compare)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x44922b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Compare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, ByRef<::Unity::Burst::__BurstString__tBigInt>,
                                                                                           ByRef<::Unity::Burst::__BurstString__tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Add)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4492308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Add_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, ByRef<::Unity::Burst::__BurstString__tBigInt>,
                                                                                           ByRef<::Unity::Burst::__BurstString__tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Add_internal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4492390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Add_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, ByRef<::Unity::Burst::__BurstString__tBigInt>,
                                                                                           ByRef<::Unity::Burst::__BurstString__tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4492438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, ByRef<::Unity::Burst::__BurstString__tBigInt>,
                                                                                           ByRef<::Unity::Burst::__BurstString__tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply_internal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x44924c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, ByRef<::Unity::Burst::__BurstString__tBigInt>, uint32_t)>(
    &::Unity::Burst::BurstString::BigInt_Multiply)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x44925b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, ByRef<::Unity::Burst::__BurstString__tBigInt>)>(
    &::Unity::Burst::BurstString::BigInt_Multiply2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4492614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4492670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply10)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x44926cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply10", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.g_PowerOf10_Big
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Burst::__BurstString__tBigInt (*)(int32_t)>(&::Unity::Burst::BurstString::g_PowerOf10_Big)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x4492728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "g_PowerOf10_Big", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Pow10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_Pow10)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x4492970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Pow10", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_MultiplyPow10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, ByRef<::Unity::Burst::__BurstString__tBigInt>, uint32_t)>(
    &::Unity::Burst::BurstString::BigInt_MultiplyPow10)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x4492b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_MultiplyPow10", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Pow2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_Pow2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4492c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Pow2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_DivideWithRemainder_MaxQuotient9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, ByRef<::Unity::Burst::__BurstString__tBigInt>)>(
    &::Unity::Burst::BurstString::BigInt_DivideWithRemainder_MaxQuotient9)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x4492ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_DivideWithRemainder_MaxQuotient9", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_ShiftLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::__BurstString__tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_ShiftLeft)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4492eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_ShiftLeft", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Dragon4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint64_t, int32_t, uint32_t, bool, ::Unity::Burst::__BurstString__CutoffMode, uint32_t,
                                                                                               ::cordl_internals::Ptr<uint8_t>, uint32_t, ByRef<int32_t>)>(&::Unity::Burst::BurstString::Dragon4)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x4492fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Dragon4", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__CutoffMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatPositional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::Ptr<uint8_t>, uint32_t, uint64_t, int32_t, uint32_t, bool, int32_t)>(
    &::Unity::Burst::BurstString::FormatPositional)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x44937e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatPositional", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatScientific
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::Ptr<uint8_t>, uint32_t, uint64_t, int32_t, uint32_t, bool, int32_t)>(
    &::Unity::Burst::BurstString::FormatScientific)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x4493b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatScientific", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatInfinityNaN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, uint64_t, bool, ::Unity::Burst::__BurstString__FormatOptions)>(&::Unity::Burst::BurstString::FormatInfinityNaN)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x4493da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatInfinityNaN", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertFloatToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, float_t, ::Unity::Burst::__BurstString__FormatOptions)>(&::Unity::Burst::BurstString::ConvertFloatToString)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x4490274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ConvertFloatToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertDoubleToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, ByRef<int32_t>, int32_t, double_t, ::Unity::Burst::__BurstString__FormatOptions)>(&::Unity::Burst::BurstString::ConvertDoubleToString)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x4490580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ConvertDoubleToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstString::setStaticF_SplitByColon(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "SplitByColon", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> Unity::Burst::BurstString::getStaticF_SplitByColon() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "SplitByColon", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>();
}
inline void Unity::Burst::BurstString::setStaticF_logTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "logTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unity::Burst::BurstString::getStaticF_logTable() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "logTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>();
}
inline void Unity::Burst::BurstString::setStaticF_g_PowerOf10_U32(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "g_PowerOf10_U32", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>(
      std::forward<::ArrayW<uint32_t, ::Array<uint32_t>*>>(value));
}
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Unity::Burst::BurstString::getStaticF_g_PowerOf10_U32() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t, ::Array<uint32_t>*>, "g_PowerOf10_U32", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>();
}
inline void Unity::Burst::BurstString::setStaticF_InfinityString(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "InfinityString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unity::Burst::BurstString::getStaticF_InfinityString() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "InfinityString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>();
}
inline void Unity::Burst::BurstString::setStaticF_NanString(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "NanString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>(
      std::forward<::ArrayW<uint8_t, ::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unity::Burst::BurstString::getStaticF_NanString() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t, ::Array<uint8_t>*>, "NanString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get>();
}
inline void Unity::Burst::BurstString::CopyFixedString(::cordl_internals::Ptr<uint8_t> dest, int32_t destLength, ::cordl_internals::Ptr<uint8_t> src, int32_t srcLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "CopyFixedString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destLength, src, srcLength);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, ::cordl_internals::Ptr<uint8_t> src, int32_t srcLength,
                                              int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, src, srcLength, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, float_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, double_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, bool value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, char16_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint8_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint16_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint32_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint64_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int8_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int16_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int32_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int64_t value, int32_t formatOptionsRaw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::ConvertUnsignedIntegerToString(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint64_t value,
                                                                      ::Unity::Burst::__BurstString__FormatOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ConvertUnsignedIntegerToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, options);
}
inline int32_t Unity::Burst::BurstString::GetLengthIntegerToString(int64_t value, int32_t basis, int32_t zeroPadding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "GetLengthIntegerToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, basis, zeroPadding);
}
inline void Unity::Burst::BurstString::ConvertIntegerToString(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int64_t value,
                                                              ::Unity::Burst::__BurstString__FormatOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ConvertIntegerToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, options);
}
inline void Unity::Burst::BurstString::FormatNumber(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, ByRef<::Unity::Burst::__BurstString__NumberBuffer> number,
                                                    int32_t nMaxDigits, ::Unity::Burst::__BurstString__FormatOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, number, nMaxDigits, options);
}
inline void Unity::Burst::BurstString::FormatDecimalOrHexadecimal(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength,
                                                                  ByRef<::Unity::Burst::__BurstString__NumberBuffer> number, int32_t zeroPadding, bool outputPositiveSign) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatDecimalOrHexadecimal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, number, zeroPadding, outputPositiveSign);
}
inline uint8_t Unity::Burst::BurstString::ValueToIntegerChar(int32_t value, bool uppercase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ValueToIntegerChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value, uppercase);
}
inline void Unity::Burst::BurstString::OptsSplit(::StringW fullFormat, ByRef<::StringW> padding, ByRef<::StringW> format) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "OptsSplit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fullFormat, padding, format);
}
inline ::Unity::Burst::__BurstString__FormatOptions Unity::Burst::BurstString::ParseFormatToFormatOptions(::StringW fullFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ParseFormatToFormatOptions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::__BurstString__FormatOptions, false>(nullptr, ___internal_method, fullFormat);
}
inline bool Unity::Burst::BurstString::AlignRight(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int32_t align, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "AlignRight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dest, destIndex, destLength, align, length);
}
inline bool Unity::Burst::BurstString::AlignLeft(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, int32_t align, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "AlignLeft", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dest, destIndex, destLength, align, length);
}
inline int32_t Unity::Burst::BurstString::GetLengthForFormatGeneral(ByRef<::Unity::Burst::__BurstString__NumberBuffer> number, int32_t nMaxDigits) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "GetLengthForFormatGeneral", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, number, nMaxDigits);
}
inline void Unity::Burst::BurstString::FormatGeneral(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, ByRef<::Unity::Burst::__BurstString__NumberBuffer> number,
                                                     int32_t nMaxDigits, uint8_t expChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatGeneral", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, number, nMaxDigits, expChar);
}
inline void Unity::Burst::BurstString::RoundNumber(ByRef<::Unity::Burst::__BurstString__NumberBuffer> number, int32_t pos, bool isCorrectlyRounded) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "RoundNumber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__NumberBuffer>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, number, pos, isCorrectlyRounded);
}
inline bool Unity::Burst::BurstString::ShouldRoundUp(::cordl_internals::Ptr<uint8_t> dig, int32_t i, bool isCorrectlyRounded) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ShouldRoundUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dig, i, isCorrectlyRounded);
}
inline uint32_t Unity::Burst::BurstString::LogBase2(uint32_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "LogBase2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, val);
}
inline int32_t Unity::Burst::BurstString::BigInt_Compare(ByRef<::Unity::Burst::__BurstString__tBigInt> lhs, ByRef<::Unity::Burst::__BurstString__tBigInt> rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Compare", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Add(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> lhs,
                                                  ByRef<::Unity::Burst::__BurstString__tBigInt> rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Add_internal(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> pLarge,
                                                           ByRef<::Unity::Burst::__BurstString__tBigInt> pSmall) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Add_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, pLarge, pSmall);
}
inline void Unity::Burst::BurstString::BigInt_Multiply(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> lhs,
                                                       ByRef<::Unity::Burst::__BurstString__tBigInt> rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Multiply_internal(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> pLarge,
                                                                ByRef<::Unity::Burst::__BurstString__tBigInt> pSmall) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, pLarge, pSmall);
}
inline void Unity::Burst::BurstString::BigInt_Multiply(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> lhs, uint32_t rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Multiply2(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, input);
}
inline void Unity::Burst::BurstString::BigInt_Multiply2(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult);
}
inline void Unity::Burst::BurstString::BigInt_Multiply10(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Multiply10", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult);
}
inline ::Unity::Burst::__BurstString__tBigInt Unity::Burst::BurstString::g_PowerOf10_Big(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "g_PowerOf10_Big", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::__BurstString__tBigInt, false>(nullptr, ___internal_method, i);
}
inline void Unity::Burst::BurstString::BigInt_Pow10(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, uint32_t exponent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Pow10", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, exponent);
}
inline void Unity::Burst::BurstString::BigInt_MultiplyPow10(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, ByRef<::Unity::Burst::__BurstString__tBigInt> input, uint32_t exponent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_MultiplyPow10", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, input, exponent);
}
inline void Unity::Burst::BurstString::BigInt_Pow2(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, uint32_t exponent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_Pow2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, exponent);
}
inline uint32_t Unity::Burst::BurstString::BigInt_DivideWithRemainder_MaxQuotient9(ByRef<::Unity::Burst::__BurstString__tBigInt> pDividend, ByRef<::Unity::Burst::__BurstString__tBigInt> divisor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_DivideWithRemainder_MaxQuotient9", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, pDividend, divisor);
}
inline void Unity::Burst::BurstString::BigInt_ShiftLeft(ByRef<::Unity::Burst::__BurstString__tBigInt> pResult, uint32_t shift) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "BigInt_ShiftLeft", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::__BurstString__tBigInt>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pResult, shift);
}
inline uint32_t Unity::Burst::BurstString::Dragon4(uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx, bool hasUnequalMargins, ::Unity::Burst::__BurstString__CutoffMode cutoffMode,
                                                   uint32_t cutoffNumber, ::cordl_internals::Ptr<uint8_t> pOutBuffer, uint32_t bufferSize, ByRef<int32_t> pOutExponent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "Dragon4", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__CutoffMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, mantissa, exponent, mantissaHighBitIdx, hasUnequalMargins, cutoffMode, cutoffNumber, pOutBuffer, bufferSize,
                                                              pOutExponent);
}
inline int32_t Unity::Burst::BurstString::FormatPositional(::cordl_internals::Ptr<uint8_t> pOutBuffer, uint32_t bufferSize, uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx,
                                                           bool hasUnequalMargins, int32_t precision) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatPositional", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pOutBuffer, bufferSize, mantissa, exponent, mantissaHighBitIdx, hasUnequalMargins, precision);
}
inline int32_t Unity::Burst::BurstString::FormatScientific(::cordl_internals::Ptr<uint8_t> pOutBuffer, uint32_t bufferSize, uint64_t mantissa, int32_t exponent, uint32_t mantissaHighBitIdx,
                                                           bool hasUnequalMargins, int32_t precision) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatScientific", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pOutBuffer, bufferSize, mantissa, exponent, mantissaHighBitIdx, hasUnequalMargins, precision);
}
inline void Unity::Burst::BurstString::FormatInfinityNaN(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, uint64_t mantissa, bool isNegative,
                                                         ::Unity::Burst::__BurstString__FormatOptions formatOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "FormatInfinityNaN", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, mantissa, isNegative, formatOptions);
}
inline void Unity::Burst::BurstString::ConvertFloatToString(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, float_t value,
                                                            ::Unity::Burst::__BurstString__FormatOptions formatOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ConvertFloatToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptions);
}
inline void Unity::Burst::BurstString::ConvertDoubleToString(::cordl_internals::Ptr<uint8_t> dest, ByRef<int32_t> destIndex, int32_t destLength, double_t value,
                                                             ::Unity::Burst::__BurstString__FormatOptions formatOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstString*>::get(), "ConvertDoubleToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::__BurstString__FormatOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptions);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString::BurstString() {}
