#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DerSequenceReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__DerSequenceReader_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Security/Cryptography/zzzz__DerSequenceReader_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag::DerSequenceReader_DerTag(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag::DerSequenceReader_DerTag() {}
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::Boolean{ static_cast<uint8_t>(0x1u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::Integer{ static_cast<uint8_t>(0x2u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::BitString{ static_cast<uint8_t>(0x3u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::OctetString{ static_cast<uint8_t>(0x4u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::Null{ static_cast<uint8_t>(0x5u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::ObjectIdentifier{ static_cast<uint8_t>(0x6u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::UTF8String{ static_cast<uint8_t>(0xcu) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::Sequence{ static_cast<uint8_t>(0x10u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::Set{ static_cast<uint8_t>(0x11u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::PrintableString{ static_cast<uint8_t>(0x13u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::T61String{ static_cast<uint8_t>(0x14u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::IA5String{ static_cast<uint8_t>(0x16u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::UTCTime{ static_cast<uint8_t>(0x17u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::GeneralizedTime{ static_cast<uint8_t>(0x18u) };
constexpr ::System::Security::Cryptography::DerSequenceReader_DerTag System::Security::Cryptography::DerSequenceReader_DerTag::BMPString{ static_cast<uint8_t>(0x1eu) };
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DerSequenceReader___c::*)()>(
    &::System::Security::Cryptography::DerSequenceReader___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x443460c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader___c._ReadT61String_b__45_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Security::Cryptography::DerSequenceReader___c::*)()>(
    &::System::Security::Cryptography::DerSequenceReader___c::_ReadT61String_b__45_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4434614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get(),
                                                                               "<ReadT61String>b__45_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader___c._ReadT61String_b__45_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (::System::Security::Cryptography::DerSequenceReader___c::*)()>(
    &::System::Security::Cryptography::DerSequenceReader___c::_ReadT61String_b__45_1)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4434670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get(),
                                                                               "<ReadT61String>b__45_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader___c._ReadTime_b__51_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatInfo* (::System::Security::Cryptography::DerSequenceReader___c::*)()>(
    &::System::Security::Cryptography::DerSequenceReader___c::_ReadTime_b__51_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x44346b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get(),
                                                                               "<ReadTime>b__51_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::DerSequenceReader___c::setStaticF___9(::System::Security::Cryptography::DerSequenceReader___c* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::DerSequenceReader___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get>(
      std::forward<::System::Security::Cryptography::DerSequenceReader___c*>(value));
}
inline ::System::Security::Cryptography::DerSequenceReader___c* System::Security::Cryptography::DerSequenceReader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::DerSequenceReader___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get>();
}
inline void System::Security::Cryptography::DerSequenceReader___c::setStaticF___9__45_0(::System::Func_1<::System::Text::Encoding*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Text::Encoding*>*, "<>9__45_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get>(
      std::forward<::System::Func_1<::System::Text::Encoding*>*>(value));
}
inline ::System::Func_1<::System::Text::Encoding*>* System::Security::Cryptography::DerSequenceReader___c::getStaticF___9__45_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Text::Encoding*>*, "<>9__45_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get>();
}
inline void System::Security::Cryptography::DerSequenceReader___c::setStaticF___9__45_1(::System::Func_1<::System::Text::Encoding*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Text::Encoding*>*, "<>9__45_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get>(
      std::forward<::System::Func_1<::System::Text::Encoding*>*>(value));
}
inline ::System::Func_1<::System::Text::Encoding*>* System::Security::Cryptography::DerSequenceReader___c::getStaticF___9__45_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Text::Encoding*>*, "<>9__45_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get>();
}
inline void System::Security::Cryptography::DerSequenceReader___c::setStaticF___9__51_0(::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Globalization::DateTimeFormatInfo*>*, "<>9__51_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get>(
      std::forward<::System::Func_1<::System::Globalization::DateTimeFormatInfo*>*>(value));
}
inline ::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* System::Security::Cryptography::DerSequenceReader___c::getStaticF___9__51_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Globalization::DateTimeFormatInfo*>*, "<>9__51_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get>();
}
inline void System::Security::Cryptography::DerSequenceReader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Security::Cryptography::DerSequenceReader___c::_ReadT61String_b__45_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get(),
                                                                             "<ReadT61String>b__45_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Security::Cryptography::DerSequenceReader___c::_ReadT61String_b__45_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get(),
                                                                             "<ReadT61String>b__45_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(this, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Security::Cryptography::DerSequenceReader___c::_ReadTime_b__51_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader___c*>::get(),
                                                                             "<ReadTime>b__51_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DerSequenceReader___c* System::Security::Cryptography::DerSequenceReader___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::DerSequenceReader___c*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DerSequenceReader___c::DerSequenceReader___c() {}
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.set_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(int32_t)>(
    &::System::Security::Cryptography::DerSequenceReader::set_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x443306c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "set_ContentLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::DerSequenceReader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4433074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Security::Cryptography::DerSequenceReader::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4433098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(
    ::System::Security::Cryptography::DerSequenceReader_DerTag, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Security::Cryptography::DerSequenceReader::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x44330ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.get_HasData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::get_HasData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4433258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "get_HasData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.PeekTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::PeekTag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4433268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "PeekTag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.SkipValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::SkipValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x44332fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "SkipValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadNextEncodedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadNextEncodedValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x443334c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadNextEncodedValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadBoolean)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4433528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadBoolean", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadInteger)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x44335f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadInteger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadIntegerBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadIntegerBytes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x44336a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadIntegerBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadBitString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadBitString)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4433774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadBitString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadOctetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadOctetString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x44338b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadOctetString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadOidAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadOidAsString)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x44338d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadOidAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadUtf8String
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadUtf8String)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4433b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadUtf8String", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadCollectionWithTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DerSequenceReader* (
    ::System::Security::Cryptography::DerSequenceReader::*)(::System::Security::Cryptography::DerSequenceReader_DerTag)>(&::System::Security::Cryptography::DerSequenceReader::ReadCollectionWithTag)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4433c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "ReadCollectionWithTag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DerSequenceReader* (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadSequence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4433df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadSequence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DerSequenceReader* (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4433df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadPrintableString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadPrintableString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4433e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadPrintableString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadIA5String
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadIA5String)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4433e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadIA5String", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadT61String
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadT61String)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x4433f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadT61String", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadX509Date
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadX509Date)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x44341d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadX509Date", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadUtcTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadUtcTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x4434258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadUtcTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadGeneralizedTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadGeneralizedTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x44342a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadGeneralizedTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadBMPString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadBMPString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4434530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadBMPString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.TrimTrailingNulls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Security::Cryptography::DerSequenceReader::TrimTrailingNulls)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4433c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "TrimTrailingNulls",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Security::Cryptography::DerSequenceReader::*)(
    ::System::Security::Cryptography::DerSequenceReader_DerTag, ::StringW)>(&::System::Security::Cryptography::DerSequenceReader::ReadTime)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x44342f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "ReadTime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ReadContentAsBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::ReadContentAsBytes)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x44336c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "ReadContentAsBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.EatTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::DerSequenceReader::*)(
    ::System::Security::Cryptography::DerSequenceReader_DerTag)>(&::System::Security::Cryptography::DerSequenceReader::EatTag)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x443319c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "EatTag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.CheckTag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::DerSequenceReader_DerTag, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Security::Cryptography::DerSequenceReader::CheckTag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4433d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "CheckTag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.EatLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::DerSequenceReader::*)()>(
    &::System::Security::Cryptography::DerSequenceReader::EatLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x443321c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                               "EatLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DerSequenceReader.ScanContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ByRef<int32_t>)>(
    &::System::Security::Cryptography::DerSequenceReader::ScanContentLength)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4433404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "ScanContentLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void System::Security::Cryptography::DerSequenceReader::__cordl_internal_set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__end() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____end;
}
constexpr int32_t const& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__end() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____end;
}
constexpr void System::Security::Cryptography::DerSequenceReader::__cordl_internal_set__end(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____end = value;
}
constexpr int32_t& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr int32_t const& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void System::Security::Cryptography::DerSequenceReader::__cordl_internal_set__position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr int32_t& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__ContentLength_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentLength_k__BackingField;
}
constexpr int32_t const& System::Security::Cryptography::DerSequenceReader::__cordl_internal_get__ContentLength_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentLength_k__BackingField;
}
constexpr void System::Security::Cryptography::DerSequenceReader::__cordl_internal_set__ContentLength_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ContentLength_k__BackingField = value;
}
inline void System::Security::Cryptography::DerSequenceReader::setStaticF_s_validityDateTimeFormatInfo(::System::Globalization::DateTimeFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::DateTimeFormatInfo*, "s_validityDateTimeFormatInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get>(
      std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
inline ::System::Globalization::DateTimeFormatInfo* System::Security::Cryptography::DerSequenceReader::getStaticF_s_validityDateTimeFormatInfo() {
  return ::cordl_internals::getStaticField<::System::Globalization::DateTimeFormatInfo*, "s_validityDateTimeFormatInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get>();
}
inline void System::Security::Cryptography::DerSequenceReader::setStaticF_s_utf8EncodingWithExceptionFallback(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "s_utf8EncodingWithExceptionFallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Security::Cryptography::DerSequenceReader::getStaticF_s_utf8EncodingWithExceptionFallback() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "s_utf8EncodingWithExceptionFallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get>();
}
inline void System::Security::Cryptography::DerSequenceReader::setStaticF_s_latin1Encoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "s_latin1Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get>(
      std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Security::Cryptography::DerSequenceReader::getStaticF_s_latin1Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "s_latin1Encoding",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get>();
}
inline void System::Security::Cryptography::DerSequenceReader::set_ContentLength(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "set_ContentLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::DerSequenceReader::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void System::Security::Cryptography::DerSequenceReader::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, offset, length);
}
inline void System::Security::Cryptography::DerSequenceReader::_ctor(::System::Security::Cryptography::DerSequenceReader_DerTag tagToEat, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset,
                                                                     int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tagToEat, data, offset, length);
}
inline bool System::Security::Cryptography::DerSequenceReader::get_HasData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "get_HasData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint8_t System::Security::Cryptography::DerSequenceReader::PeekTag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "PeekTag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::DerSequenceReader::SkipValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "SkipValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::DerSequenceReader::ReadNextEncodedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadNextEncodedValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool System::Security::Cryptography::DerSequenceReader::ReadBoolean() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadBoolean", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::DerSequenceReader::ReadInteger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadInteger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::DerSequenceReader::ReadIntegerBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadIntegerBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::DerSequenceReader::ReadBitString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadBitString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::DerSequenceReader::ReadOctetString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadOctetString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadOidAsString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadOidAsString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadUtf8String() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadUtf8String", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DerSequenceReader*
System::Security::Cryptography::DerSequenceReader::ReadCollectionWithTag(::System::Security::Cryptography::DerSequenceReader_DerTag expected) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "ReadCollectionWithTag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DerSequenceReader*, false>(this, ___internal_method, expected);
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::ReadSequence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadSequence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DerSequenceReader*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::ReadSet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DerSequenceReader*, false>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadPrintableString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadPrintableString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadIA5String() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadIA5String", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadT61String() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadT61String", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::DerSequenceReader::ReadX509Date() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadX509Date", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::DerSequenceReader::ReadUtcTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadUtcTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::DateTime System::Security::Cryptography::DerSequenceReader::ReadGeneralizedTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadGeneralizedTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::ReadBMPString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadBMPString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DerSequenceReader::TrimTrailingNulls(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "TrimTrailingNulls",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Security::Cryptography::DerSequenceReader::ReadTime(::System::Security::Cryptography::DerSequenceReader_DerTag timeTag, ::StringW formatString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "ReadTime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, timeTag, formatString);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::DerSequenceReader::ReadContentAsBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "ReadContentAsBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::DerSequenceReader::EatTag(::System::Security::Cryptography::DerSequenceReader_DerTag expected) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "EatTag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expected);
}
inline void System::Security::Cryptography::DerSequenceReader::CheckTag(::System::Security::Cryptography::DerSequenceReader_DerTag expected, ::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                        int32_t position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "CheckTag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DerSequenceReader_DerTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, expected, data, position);
}
inline int32_t System::Security::Cryptography::DerSequenceReader::EatLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(),
                                                                             "EatLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::DerSequenceReader::ScanContentLength(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t end, ::ByRef<int32_t> bytesConsumed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::DerSequenceReader*>::get(), "ScanContentLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, data, offset, end, bytesConsumed);
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::DerSequenceReader*>(data));
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::DerSequenceReader*>(data, offset, length));
}
inline ::System::Security::Cryptography::DerSequenceReader* System::Security::Cryptography::DerSequenceReader::New_ctor(::System::Security::Cryptography::DerSequenceReader_DerTag tagToEat,
                                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::DerSequenceReader*>(tagToEat, data, offset, length));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DerSequenceReader::DerSequenceReader() {}
