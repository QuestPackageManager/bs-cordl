#pragma once
// IWYU pragma private; include "System\SharedStatics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__SharedStatics_def.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
//  Writing Method size for method: ::System::SharedStatics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::SharedStatics::*)()>(&::System::SharedStatics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c89f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SharedStatics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SharedStatics.GetSharedStringMaker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Util::Tokenizer_StringMaker* (*)()>(&::System::SharedStatics::GetSharedStringMaker)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c89f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SharedStatics*>(), { "GetSharedStringMaker", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::SharedStatics.ReleaseSharedStringMaker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Security::Util::Tokenizer_StringMaker*>)>(&::System::SharedStatics::ReleaseSharedStringMaker)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c8a0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::SharedStatics*>(), { "ReleaseSharedStringMaker", {}, { ::i2c::type_of<::by_ref<::System::Security::Util::Tokenizer_StringMaker*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Util::Tokenizer_StringMaker*& System::SharedStatics::__cordl_internal_get__maker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maker;
}
constexpr ::System::Security::Util::Tokenizer_StringMaker* const& System::SharedStatics::__cordl_internal_get__maker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maker;
}
constexpr void System::SharedStatics::__cordl_internal_set__maker(::System::Security::Util::Tokenizer_StringMaker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maker = value;
}
inline void System::SharedStatics::setStaticF__sharedStatics(::System::SharedStatics* value) {
  ::cordl_internals::setStaticField<::System::SharedStatics*, "_sharedStatics", ::System::SharedStatics*>(std::forward<::System::SharedStatics*>(value));
}
inline ::System::SharedStatics* System::SharedStatics::getStaticF__sharedStatics() {
  return ::cordl_internals::getStaticField<::System::SharedStatics*, "_sharedStatics", ::System::SharedStatics*>();
}
inline void System::SharedStatics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SharedStatics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Util::Tokenizer_StringMaker* System::SharedStatics::GetSharedStringMaker() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::SharedStatics*>(), { "GetSharedStringMaker", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Util::Tokenizer_StringMaker*>(nullptr, ___internal_method);
}
inline void System::SharedStatics::ReleaseSharedStringMaker(::by_ref<::System::Security::Util::Tokenizer_StringMaker*> maker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::SharedStatics*>(), { "ReleaseSharedStringMaker", {}, { ::i2c::type_of<::by_ref<::System::Security::Util::Tokenizer_StringMaker*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, maker);
}
inline ::System::SharedStatics* System::SharedStatics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::SharedStatics*>());
}
// Ctor Parameters []
constexpr ::System::SharedStatics::SharedStatics() {}
