#pragma once
// IWYU pragma private; include "UnityEngine/SpookyHash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SpookyHash_def.hpp"
#include "UnityEngine/zzzz__SpookyHash_def.hpp"
//  Writing Method size for method: ::UnityEngine::SpookyHash_U._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SpookyHash_U::*)(uint16_t*)>(&::UnityEngine::SpookyHash_U::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ac5564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash_U>(), { ".ctor", {}, { ::i2c::type_of<uint16_t*>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t*& UnityEngine::SpookyHash_U::__cordl_internal_get_p8() {
  return this->___p8;
}
constexpr uint8_t* const& UnityEngine::SpookyHash_U::__cordl_internal_get_p8() const {
  return this->___p8;
}
constexpr void UnityEngine::SpookyHash_U::__cordl_internal_set_p8(uint8_t* value) {
  this->___p8 = value;
}
constexpr uint32_t*& UnityEngine::SpookyHash_U::__cordl_internal_get_p32() {
  return this->___p32;
}
constexpr uint32_t* const& UnityEngine::SpookyHash_U::__cordl_internal_get_p32() const {
  return this->___p32;
}
constexpr void UnityEngine::SpookyHash_U::__cordl_internal_set_p32(uint32_t* value) {
  this->___p32 = value;
}
constexpr uint64_t*& UnityEngine::SpookyHash_U::__cordl_internal_get_p64() {
  return this->___p64;
}
constexpr uint64_t* const& UnityEngine::SpookyHash_U::__cordl_internal_get_p64() const {
  return this->___p64;
}
constexpr void UnityEngine::SpookyHash_U::__cordl_internal_set_p64(uint64_t* value) {
  this->___p64 = value;
}
constexpr uint64_t& UnityEngine::SpookyHash_U::__cordl_internal_get_i() {
  return this->___i;
}
constexpr uint64_t const& UnityEngine::SpookyHash_U::__cordl_internal_get_i() const {
  return this->___i;
}
constexpr void UnityEngine::SpookyHash_U::__cordl_internal_set_i(uint64_t value) {
  this->___i = value;
}
inline void UnityEngine::SpookyHash_U::_ctor(uint16_t* p8) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash_U>(), { ".ctor", {}, { ::i2c::type_of<uint16_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p8);
}
// Ctor Parameters [CppParam { name: "p8", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "p32", ty: "uint32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "p64", ty: "uint64_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "i", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpookyHash_U::SpookyHash_U(uint8_t* p8, uint32_t* p32, uint64_t* p64, uint64_t i) noexcept {
  this->p8 = p8;
  this->p32 = p32;
  this->p64 = p64;
  this->i = i;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpookyHash_U::SpookyHash_U() {}
//  Writing Method size for method: ::UnityEngine::SpookyHash.AttemptDetectAllowUnalignedRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::SpookyHash::AttemptDetectAllowUnalignedRead)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6ac5198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(), { "AttemptDetectAllowUnalignedRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint64_t, uint64_t*, uint64_t*)>(&::UnityEngine::SpookyHash::Hash)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x6ac4e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                                                             { "Hash", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>,
                                                                ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(
    &::UnityEngine::SpookyHash::End)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6ac5a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                                                { "End",
                                                  {},
                                                  { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.EndPartial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>,
                                                                ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(
    &::UnityEngine::SpookyHash::EndPartial)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6ac5ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                            { "EndPartial",
                              {},
                              { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.Rot64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint64_t>, int32_t)>(&::UnityEngine::SpookyHash::Rot64)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6ac5f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(), { "Rot64", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.Short
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint64_t, uint64_t*, uint64_t*)>(&::UnityEngine::SpookyHash::Short)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x6ac521c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                                                             { "Short", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.ShortMix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::UnityEngine::SpookyHash::ShortMix)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6ac5f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::SpookyHash*>(),
            { "ShortMix", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.ShortEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::UnityEngine::SpookyHash::ShortEnd)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6ac6168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::SpookyHash*>(),
            { "ShortEnd", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.Mix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>,
                                                                ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(
    &::UnityEngine::SpookyHash::Mix)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x6ac556c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                                                { "Mix",
                                                  {},
                                                  { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                    ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpookyHash.memset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, int32_t, uint64_t)>(&::UnityEngine::SpookyHash::memset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ac59b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(), { "memset", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::SpookyHash::setStaticF_AllowUnalignedRead(bool value) {
  ::cordl_internals::setStaticField<bool, "AllowUnalignedRead", ::UnityEngine::SpookyHash*>(std::forward<bool>(value));
}
inline bool UnityEngine::SpookyHash::getStaticF_AllowUnalignedRead() {
  return ::cordl_internals::getStaticField<bool, "AllowUnalignedRead", ::UnityEngine::SpookyHash*>();
}
inline bool UnityEngine::SpookyHash::AttemptDetectAllowUnalignedRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(), { "AttemptDetectAllowUnalignedRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::SpookyHash::Hash(void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                                                           { "Hash", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, length, hash1, hash2);
}
inline void UnityEngine::SpookyHash::End(uint64_t* data, ::by_ref<uint64_t> h0, ::by_ref<uint64_t> h1, ::by_ref<uint64_t> h2, ::by_ref<uint64_t> h3, ::by_ref<uint64_t> h4, ::by_ref<uint64_t> h5,
                                         ::by_ref<uint64_t> h6, ::by_ref<uint64_t> h7, ::by_ref<uint64_t> h8, ::by_ref<uint64_t> h9, ::by_ref<uint64_t> h10, ::by_ref<uint64_t> h11) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                                              { "End",
                                                {},
                                                { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                  ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                  ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                  ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
}
inline void UnityEngine::SpookyHash::EndPartial(::by_ref<uint64_t> h0, ::by_ref<uint64_t> h1, ::by_ref<uint64_t> h2, ::by_ref<uint64_t> h3, ::by_ref<uint64_t> h4, ::by_ref<uint64_t> h5,
                                                ::by_ref<uint64_t> h6, ::by_ref<uint64_t> h7, ::by_ref<uint64_t> h8, ::by_ref<uint64_t> h9, ::by_ref<uint64_t> h10, ::by_ref<uint64_t> h11) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                          { "EndPartial",
                            {},
                            { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                              ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                              ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, h0, h1, h2, h3, h4, h5, h6, h7, h8, h9, h10, h11);
}
inline void UnityEngine::SpookyHash::Rot64(::by_ref<uint64_t> x, int32_t k) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(), { "Rot64", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, k);
}
inline void UnityEngine::SpookyHash::Short(void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                                                           { "Short", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint64_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, length, hash1, hash2);
}
inline void UnityEngine::SpookyHash::ShortMix(::by_ref<uint64_t> h0, ::by_ref<uint64_t> h1, ::by_ref<uint64_t> h2, ::by_ref<uint64_t> h3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::SpookyHash*>(),
          { "ShortMix", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, h0, h1, h2, h3);
}
inline void UnityEngine::SpookyHash::ShortEnd(::by_ref<uint64_t> h0, ::by_ref<uint64_t> h1, ::by_ref<uint64_t> h2, ::by_ref<uint64_t> h3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::SpookyHash*>(),
          { "ShortEnd", {}, { ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, h0, h1, h2, h3);
}
inline void UnityEngine::SpookyHash::Mix(uint64_t* data, ::by_ref<uint64_t> s0, ::by_ref<uint64_t> s1, ::by_ref<uint64_t> s2, ::by_ref<uint64_t> s3, ::by_ref<uint64_t> s4, ::by_ref<uint64_t> s5,
                                         ::by_ref<uint64_t> s6, ::by_ref<uint64_t> s7, ::by_ref<uint64_t> s8, ::by_ref<uint64_t> s9, ::by_ref<uint64_t> s10, ::by_ref<uint64_t> s11) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(),
                                              { "Mix",
                                                {},
                                                { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                  ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                  ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(),
                                                  ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11);
}
inline void UnityEngine::SpookyHash::memset(void* dst, int32_t value, uint64_t numberOfBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SpookyHash*>(), { "memset", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, value, numberOfBytes);
}
// Ctor Parameters []
constexpr ::UnityEngine::SpookyHash::SpookyHash() {}
