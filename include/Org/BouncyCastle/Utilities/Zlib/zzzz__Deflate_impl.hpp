#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Zlib\Deflate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Deflate_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Deflate_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Tree_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate_Config._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate_Config::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate_Config::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3634428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate_Config*>(),
                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_good_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___good_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_good_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___good_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_set_good_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___good_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_max_lazy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_lazy;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_max_lazy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_lazy;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_set_max_lazy(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max_lazy = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_nice_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nice_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_nice_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nice_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_set_nice_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nice_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_max_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_chain;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_max_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_chain;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_set_max_chain(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max_chain = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_func() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___func;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_get_func() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___func;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate_Config::__cordl_internal_set_func(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___func = value;
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate_Config::_ctor(int32_t good_length, int32_t max_lazy, int32_t nice_length, int32_t max_chain, int32_t func) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate_Config*>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, good_length, max_lazy, nice_length, max_chain, func);
}
inline ::Org::BouncyCastle::Utilities::Zlib::Deflate_Config* Org::BouncyCastle::Utilities::Zlib::Deflate_Config::New_ctor(int32_t good_length, int32_t max_lazy, int32_t nice_length, int32_t max_chain,
                                                                                                                          int32_t func) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::Deflate_Config*>(good_length, max_lazy, nice_length, max_chain, func));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::Deflate_Config::Deflate_Config() {}
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3631420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.lm_init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::lm_init)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3631550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "lm_init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.tr_init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::tr_init)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3631654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "tr_init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.init_block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::init_block)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x363170c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "init_block", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.pqdownheap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::ArrayW<int16_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::pqdownheap)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x36317e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "pqdownheap", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.smaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<int16_t>, int32_t, int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::smaller)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x363198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                         { "smaller", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.scan_tree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::ArrayW<int16_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::scan_tree)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3631a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "scan_tree", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.build_bl_tree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::build_bl_tree)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3631bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "build_bl_tree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.send_all_trees
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::send_all_trees)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3631ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                             { "send_all_trees", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.send_tree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::ArrayW<int16_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::send_tree)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3631ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "send_tree", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.put_byte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::put_byte)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x36320c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                             { "put_byte", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.put_byte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(uint8_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::put_byte)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x363210c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "put_byte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.put_short
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::put_short)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3632148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "put_short", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.putShortMSB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::putShortMSB)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x36321b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "putShortMSB", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.send_code
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, ::ArrayW<int16_t>)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::send_code)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3632080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "send_code", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.send_bits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::send_bits)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3631e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "send_bits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._tr_align
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_align)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3632218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "_tr_align", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._tr_tally
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_tally)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x36323cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "_tr_tally", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.compress_block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::ArrayW<int16_t>, ::ArrayW<int16_t>)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::compress_block)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3632670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                                                           { "compress_block", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<int16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.set_data_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::set_data_type)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x36328e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "set_data_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.bi_flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::bi_flush)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x36322fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "bi_flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.bi_windup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::bi_windup)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x36329a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "bi_windup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.copy_block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t, bool)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::copy_block)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3632a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                                                           { "copy_block", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.flush_block_only
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(bool)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::flush_block_only)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3632ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "flush_block_only", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflate_stored
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_stored)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3632cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "deflate_stored", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._tr_stored_block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t, bool)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_stored_block)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3633020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                             { "_tr_stored_block", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate._tr_flush_block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t, int32_t, bool)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_flush_block)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3632b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                             { "_tr_flush_block", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.fill_window
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::fill_window)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3632e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "fill_window", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflate_fast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_fast)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x3633064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "deflate_fast", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflate_slow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_slow)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x3633724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "deflate_slow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.longest_match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::longest_match)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x3633380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "longest_match", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3633ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                { "deflateInit", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3633c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                             { "deflateInit", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateInit2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t, int32_t, int32_t, int32_t,
                                                                                                                  int32_t)>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit2)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3633ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                             { "deflateInit2",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateReset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateReset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3633cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                                                           { "deflateReset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)()>(&::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateEnd)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3633d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "deflateEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateParams)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3633d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                { "deflateParams", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflateSetDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflateSetDictionary)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3633ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                            { "deflateSetDictionary", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::Deflate.deflate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::Deflate::*)(::Org::BouncyCastle::Utilities::Zlib::ZStream*, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::Deflate::deflate)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x3634060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                             { "deflate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_strm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strm;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_strm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strm;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_strm(::Org::BouncyCastle::Utilities::Zlib::ZStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strm = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_status(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_pending_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending_buf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_pending_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending_buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_pending_buf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pending_buf = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_pending_out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending_out;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_pending_out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending_out;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_pending_out(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pending_out = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_pending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_pending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_pending(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pending = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_noheader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noheader;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_noheader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noheader;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_noheader(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noheader = value;
}
constexpr uint8_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_data_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data_type;
}
constexpr uint8_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_data_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data_type;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_data_type(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data_type = value;
}
constexpr uint8_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr uint8_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_method(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_last_flush() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_flush;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_last_flush() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_flush;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_last_flush(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___last_flush = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_w_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w_size;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_w_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w_size;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_w_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w_size = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_w_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w_bits;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_w_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w_bits;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_w_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w_bits = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_w_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w_mask;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_w_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___w_mask;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_w_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___w_mask = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_window() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___window;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_window() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___window;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_window(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___window = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_window_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___window_size;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_window_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___window_size;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_window_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___window_size = value;
}
constexpr ::ArrayW<int16_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr ::ArrayW<int16_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_prev(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prev = value;
}
constexpr ::ArrayW<int16_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr ::ArrayW<int16_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_head(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___head = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_ins_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ins_h;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_ins_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ins_h;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_ins_h(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ins_h = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_hash_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_size;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_hash_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_size;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_hash_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hash_size = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_hash_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_bits;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_hash_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_bits;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_hash_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hash_bits = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_hash_mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_mask;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_hash_mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_mask;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_hash_mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hash_mask = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_hash_shift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_shift;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_hash_shift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hash_shift;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_hash_shift(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hash_shift = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_block_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block_start;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_block_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block_start;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_block_start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___block_start = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_match_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___match_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_match_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___match_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_match_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___match_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_prev_match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev_match;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_prev_match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev_match;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_prev_match(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prev_match = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_match_available() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___match_available;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_match_available() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___match_available;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_match_available(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___match_available = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_strstart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strstart;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_strstart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strstart;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_strstart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strstart = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_match_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___match_start;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_match_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___match_start;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_match_start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___match_start = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_lookahead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookahead;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_lookahead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookahead;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_lookahead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookahead = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_prev_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_prev_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_prev_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prev_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_max_chain_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_chain_length;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_max_chain_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_chain_length;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_max_chain_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max_chain_length = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_max_lazy_match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_lazy_match;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_max_lazy_match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max_lazy_match;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_max_lazy_match(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max_lazy_match = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_level(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___level = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_strategy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strategy;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_strategy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strategy;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_strategy(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strategy = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_good_match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___good_match;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_good_match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___good_match;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_good_match(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___good_match = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_nice_match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nice_match;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_nice_match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nice_match;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_nice_match(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nice_match = value;
}
constexpr ::ArrayW<int16_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_dyn_ltree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dyn_ltree;
}
constexpr ::ArrayW<int16_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_dyn_ltree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dyn_ltree;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_dyn_ltree(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dyn_ltree = value;
}
constexpr ::ArrayW<int16_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_dyn_dtree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dyn_dtree;
}
constexpr ::ArrayW<int16_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_dyn_dtree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dyn_dtree;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_dyn_dtree(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dyn_dtree = value;
}
constexpr ::ArrayW<int16_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bl_tree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bl_tree;
}
constexpr ::ArrayW<int16_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bl_tree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bl_tree;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_bl_tree(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bl_tree = value;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree*& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_l_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l_desc;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree* const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_l_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l_desc;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_l_desc(::Org::BouncyCastle::Utilities::Zlib::Tree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l_desc = value;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree*& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_d_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d_desc;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree* const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_d_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d_desc;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_d_desc(::Org::BouncyCastle::Utilities::Zlib::Tree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d_desc = value;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree*& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bl_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bl_desc;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::Tree* const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bl_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bl_desc;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_bl_desc(::Org::BouncyCastle::Utilities::Zlib::Tree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bl_desc = value;
}
constexpr ::ArrayW<int16_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bl_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bl_count;
}
constexpr ::ArrayW<int16_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bl_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bl_count;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_bl_count(::ArrayW<int16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bl_count = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_heap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heap;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_heap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heap;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_heap(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___heap = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_heap_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heap_len;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_heap_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heap_len;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_heap_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___heap_len = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_heap_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heap_max;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_heap_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heap_max;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_heap_max(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___heap_max = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_depth(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_l_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l_buf;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_l_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___l_buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_l_buf(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___l_buf = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_lit_bufsize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lit_bufsize;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_lit_bufsize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lit_bufsize;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_lit_bufsize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lit_bufsize = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_last_lit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_lit;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_last_lit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_lit;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_last_lit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___last_lit = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_d_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d_buf;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_d_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d_buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_d_buf(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d_buf = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_opt_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opt_len;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_opt_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opt_len;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_opt_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opt_len = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_static_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___static_len;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_static_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___static_len;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_static_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___static_len = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_matches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matches;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_matches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___matches;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_matches(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___matches = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_last_eob_len() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_eob_len;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_last_eob_len() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_eob_len;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_last_eob_len(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___last_eob_len = value;
}
constexpr uint32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bi_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bi_buf;
}
constexpr uint32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bi_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bi_buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_bi_buf(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bi_buf = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bi_valid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bi_valid;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_get_bi_valid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bi_valid;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::Deflate::__cordl_internal_set_bi_valid(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bi_valid = value;
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::setStaticF_config_table(::ArrayW<::Org::BouncyCastle::Utilities::Zlib::Deflate_Config*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Utilities::Zlib::Deflate_Config*>, "config_table", ::Org::BouncyCastle::Utilities::Zlib::Deflate*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Utilities::Zlib::Deflate_Config*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Utilities::Zlib::Deflate_Config*> Org::BouncyCastle::Utilities::Zlib::Deflate::getStaticF_config_table() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Utilities::Zlib::Deflate_Config*>, "config_table", ::Org::BouncyCastle::Utilities::Zlib::Deflate*>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::setStaticF_z_errmsg(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "z_errmsg", ::Org::BouncyCastle::Utilities::Zlib::Deflate*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Org::BouncyCastle::Utilities::Zlib::Deflate::getStaticF_z_errmsg() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "z_errmsg", ::Org::BouncyCastle::Utilities::Zlib::Deflate*>();
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::lm_init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "lm_init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::tr_init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "tr_init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::init_block() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "init_block", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::pqdownheap(::ArrayW<int16_t> tree, int32_t k) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "pqdownheap", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree, k);
}
inline bool Org::BouncyCastle::Utilities::Zlib::Deflate::smaller(::ArrayW<int16_t> tree, int32_t n, int32_t m, ::ArrayW<uint8_t> depth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                              { "smaller", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tree, n, m, depth);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::scan_tree(::ArrayW<int16_t> tree, int32_t max_code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "scan_tree", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree, max_code);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::build_bl_tree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "build_bl_tree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::send_all_trees(int32_t lcodes, int32_t dcodes, int32_t blcodes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                           { "send_all_trees", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lcodes, dcodes, blcodes);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::send_tree(::ArrayW<int16_t> tree, int32_t max_code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "send_tree", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tree, max_code);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::put_byte(::ArrayW<uint8_t> p, int32_t start, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                           { "put_byte", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, start, len);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::put_byte(uint8_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "put_byte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::put_short(int32_t w) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "put_short", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, w);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::putShortMSB(int32_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "putShortMSB", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::send_code(int32_t c, ::ArrayW<int16_t> tree) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "send_code", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, tree);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::send_bits(int32_t val, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "send_bits", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val, length);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_align() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "_tr_align", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_tally(int32_t dist, int32_t lc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "_tr_tally", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dist, lc);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::compress_block(::ArrayW<int16_t> ltree, ::ArrayW<int16_t> dtree) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                                                         { "compress_block", {}, { ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<int16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ltree, dtree);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::set_data_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "set_data_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::bi_flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "bi_flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::bi_windup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "bi_windup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::copy_block(int32_t buf, int32_t len, bool header) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                                                         { "copy_block", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, len, header);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::flush_block_only(bool eof) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "flush_block_only", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eof);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_stored(int32_t flush) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "deflate_stored", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_stored_block(int32_t buf, int32_t stored_len, bool eof) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                           { "_tr_stored_block", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, stored_len, eof);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::_tr_flush_block(int32_t buf, int32_t stored_len, bool eof) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                                                         { "_tr_flush_block", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, stored_len, eof);
}
inline void Org::BouncyCastle::Utilities::Zlib::Deflate::fill_window() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "fill_window", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_fast(int32_t flush) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "deflate_fast", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflate_slow(int32_t flush) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "deflate_slow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::longest_match(int32_t cur_match) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "longest_match", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cur_match);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                              { "deflateInit", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, strm, level, bits);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                           { "deflateInit", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, strm, level);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateInit2(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t level, int32_t method, int32_t windowBits, int32_t memLevel,
                                                                         int32_t strategy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                           { "deflateInit2",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, strm, level, method, windowBits, memLevel, strategy);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateReset(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                                                         { "deflateReset", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, strm);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(), { "deflateEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateParams(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t _level, int32_t _strategy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                              { "deflateParams", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, strm, _level, _strategy);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflateSetDictionary(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, ::ArrayW<uint8_t> dictionary, int32_t dictLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                          { "deflateSetDictionary", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, strm, dictionary, dictLength);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::Deflate::deflate(::Org::BouncyCastle::Utilities::Zlib::ZStream* strm, int32_t flush) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::Deflate*>(),
                                                           { "deflate", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Zlib::ZStream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, strm, flush);
}
inline ::Org::BouncyCastle::Utilities::Zlib::Deflate* Org::BouncyCastle::Utilities::Zlib::Deflate::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::Deflate*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::Deflate::Deflate() {}
