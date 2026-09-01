#pragma once
// IWYU pragma private; include "System\Net\FtpMethodInfo.hpp"
#include "System/Net/zzzz__FtpMethodFlags_impl.hpp"
#include "System/Net/zzzz__FtpOperation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__FtpMethodInfo_def.hpp"
#include "System/Net/zzzz__FtpMethodFlags_def.hpp"
#include "System/Net/zzzz__FtpOperation_def.hpp"
//  Writing Method size for method: ::System::Net::FtpMethodInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpMethodInfo::*)(::StringW, ::System::Net::FtpOperation, ::System::Net::FtpMethodFlags, ::StringW)>(
    &::System::Net::FtpMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6403ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::FtpMethodInfo*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::FtpOperation>(), ::i2c::type_of<::System::Net::FtpMethodFlags>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpMethodInfo.HasFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpMethodInfo::*)(::System::Net::FtpMethodFlags)>(&::System::Net::FtpMethodInfo::HasFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6403ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "HasFlag", {}, { ::i2c::type_of<::System::Net::FtpMethodFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpMethodInfo.get_IsCommandOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpMethodInfo::*)()>(&::System::Net::FtpMethodInfo::get_IsCommandOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6403ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "get_IsCommandOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpMethodInfo.get_IsUpload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpMethodInfo::*)()>(&::System::Net::FtpMethodInfo::get_IsUpload)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6403af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "get_IsUpload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpMethodInfo.get_IsDownload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpMethodInfo::*)()>(&::System::Net::FtpMethodInfo::get_IsDownload)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6403afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "get_IsDownload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpMethodInfo.get_ShouldParseForResponseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpMethodInfo::*)()>(&::System::Net::FtpMethodInfo::get_ShouldParseForResponseUri)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6403b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "get_ShouldParseForResponseUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpMethodInfo.GetMethodInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::FtpMethodInfo* (*)(::StringW)>(&::System::Net::FtpMethodInfo::GetMethodInfo)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6403b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "GetMethodInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::FtpMethodInfo::__cordl_internal_get_Method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Method;
}
constexpr ::StringW const& System::Net::FtpMethodInfo::__cordl_internal_get_Method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Method;
}
constexpr void System::Net::FtpMethodInfo::__cordl_internal_set_Method(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Method = value;
}
constexpr ::System::Net::FtpOperation& System::Net::FtpMethodInfo::__cordl_internal_get_Operation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Operation;
}
constexpr ::System::Net::FtpOperation const& System::Net::FtpMethodInfo::__cordl_internal_get_Operation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Operation;
}
constexpr void System::Net::FtpMethodInfo::__cordl_internal_set_Operation(::System::Net::FtpOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Operation = value;
}
constexpr ::System::Net::FtpMethodFlags& System::Net::FtpMethodInfo::__cordl_internal_get_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr ::System::Net::FtpMethodFlags const& System::Net::FtpMethodInfo::__cordl_internal_get_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr void System::Net::FtpMethodInfo::__cordl_internal_set_Flags(::System::Net::FtpMethodFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Flags = value;
}
constexpr ::StringW& System::Net::FtpMethodInfo::__cordl_internal_get_HttpCommand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpCommand;
}
constexpr ::StringW const& System::Net::FtpMethodInfo::__cordl_internal_get_HttpCommand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpCommand;
}
constexpr void System::Net::FtpMethodInfo::__cordl_internal_set_HttpCommand(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HttpCommand = value;
}
inline void System::Net::FtpMethodInfo::setStaticF_s_knownMethodInfo(::ArrayW<::System::Net::FtpMethodInfo*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::FtpMethodInfo*>, "s_knownMethodInfo", ::System::Net::FtpMethodInfo*>(std::forward<::ArrayW<::System::Net::FtpMethodInfo*>>(value));
}
inline ::ArrayW<::System::Net::FtpMethodInfo*> System::Net::FtpMethodInfo::getStaticF_s_knownMethodInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::FtpMethodInfo*>, "s_knownMethodInfo", ::System::Net::FtpMethodInfo*>();
}
inline void System::Net::FtpMethodInfo::_ctor(::StringW method, ::System::Net::FtpOperation operation, ::System::Net::FtpMethodFlags flags, ::StringW httpCommand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Net::FtpMethodInfo*>(),
                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::FtpOperation>(), ::i2c::type_of<::System::Net::FtpMethodFlags>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, operation, flags, httpCommand);
}
inline bool System::Net::FtpMethodInfo::HasFlag(::System::Net::FtpMethodFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "HasFlag", {}, { ::i2c::type_of<::System::Net::FtpMethodFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline bool System::Net::FtpMethodInfo::get_IsCommandOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "get_IsCommandOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::FtpMethodInfo::get_IsUpload() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "get_IsUpload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::FtpMethodInfo::get_IsDownload() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "get_IsDownload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::FtpMethodInfo::get_ShouldParseForResponseUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "get_ShouldParseForResponseUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::FtpMethodInfo* System::Net::FtpMethodInfo::GetMethodInfo(::StringW method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpMethodInfo*>(), { "GetMethodInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::FtpMethodInfo*>(nullptr, ___internal_method, method);
}
inline ::System::Net::FtpMethodInfo* System::Net::FtpMethodInfo::New_ctor(::StringW method, ::System::Net::FtpOperation operation, ::System::Net::FtpMethodFlags flags, ::StringW httpCommand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FtpMethodInfo*>(method, operation, flags, httpCommand));
}
// Ctor Parameters []
constexpr ::System::Net::FtpMethodInfo::FtpMethodInfo() {}
