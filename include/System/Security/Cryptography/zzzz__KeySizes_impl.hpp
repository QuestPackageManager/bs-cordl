#pragma once
// IWYU pragma private; include "System\Security\Cryptography\KeySizes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::KeySizes.get_MinSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::KeySizes::*)()>(&::System::Security::Cryptography::KeySizes::get_MinSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af91f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(), { "get_MinSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeySizes.get_MaxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::KeySizes::*)()>(&::System::Security::Cryptography::KeySizes::get_MaxSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af91fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(), { "get_MaxSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeySizes.get_SkipSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::KeySizes::*)()>(&::System::Security::Cryptography::KeySizes::get_SkipSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af9204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(), { "get_SkipSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeySizes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::KeySizes::*)(int32_t, int32_t, int32_t)>(&::System::Security::Cryptography::KeySizes::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af8fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeySizes.IsLegal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::KeySizes::*)(int32_t)>(&::System::Security::Cryptography::KeySizes::IsLegal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5af920c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(), { "IsLegal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::KeySizes.IsLegalKeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::System::Security::Cryptography::KeySizes*>, int32_t)>(&::System::Security::Cryptography::KeySizes::IsLegalKeySize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5af9250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(),
                                                             { "IsLegalKeySize", {}, { ::i2c::type_of<::ArrayW<::System::Security::Cryptography::KeySizes*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Cryptography::KeySizes::__cordl_internal_get_m_minSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_minSize;
}
constexpr int32_t const& System::Security::Cryptography::KeySizes::__cordl_internal_get_m_minSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_minSize;
}
constexpr void System::Security::Cryptography::KeySizes::__cordl_internal_set_m_minSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_minSize = value;
}
constexpr int32_t& System::Security::Cryptography::KeySizes::__cordl_internal_get_m_maxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxSize;
}
constexpr int32_t const& System::Security::Cryptography::KeySizes::__cordl_internal_get_m_maxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxSize;
}
constexpr void System::Security::Cryptography::KeySizes::__cordl_internal_set_m_maxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_maxSize = value;
}
constexpr int32_t& System::Security::Cryptography::KeySizes::__cordl_internal_get_m_skipSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_skipSize;
}
constexpr int32_t const& System::Security::Cryptography::KeySizes::__cordl_internal_get_m_skipSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_skipSize;
}
constexpr void System::Security::Cryptography::KeySizes::__cordl_internal_set_m_skipSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_skipSize = value;
}
inline int32_t System::Security::Cryptography::KeySizes::get_MinSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(), { "get_MinSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::KeySizes::get_MaxSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(), { "get_MaxSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::KeySizes::get_SkipSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(), { "get_SkipSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::KeySizes::_ctor(int32_t minSize, int32_t maxSize, int32_t skipSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minSize, maxSize, skipSize);
}
inline bool System::Security::Cryptography::KeySizes::IsLegal(int32_t keySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(), { "IsLegal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keySize);
}
inline bool System::Security::Cryptography::KeySizes::IsLegalKeySize(::ArrayW<::System::Security::Cryptography::KeySizes*> legalKeys, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::KeySizes*>(),
                                                           { "IsLegalKeySize", {}, { ::i2c::type_of<::ArrayW<::System::Security::Cryptography::KeySizes*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, legalKeys, size);
}
inline ::System::Security::Cryptography::KeySizes* System::Security::Cryptography::KeySizes::New_ctor(int32_t minSize, int32_t maxSize, int32_t skipSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::KeySizes*>(minSize, maxSize, skipSize));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::KeySizes::KeySizes() {}
