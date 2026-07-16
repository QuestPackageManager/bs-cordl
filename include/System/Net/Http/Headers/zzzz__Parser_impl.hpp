#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/Parser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__Parser_def.hpp"
#include "System/Net/Http/Headers/zzzz__Parser_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_Token.Check
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::Http::Headers::Parser_Token::Check)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x60d9570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Token*>(), { "Check", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_Token.TryCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Net::Http::Headers::Parser_Token::TryCheck)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60e462c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Token*>(), { "TryCheck", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::Parser_Token::Check(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Token*>(), { "Check", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s);
}
inline bool System::Net::Http::Headers::Parser_Token::TryCheck(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Token*>(), { "TryCheck", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser_Token::Parser_Token() {}
//  Writing Method size for method: ::System::Net::Http::Headers::DateTime_Parser___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::DateTime_Parser___c::*)()>(&::System::Net::Http::Headers::DateTime_Parser___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e7554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::DateTime_Parser___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::DateTime_Parser___c.__cctor_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::DateTime_Parser___c::*)(::System::Object*)>(
    &::System::Net::Http::Headers::DateTime_Parser___c::__cctor_b__2_0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x60e7558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::DateTime_Parser___c*>(), { "<.cctor>b__2_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::DateTime_Parser___c::setStaticF___9(::System::Net::Http::Headers::DateTime_Parser___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::Headers::DateTime_Parser___c*, "<>9", ::System::Net::Http::Headers::DateTime_Parser___c*>(
      std::forward<::System::Net::Http::Headers::DateTime_Parser___c*>(value));
}
inline ::System::Net::Http::Headers::DateTime_Parser___c* System::Net::Http::Headers::DateTime_Parser___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Http::Headers::DateTime_Parser___c*, "<>9", ::System::Net::Http::Headers::DateTime_Parser___c*>();
}
inline void System::Net::Http::Headers::DateTime_Parser___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::DateTime_Parser___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::DateTime_Parser___c::__cctor_b__2_0(::System::Object* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::DateTime_Parser___c*>(), { "<.cctor>b__2_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, l);
}
inline ::System::Net::Http::Headers::DateTime_Parser___c* System::Net::Http::Headers::DateTime_Parser___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::DateTime_Parser___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::DateTime_Parser___c::DateTime_Parser___c() {}
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_DateTime.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::DateTimeOffset>)>(&::System::Net::Http::Headers::Parser_DateTime::TryParse)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60e73cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_DateTime*>(),
                                                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::Parser_DateTime::setStaticF_ToString(::System::Func_2<::System::Object*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, ::StringW>*, "ToString", ::System::Net::Http::Headers::Parser_DateTime*>(
      std::forward<::System::Func_2<::System::Object*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Object*, ::StringW>* System::Net::Http::Headers::Parser_DateTime::getStaticF_ToString() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, ::StringW>*, "ToString", ::System::Net::Http::Headers::Parser_DateTime*>();
}
inline bool System::Net::Http::Headers::Parser_DateTime::TryParse(::StringW input, ::by_ref<::System::DateTimeOffset> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_DateTime*>(),
                                                                                         { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser_DateTime::Parser_DateTime() {}
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_EmailAddress.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::System::Net::Http::Headers::Parser_EmailAddress::TryParse)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60e7648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_EmailAddress*>(),
                                                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::Parser_EmailAddress::TryParse(::StringW input, ::by_ref<::StringW> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_EmailAddress*>(),
                                                                                         { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser_EmailAddress::Parser_EmailAddress() {}
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_Host.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::System::Net::Http::Headers::Parser_Host::TryParse)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60e772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Host*>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::Parser_Host::TryParse(::StringW input, ::by_ref<::StringW> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Host*>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser_Host::Parser_Host() {}
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_Int.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int32_t>)>(&::System::Net::Http::Headers::Parser_Int::TryParse)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60e77f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Int*>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::Parser_Int::TryParse(::StringW input, ::by_ref<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Int*>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser_Int::Parser_Int() {}
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_Long.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int64_t>)>(&::System::Net::Http::Headers::Parser_Long::TryParse)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60e7870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Long*>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::Parser_Long::TryParse(::StringW input, ::by_ref<int64_t> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Long*>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser_Long::Parser_Long() {}
//  Writing Method size for method: ::System::Net::Http::Headers::MD5_Parser___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::MD5_Parser___c::*)()>(&::System::Net::Http::Headers::MD5_Parser___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e7afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MD5_Parser___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MD5_Parser___c.__cctor_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::MD5_Parser___c::*)(::System::Object*)>(&::System::Net::Http::Headers::MD5_Parser___c::__cctor_b__2_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60e7b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MD5_Parser___c*>(), { "<.cctor>b__2_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::MD5_Parser___c::setStaticF___9(::System::Net::Http::Headers::MD5_Parser___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::Headers::MD5_Parser___c*, "<>9", ::System::Net::Http::Headers::MD5_Parser___c*>(
      std::forward<::System::Net::Http::Headers::MD5_Parser___c*>(value));
}
inline ::System::Net::Http::Headers::MD5_Parser___c* System::Net::Http::Headers::MD5_Parser___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Http::Headers::MD5_Parser___c*, "<>9", ::System::Net::Http::Headers::MD5_Parser___c*>();
}
inline void System::Net::Http::Headers::MD5_Parser___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MD5_Parser___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::MD5_Parser___c::__cctor_b__2_0(::System::Object* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MD5_Parser___c*>(), { "<.cctor>b__2_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, l);
}
inline ::System::Net::Http::Headers::MD5_Parser___c* System::Net::Http::Headers::MD5_Parser___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::MD5_Parser___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::MD5_Parser___c::MD5_Parser___c() {}
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_MD5.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<uint8_t>>)>(&::System::Net::Http::Headers::Parser_MD5::TryParse)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x60e78ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_MD5*>(),
                                                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::Parser_MD5::setStaticF_ToString(::System::Func_2<::System::Object*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, ::StringW>*, "ToString", ::System::Net::Http::Headers::Parser_MD5*>(
      std::forward<::System::Func_2<::System::Object*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Object*, ::StringW>* System::Net::Http::Headers::Parser_MD5::getStaticF_ToString() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, ::StringW>*, "ToString", ::System::Net::Http::Headers::Parser_MD5*>();
}
inline bool System::Net::Http::Headers::Parser_MD5::TryParse(::StringW input, ::by_ref<::ArrayW<uint8_t>> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_MD5*>(),
                                                                                         { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser_MD5::Parser_MD5() {}
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_TimeSpanSeconds.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::TimeSpan>)>(&::System::Net::Http::Headers::Parser_TimeSpanSeconds::TryParse)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60e7b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_TimeSpanSeconds*>(),
                                                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::Parser_TimeSpanSeconds::TryParse(::StringW input, ::by_ref<::System::TimeSpan> result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_TimeSpanSeconds*>(),
                                                                                         { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser_TimeSpanSeconds::Parser_TimeSpanSeconds() {}
//  Writing Method size for method: ::System::Net::Http::Headers::Parser_Uri.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Uri*>)>(&::System::Net::Http::Headers::Parser_Uri::TryParse)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60e7c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Uri*>(),
                                                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
    return ___internal_method;
  }
};
inline bool System::Net::Http::Headers::Parser_Uri::TryParse(::StringW input, ::by_ref<::System::Uri*> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::Parser_Uri*>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Uri*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser_Uri::Parser_Uri() {}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::Parser::Parser() {}
