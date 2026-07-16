#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/Tree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Tree_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Deflate_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__StaticTree_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Tree.d_code
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Tree::d_code)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x36367c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { "d_code", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Tree.gen_bitlen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Tree::*)(::Org::BouncyCastle::Utilities::Zlib::Deflate*)>(
    &::Org::BouncyCastle::Utilities::Zlib::Tree::gen_bitlen)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x3636880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { "gen_bitlen", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Tree.build_tree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Tree::*)(::Org::BouncyCastle::Utilities::Zlib::Deflate*)>(
    &::Org::BouncyCastle::Utilities::Zlib::Tree::build_tree)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x3636b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { "build_tree", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Tree.gen_codes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int16_t>, int32_t, ::ArrayW<int16_t>)>(&::Org::BouncyCastle::Utilities::Zlib::Tree::gen_codes)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3636fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(),
                                                             { "gen_codes", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Tree.bi_reverse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Tree::bi_reverse)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x363712c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { "bi_reverse", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Tree._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Tree::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Tree::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36373cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& Org::BouncyCastle::Utilities::Zlib::Tree::__cordl_internal_get_dyn_tree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dyn_tree;
}
constexpr ::ArrayW<int16_t> const& Org::BouncyCastle::Utilities::Zlib::Tree::__cordl_internal_get_dyn_tree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dyn_tree;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Tree::__cordl_internal_set_dyn_tree(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dyn_tree = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Tree::__cordl_internal_get_max_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_code;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Tree::__cordl_internal_get_max_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_code;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Tree::__cordl_internal_set_max_code(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max_code = value;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::StaticTree*& Org::BouncyCastle::Utilities::Zlib::Tree::__cordl_internal_get_stat_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stat_desc;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::StaticTree* const& Org::BouncyCastle::Utilities::Zlib::Tree::__cordl_internal_get_stat_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stat_desc;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Tree::__cordl_internal_set_stat_desc(::Org::BouncyCastle::Utilities::Zlib::StaticTree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stat_desc = value;
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::setStaticF_extra_lbits(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "extra_lbits", ::Org::BouncyCastle::Utilities::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Utilities::Zlib::Tree::getStaticF_extra_lbits() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "extra_lbits", ::Org::BouncyCastle::Utilities::Zlib::Tree*>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::setStaticF_extra_dbits(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "extra_dbits", ::Org::BouncyCastle::Utilities::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Utilities::Zlib::Tree::getStaticF_extra_dbits() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "extra_dbits", ::Org::BouncyCastle::Utilities::Zlib::Tree*>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::setStaticF_extra_blbits(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "extra_blbits", ::Org::BouncyCastle::Utilities::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Utilities::Zlib::Tree::getStaticF_extra_blbits() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "extra_blbits", ::Org::BouncyCastle::Utilities::Zlib::Tree*>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::setStaticF_bl_order(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "bl_order", ::Org::BouncyCastle::Utilities::Zlib::Tree*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Zlib::Tree::getStaticF_bl_order() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "bl_order", ::Org::BouncyCastle::Utilities::Zlib::Tree*>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::setStaticF__dist_code(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_dist_code", ::Org::BouncyCastle::Utilities::Zlib::Tree*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Zlib::Tree::getStaticF__dist_code() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_dist_code", ::Org::BouncyCastle::Utilities::Zlib::Tree*>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::setStaticF__length_code(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_length_code", ::Org::BouncyCastle::Utilities::Zlib::Tree*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Utilities::Zlib::Tree::getStaticF__length_code() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_length_code", ::Org::BouncyCastle::Utilities::Zlib::Tree*>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::setStaticF_base_length(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "base_length", ::Org::BouncyCastle::Utilities::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Utilities::Zlib::Tree::getStaticF_base_length() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "base_length", ::Org::BouncyCastle::Utilities::Zlib::Tree*>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::setStaticF_base_dist(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "base_dist", ::Org::BouncyCastle::Utilities::Zlib::Tree*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Utilities::Zlib::Tree::getStaticF_base_dist() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "base_dist", ::Org::BouncyCastle::Utilities::Zlib::Tree*>();
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Tree::d_code(int32_t dist) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { "d_code", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dist);
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::gen_bitlen(::Org::BouncyCastle::Utilities::Zlib::Deflate* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { "gen_bitlen", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::build_tree(::Org::BouncyCastle::Utilities::Zlib::Deflate* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { "build_tree", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::gen_codes(::ArrayW<int16_t> tree, int32_t max_code, ::ArrayW<int16_t> bl_count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(),
                                                           { "gen_codes", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tree, max_code, bl_count);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Tree::bi_reverse(int32_t code, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { "bi_reverse", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, code, len);
}
inline void Org::BouncyCastle::Utilities::Zlib::Tree::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Tree*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Zlib::Tree* Org::BouncyCastle::Utilities::Zlib::Tree::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::Tree*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree::Tree() {}
