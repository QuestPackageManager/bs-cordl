#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1830))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::ZStream*
class CORDL_TYPE ZStream : public ::System::Object {
public:
  // Declarations
  /// @brief Field next_in, offset 0x10, size 0x8
  __declspec(property(get = __get_next_in, put = __set_next_in))::ArrayW<uint8_t, ::Array<uint8_t>*> next_in;

  /// @brief Field next_in_index, offset 0x18, size 0x4
  __declspec(property(get = __get_next_in_index, put = __set_next_in_index)) int32_t next_in_index;

  /// @brief Field avail_in, offset 0x1c, size 0x4
  __declspec(property(get = __get_avail_in, put = __set_avail_in)) int32_t avail_in;

  /// @brief Field total_in, offset 0x20, size 0x8
  __declspec(property(get = __get_total_in, put = __set_total_in)) int64_t total_in;

  /// @brief Field next_out, offset 0x28, size 0x8
  __declspec(property(get = __get_next_out, put = __set_next_out))::ArrayW<uint8_t, ::Array<uint8_t>*> next_out;

  /// @brief Field next_out_index, offset 0x30, size 0x4
  __declspec(property(get = __get_next_out_index, put = __set_next_out_index)) int32_t next_out_index;

  /// @brief Field avail_out, offset 0x34, size 0x4
  __declspec(property(get = __get_avail_out, put = __set_avail_out)) int32_t avail_out;

  /// @brief Field total_out, offset 0x38, size 0x8
  __declspec(property(get = __get_total_out, put = __set_total_out)) int64_t total_out;

  /// @brief Field msg, offset 0x40, size 0x8
  __declspec(property(get = __get_msg, put = __set_msg))::StringW msg;

  /// @brief Field dstate, offset 0x48, size 0x8
  __declspec(property(get = __get_dstate, put = __set_dstate))::Org::BouncyCastle::Utilities::Zlib::Deflate* dstate;

  /// @brief Field istate, offset 0x50, size 0x8
  __declspec(property(get = __get_istate, put = __set_istate))::Org::BouncyCastle::Utilities::Zlib::Inflate* istate;

  /// @brief Field data_type, offset 0x58, size 0x4
  __declspec(property(get = __get_data_type, put = __set_data_type)) int32_t data_type;

  /// @brief Field adler, offset 0x60, size 0x8
  __declspec(property(get = __get_adler, put = __set_adler)) int64_t adler;

  /// @brief Field _adler, offset 0x68, size 0x8
  __declspec(property(get = __get__adler, put = __set__adler))::Org::BouncyCastle::Utilities::Zlib::Adler32* _adler;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_next_in();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_next_in() const;

  constexpr void __set_next_in(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_next_in_index();

  constexpr int32_t const& __get_next_in_index() const;

  constexpr void __set_next_in_index(int32_t value);

  constexpr int32_t& __get_avail_in();

  constexpr int32_t const& __get_avail_in() const;

  constexpr void __set_avail_in(int32_t value);

  constexpr int64_t& __get_total_in();

  constexpr int64_t const& __get_total_in() const;

  constexpr void __set_total_in(int64_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_next_out();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_next_out() const;

  constexpr void __set_next_out(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_next_out_index();

  constexpr int32_t const& __get_next_out_index() const;

  constexpr void __set_next_out_index(int32_t value);

  constexpr int32_t& __get_avail_out();

  constexpr int32_t const& __get_avail_out() const;

  constexpr void __set_avail_out(int32_t value);

  constexpr int64_t& __get_total_out();

  constexpr int64_t const& __get_total_out() const;

  constexpr void __set_total_out(int64_t value);

  constexpr ::StringW& __get_msg();

  constexpr ::StringW const& __get_msg() const;

  constexpr void __set_msg(::StringW value);

  constexpr ::Org::BouncyCastle::Utilities::Zlib::Deflate*& __get_dstate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Deflate*> const& __get_dstate() const;

  constexpr void __set_dstate(::Org::BouncyCastle::Utilities::Zlib::Deflate* value);

  constexpr ::Org::BouncyCastle::Utilities::Zlib::Inflate*& __get_istate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Inflate*> const& __get_istate() const;

  constexpr void __set_istate(::Org::BouncyCastle::Utilities::Zlib::Inflate* value);

  constexpr int32_t& __get_data_type();

  constexpr int32_t const& __get_data_type() const;

  constexpr void __set_data_type(int32_t value);

  constexpr int64_t& __get_adler();

  constexpr int64_t const& __get_adler() const;

  constexpr void __set_adler(int64_t value);

  constexpr ::Org::BouncyCastle::Utilities::Zlib::Adler32*& __get__adler();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::Adler32*> const& __get__adler() const;

  constexpr void __set__adler(::Org::BouncyCastle::Utilities::Zlib::Adler32* value);

  /// @brief Method inflateInit, addr 0x116a3c8, size 0xc, virtual false, abstract: false, final false
  inline int32_t inflateInit();

  /// @brief Method inflateInit, addr 0x1169ec4, size 0xc, virtual false, abstract: false, final false
  inline int32_t inflateInit(bool nowrap);

  /// @brief Method inflateInit, addr 0x116a9b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t inflateInit(int32_t w);

  /// @brief Method inflateInit, addr 0x116a9bc, size 0x7c, virtual false, abstract: false, final false
  inline int32_t inflateInit(int32_t w, bool nowrap);

  /// @brief Method inflate, addr 0x116a0a8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t inflate(int32_t f);

  /// @brief Method inflateEnd, addr 0x116aa38, size 0x50, virtual false, abstract: false, final false
  inline int32_t inflateEnd();

  /// @brief Method inflateSync, addr 0x116aa88, size 0x18, virtual false, abstract: false, final false
  inline int32_t inflateSync();

  /// @brief Method inflateSetDictionary, addr 0x116aaa0, size 0x20, virtual false, abstract: false, final false
  inline int32_t inflateSetDictionary(::ArrayW<uint8_t, ::Array<uint8_t>*> dictionary, int32_t dictLength);

  /// @brief Method deflateInit, addr 0x116aac0, size 0xc, virtual false, abstract: false, final false
  inline int32_t deflateInit(int32_t level);

  /// @brief Method deflateInit, addr 0x116983c, size 0xc, virtual false, abstract: false, final false
  inline int32_t deflateInit(int32_t level, bool nowrap);

  /// @brief Method deflateInit, addr 0x116aacc, size 0x8, virtual false, abstract: false, final false
  inline int32_t deflateInit(int32_t level, int32_t bits);

  /// @brief Method deflateInit, addr 0x116aad4, size 0x94, virtual false, abstract: false, final false
  inline int32_t deflateInit(int32_t level, int32_t bits, bool nowrap);

  /// @brief Method deflate, addr 0x11699ac, size 0x24, virtual false, abstract: false, final false
  inline int32_t deflate(int32_t flush);

  /// @brief Method deflateEnd, addr 0x1169bd4, size 0x30, virtual false, abstract: false, final false
  inline int32_t deflateEnd();

  /// @brief Method deflateParams, addr 0x116ab68, size 0x28, virtual false, abstract: false, final false
  inline int32_t deflateParams(int32_t level, int32_t strategy);

  /// @brief Method deflateSetDictionary, addr 0x116ab90, size 0x28, virtual false, abstract: false, final false
  inline int32_t deflateSetDictionary(::ArrayW<uint8_t, ::Array<uint8_t>*> dictionary, int32_t dictLength);

  /// @brief Method flush_pending, addr 0x116abb8, size 0xbc, virtual false, abstract: false, final false
  inline void flush_pending();

  /// @brief Method read_buf, addr 0x116ac74, size 0xb0, virtual false, abstract: false, final false
  inline int32_t read_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t start, int32_t size);

  /// @brief Method free, addr 0x1169c04, size 0x14, virtual false, abstract: false, final false
  inline void free();

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZStream* New_ctor();

  /// @brief Method .ctor, addr 0x11697d4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ZStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZStream(ZStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZStream(ZStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZStream();

public:
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

  /// @brief Field MAX_WBITS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_WBITS{ static_cast<int32_t>(0xf) };

  /// @brief Field DEF_WBITS offset 0xffffffff size 0x4
  static constexpr int32_t DEF_WBITS{ static_cast<int32_t>(0xf) };

  /// @brief Field Z_NO_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_NO_FLUSH{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_PARTIAL_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_PARTIAL_FLUSH{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_SYNC_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_SYNC_FLUSH{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_FULL_FLUSH offset 0xffffffff size 0x4
  static constexpr int32_t Z_FULL_FLUSH{ static_cast<int32_t>(0x3) };

  /// @brief Field Z_FINISH offset 0xffffffff size 0x4
  static constexpr int32_t Z_FINISH{ static_cast<int32_t>(0x4) };

  /// @brief Field MAX_MEM_LEVEL offset 0xffffffff size 0x4
  static constexpr int32_t MAX_MEM_LEVEL{ static_cast<int32_t>(0x9) };

  /// @brief Field Z_OK offset 0xffffffff size 0x4
  static constexpr int32_t Z_OK{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_STREAM_END offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_END{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_NEED_DICT offset 0xffffffff size 0x4
  static constexpr int32_t Z_NEED_DICT{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_ERRNO offset 0xffffffff size 0x4
  static constexpr int32_t Z_ERRNO{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field Z_STREAM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_ERROR{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field Z_DATA_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_DATA_ERROR{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field Z_MEM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_MEM_ERROR{ static_cast<int32_t>(0xfffffffc) };

  /// @brief Field Z_BUF_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_BUF_ERROR{ static_cast<int32_t>(0xfffffffb) };

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
