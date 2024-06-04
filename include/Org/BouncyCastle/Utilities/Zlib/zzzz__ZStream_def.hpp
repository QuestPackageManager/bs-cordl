#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/ZStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZStream)
namespace Org::BouncyCastle::Utilities::Zlib {
class Adler32;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class Deflate;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class Inflate;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::ZStream);
// Type: Org.BouncyCastle.Utilities.Zlib::ZStream
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::ZStream*
class CORDL_TYPE ZStream : public ::System::Object {
public:
  // Declarations
  /// @brief Field _adler, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__adler, put = __cordl_internal_set__adler))::Org::BouncyCastle::Utilities::Zlib::Adler32* _adler;

  /// @brief Field adler, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_adler, put = __cordl_internal_set_adler)) int64_t adler;

  /// @brief Field avail_in, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_avail_in, put = __cordl_internal_set_avail_in)) int32_t avail_in;

  /// @brief Field avail_out, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_avail_out, put = __cordl_internal_set_avail_out)) int32_t avail_out;

  /// @brief Field data_type, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_data_type, put = __cordl_internal_set_data_type)) int32_t data_type;

  /// @brief Field dstate, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_dstate, put = __cordl_internal_set_dstate))::Org::BouncyCastle::Utilities::Zlib::Deflate* dstate;

  /// @brief Field istate, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_istate, put = __cordl_internal_set_istate))::Org::BouncyCastle::Utilities::Zlib::Inflate* istate;

  /// @brief Field msg, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_msg, put = __cordl_internal_set_msg))::StringW msg;

  /// @brief Field next_in, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_next_in, put = __cordl_internal_set_next_in))::ArrayW<uint8_t, ::Array<uint8_t>*> next_in;

  /// @brief Field next_in_index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_next_in_index, put = __cordl_internal_set_next_in_index)) int32_t next_in_index;

  /// @brief Field next_out, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_next_out, put = __cordl_internal_set_next_out))::ArrayW<uint8_t, ::Array<uint8_t>*> next_out;

  /// @brief Field next_out_index, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_next_out_index, put = __cordl_internal_set_next_out_index)) int32_t next_out_index;

  /// @brief Field total_in, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_total_in, put = __cordl_internal_set_total_in)) int64_t total_in;

  /// @brief Field total_out, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_total_out, put = __cordl_internal_set_total_out)) int64_t total_out;

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZStream* New_ctor();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::Adler32*& __cordl_internal_get__adler();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Adler32*> const& __cordl_internal_get__adler() const;

  constexpr int64_t const& __cordl_internal_get_adler() const;

  constexpr int64_t& __cordl_internal_get_adler();

  constexpr int32_t const& __cordl_internal_get_avail_in() const;

  constexpr int32_t& __cordl_internal_get_avail_in();

  constexpr int32_t const& __cordl_internal_get_avail_out() const;

  constexpr int32_t& __cordl_internal_get_avail_out();

  constexpr int32_t const& __cordl_internal_get_data_type() const;

  constexpr int32_t& __cordl_internal_get_data_type();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::Deflate*& __cordl_internal_get_dstate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Deflate*> const& __cordl_internal_get_dstate() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::Inflate*& __cordl_internal_get_istate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Inflate*> const& __cordl_internal_get_istate() const;

  constexpr ::StringW const& __cordl_internal_get_msg() const;

  constexpr ::StringW& __cordl_internal_get_msg();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_next_in() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_next_in();

  constexpr int32_t const& __cordl_internal_get_next_in_index() const;

  constexpr int32_t& __cordl_internal_get_next_in_index();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_next_out() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_next_out();

  constexpr int32_t const& __cordl_internal_get_next_out_index() const;

  constexpr int32_t& __cordl_internal_get_next_out_index();

  constexpr int64_t const& __cordl_internal_get_total_in() const;

  constexpr int64_t& __cordl_internal_get_total_in();

  constexpr int64_t const& __cordl_internal_get_total_out() const;

  constexpr int64_t& __cordl_internal_get_total_out();

  constexpr void __cordl_internal_set__adler(::Org::BouncyCastle::Utilities::Zlib::Adler32* value);

  constexpr void __cordl_internal_set_adler(int64_t value);

  constexpr void __cordl_internal_set_avail_in(int32_t value);

  constexpr void __cordl_internal_set_avail_out(int32_t value);

  constexpr void __cordl_internal_set_data_type(int32_t value);

  constexpr void __cordl_internal_set_dstate(::Org::BouncyCastle::Utilities::Zlib::Deflate* value);

  constexpr void __cordl_internal_set_istate(::Org::BouncyCastle::Utilities::Zlib::Inflate* value);

  constexpr void __cordl_internal_set_msg(::StringW value);

  constexpr void __cordl_internal_set_next_in(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_next_in_index(int32_t value);

  constexpr void __cordl_internal_set_next_out(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_next_out_index(int32_t value);

  constexpr void __cordl_internal_set_total_in(int64_t value);

  constexpr void __cordl_internal_set_total_out(int64_t value);

  /// @brief Method .ctor, addr 0x13d3850, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method deflate, addr 0x13d3a28, size 0x24, virtual false, abstract: false, final false
  inline int32_t deflate(int32_t flush);

  /// @brief Method deflateEnd, addr 0x13d3c50, size 0x30, virtual false, abstract: false, final false
  inline int32_t deflateEnd();

  /// @brief Method deflateInit, addr 0x13d4b3c, size 0xc, virtual false, abstract: false, final false
  inline int32_t deflateInit(int32_t level);

  /// @brief Method deflateInit, addr 0x13d4b48, size 0x8, virtual false, abstract: false, final false
  inline int32_t deflateInit(int32_t level, int32_t bits);

  /// @brief Method deflateInit, addr 0x13d4b50, size 0x94, virtual false, abstract: false, final false
  inline int32_t deflateInit(int32_t level, int32_t bits, bool nowrap);

  /// @brief Method deflateInit, addr 0x13d38b8, size 0xc, virtual false, abstract: false, final false
  inline int32_t deflateInit(int32_t level, bool nowrap);

  /// @brief Method deflateParams, addr 0x13d4be4, size 0x28, virtual false, abstract: false, final false
  inline int32_t deflateParams(int32_t level, int32_t strategy);

  /// @brief Method deflateSetDictionary, addr 0x13d4c0c, size 0x28, virtual false, abstract: false, final false
  inline int32_t deflateSetDictionary(::ArrayW<uint8_t, ::Array<uint8_t>*> dictionary, int32_t dictLength);

  /// @brief Method flush_pending, addr 0x13d4c34, size 0xbc, virtual false, abstract: false, final false
  inline void flush_pending();

  /// @brief Method free, addr 0x13d3c80, size 0x14, virtual false, abstract: false, final false
  inline void free();

  /// @brief Method inflate, addr 0x13d4124, size 0x1c, virtual false, abstract: false, final false
  inline int32_t inflate(int32_t f);

  /// @brief Method inflateEnd, addr 0x13d4ab4, size 0x50, virtual false, abstract: false, final false
  inline int32_t inflateEnd();

  /// @brief Method inflateInit, addr 0x13d4444, size 0xc, virtual false, abstract: false, final false
  inline int32_t inflateInit();

  /// @brief Method inflateInit, addr 0x13d3f40, size 0xc, virtual false, abstract: false, final false
  inline int32_t inflateInit(bool nowrap);

  /// @brief Method inflateInit, addr 0x13d4a30, size 0x8, virtual false, abstract: false, final false
  inline int32_t inflateInit(int32_t w);

  /// @brief Method inflateInit, addr 0x13d4a38, size 0x7c, virtual false, abstract: false, final false
  inline int32_t inflateInit(int32_t w, bool nowrap);

  /// @brief Method inflateSetDictionary, addr 0x13d4b1c, size 0x20, virtual false, abstract: false, final false
  inline int32_t inflateSetDictionary(::ArrayW<uint8_t, ::Array<uint8_t>*> dictionary, int32_t dictLength);

  /// @brief Method inflateSync, addr 0x13d4b04, size 0x18, virtual false, abstract: false, final false
  inline int32_t inflateSync();

  /// @brief Method read_buf, addr 0x13d4cf0, size 0xb0, virtual false, abstract: false, final false
  inline int32_t read_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t start, int32_t size);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZStream(ZStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZStream(ZStream const&) = delete;

  /// @brief Field next_in, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___next_in;

  /// @brief Field next_in_index, offset: 0x18, size: 0x4, def value: None
  int32_t ___next_in_index;

  /// @brief Field avail_in, offset: 0x1c, size: 0x4, def value: None
  int32_t ___avail_in;

  /// @brief Field total_in, offset: 0x20, size: 0x8, def value: None
  int64_t ___total_in;

  /// @brief Field next_out, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___next_out;

  /// @brief Field next_out_index, offset: 0x30, size: 0x4, def value: None
  int32_t ___next_out_index;

  /// @brief Field avail_out, offset: 0x34, size: 0x4, def value: None
  int32_t ___avail_out;

  /// @brief Field total_out, offset: 0x38, size: 0x8, def value: None
  int64_t ___total_out;

  /// @brief Field msg, offset: 0x40, size: 0x8, def value: None
  ::StringW ___msg;

  /// @brief Field dstate, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::Deflate* ___dstate;

  /// @brief Field istate, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::Inflate* ___istate;

  /// @brief Field data_type, offset: 0x58, size: 0x4, def value: None
  int32_t ___data_type;

  /// @brief Field adler, offset: 0x60, size: 0x8, def value: None
  int64_t ___adler;

  /// @brief Field _adler, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::Adler32* ____adler;

  /// @brief Field DEF_WBITS offset 0xffffffff size 0x4
  static constexpr int32_t DEF_WBITS{ static_cast<int32_t>(0xf) };

  /// @brief Field MAX_MEM_LEVEL offset 0xffffffff size 0x4
  static constexpr int32_t MAX_MEM_LEVEL{ static_cast<int32_t>(0x9) };

  /// @brief Field MAX_WBITS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_WBITS{ static_cast<int32_t>(0xf) };

  /// @brief Field Z_BUF_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_BUF_ERROR{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field Z_DATA_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_DATA_ERROR{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field Z_ERRNO offset 0xffffffff size 0x4
  static constexpr int32_t Z_ERRNO{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field Z_FINISH offset 0xffffffff size 0x4
  static constexpr int32_t Z_FINISH{ static_cast<int32_t>(0x4) };

  /// @brief Field Z_FULL_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_FULL_FLUSH{ static_cast<int32_t>(0x3) };

  /// @brief Field Z_MEM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_MEM_ERROR{ static_cast<int32_t>(0xfffffffc) };

  /// @brief Field Z_NEED_DICT offset 0xffffffff size 0x4
  static constexpr int32_t Z_NEED_DICT{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_NO_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_NO_FLUSH{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_OK offset 0xffffffff size 0x4
  static constexpr int32_t Z_OK{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_PARTIAL_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_PARTIAL_FLUSH{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_STREAM_END offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_END{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_STREAM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_ERROR{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field Z_SYNC_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_SYNC_FLUSH{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_VERSION_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_VERSION_ERROR{ static_cast<int32_t>(0xfffffffa) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::ZStream, 0x70>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___next_in) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___next_in_index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___avail_in) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___total_in) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___next_out) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___next_out_index) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___avail_out) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___total_out) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___msg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___dstate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___istate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___data_type) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ___adler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::ZStream, ____adler) == 0x68, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::ZStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::ZStream*, "Org.BouncyCastle.Utilities.Zlib", "ZStream");
