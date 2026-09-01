#pragma once
// IWYU pragma private; include "System\Net\Mail\MailAddressParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Mail/zzzz__MailAddressParser_def.hpp"
#include "System/Net/Mail/zzzz__MailAddress_def.hpp"
//  Writing Method size for method: ::System::Net::Mail::MailAddressParser.ParseAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Mail::MailAddress* (*)(::StringW)>(&::System::Net::Mail::MailAddressParser::ParseAddress)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x636e980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(), { "ParseAddress", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddressParser.ParseAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Mail::MailAddress* (*)(::StringW, bool, ::by_ref<int32_t>)>(&::System::Net::Mail::MailAddressParser::ParseAddress)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x636e9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(),
                                                             { "ParseAddress", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddressParser.ReadCfwsAndThrowIfIncomplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Net::Mail::MailAddressParser::ReadCfwsAndThrowIfIncomplete)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x636ed14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(),
                                                                                           { "ReadCfwsAndThrowIfIncomplete", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddressParser.ParseDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>)>(&::System::Net::Mail::MailAddressParser::ParseDomain)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x636ed70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(), { "ParseDomain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddressParser.ParseLocalPart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>, bool, bool)>(&::System::Net::Mail::MailAddressParser::ParseLocalPart)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x636ee6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(),
                                                { "ParseLocalPart", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddressParser.ParseDisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>, bool)>(&::System::Net::Mail::MailAddressParser::ParseDisplayName)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x636f12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(),
                                                             { "ParseDisplayName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Mail::MailAddressParser.NormalizeOrThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::Mail::MailAddressParser::NormalizeOrThrow)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x636f654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(), { "NormalizeOrThrow", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::System::Net::Mail::MailAddress* System::Net::Mail::MailAddressParser::ParseAddress(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(), { "ParseAddress", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Mail::MailAddress*>(nullptr, ___internal_method, data);
}
inline ::System::Net::Mail::MailAddress* System::Net::Mail::MailAddressParser::ParseAddress(::StringW data, bool expectMultipleAddresses, ::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(),
                                                           { "ParseAddress", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Mail::MailAddress*>(nullptr, ___internal_method, data, expectMultipleAddresses, index);
}
inline int32_t System::Net::Mail::MailAddressParser::ReadCfwsAndThrowIfIncomplete(::StringW data, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(),
                                                                                         { "ReadCfwsAndThrowIfIncomplete", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, index);
}
inline ::StringW System::Net::Mail::MailAddressParser::ParseDomain(::StringW data, ::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(), { "ParseDomain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, index);
}
inline ::StringW System::Net::Mail::MailAddressParser::ParseLocalPart(::StringW data, ::by_ref<int32_t> index, bool expectAngleBracket, bool expectMultipleAddresses) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(),
                                              { "ParseLocalPart", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, index, expectAngleBracket, expectMultipleAddresses);
}
inline ::StringW System::Net::Mail::MailAddressParser::ParseDisplayName(::StringW data, ::by_ref<int32_t> index, bool expectMultipleAddresses) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(),
                                                           { "ParseDisplayName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, index, expectMultipleAddresses);
}
inline ::StringW System::Net::Mail::MailAddressParser::NormalizeOrThrow(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Mail::MailAddressParser*>(), { "NormalizeOrThrow", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
// Ctor Parameters []
constexpr ::System::Net::Mail::MailAddressParser::MailAddressParser() {}
