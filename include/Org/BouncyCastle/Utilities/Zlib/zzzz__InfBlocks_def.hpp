#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/InfBlocks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InfBlocks)
namespace Org::BouncyCastle::Utilities::Zlib {
class InfCodes;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class InfTree;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class InfBlocks;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::InfBlocks);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Zlib.InfBlocks
class CORDL_TYPE InfBlocks : public ::System::Object {
public:
  // Declarations
  /// @brief Field bb, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bb, put = __cordl_internal_set_bb)) ::ArrayW<int32_t, ::Array<int32_t>*> bb;

  /// @brief Field bitb, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_bitb, put = __cordl_internal_set_bitb)) int32_t bitb;

  /// @brief Field bitk, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_bitk, put = __cordl_internal_set_bitk)) int32_t bitk;

  /// @brief Field blens, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_blens, put = __cordl_internal_set_blens)) ::ArrayW<int32_t, ::Array<int32_t>*> blens;

  /// @brief Field border, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_border, put = setStaticF_border)) ::ArrayW<int32_t, ::Array<int32_t>*> border;

  /// @brief Field check, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_check, put = __cordl_internal_set_check)) int64_t check;

  /// @brief Field checkfn, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_checkfn, put = __cordl_internal_set_checkfn)) ::System::Object* checkfn;

  /// @brief Field codes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_codes, put = __cordl_internal_set_codes)) ::Org::BouncyCastle::Utilities::Zlib::InfCodes* codes;

  /// @brief Field end, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_end, put = __cordl_internal_set_end)) int32_t end;

  /// @brief Field hufts, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_hufts, put = __cordl_internal_set_hufts)) ::ArrayW<int32_t, ::Array<int32_t>*> hufts;

  /// @brief Field index, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field inflate_mask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inflate_mask, put = setStaticF_inflate_mask)) ::ArrayW<int32_t, ::Array<int32_t>*> inflate_mask;

  /// @brief Field inftree, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_inftree, put = __cordl_internal_set_inftree)) ::Org::BouncyCastle::Utilities::Zlib::InfTree* inftree;

  /// @brief Field last, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_last, put = __cordl_internal_set_last)) int32_t last;

  /// @brief Field left, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_left, put = __cordl_internal_set_left)) int32_t left;

  /// @brief Field mode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) int32_t mode;

  /// @brief Field read, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_read, put = __cordl_internal_set_read)) int32_t read;

  /// @brief Field table, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_table, put = __cordl_internal_set_table)) int32_t table;

  /// @brief Field tb, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_tb, put = __cordl_internal_set_tb)) ::ArrayW<int32_t, ::Array<int32_t>*> tb;

  /// @brief Field window, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_window, put = __cordl_internal_set_window)) ::ArrayW<uint8_t, ::Array<uint8_t>*> window;

  /// @brief Field write, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_write, put = __cordl_internal_set_write)) int32_t write;

  static inline ::Org::BouncyCastle::Utilities::Zlib::InfBlocks* New_ctor(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, ::System::Object* checkfn, int32_t w);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_bb() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_bb();

  constexpr int32_t const& __cordl_internal_get_bitb() const;

  constexpr int32_t& __cordl_internal_get_bitb();

  constexpr int32_t const& __cordl_internal_get_bitk() const;

  constexpr int32_t& __cordl_internal_get_bitk();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_blens() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_blens();

  constexpr int64_t const& __cordl_internal_get_check() const;

  constexpr int64_t& __cordl_internal_get_check();

  constexpr ::System::Object* const& __cordl_internal_get_checkfn() const;

  constexpr ::System::Object*& __cordl_internal_get_checkfn();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::InfCodes* const& __cordl_internal_get_codes() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::InfCodes*& __cordl_internal_get_codes();

  constexpr int32_t const& __cordl_internal_get_end() const;

  constexpr int32_t& __cordl_internal_get_end();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_hufts() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_hufts();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::InfTree* const& __cordl_internal_get_inftree() const;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::InfTree*& __cordl_internal_get_inftree();

  constexpr int32_t const& __cordl_internal_get_last() const;

  constexpr int32_t& __cordl_internal_get_last();

  constexpr int32_t const& __cordl_internal_get_left() const;

  constexpr int32_t& __cordl_internal_get_left();

  constexpr int32_t const& __cordl_internal_get_mode() const;

  constexpr int32_t& __cordl_internal_get_mode();

  constexpr int32_t const& __cordl_internal_get_read() const;

  constexpr int32_t& __cordl_internal_get_read();

  constexpr int32_t const& __cordl_internal_get_table() const;

  constexpr int32_t& __cordl_internal_get_table();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_tb() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_tb();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_window() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_window();

  constexpr int32_t const& __cordl_internal_get_write() const;

  constexpr int32_t& __cordl_internal_get_write();

  constexpr void __cordl_internal_set_bb(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_bitb(int32_t value);

  constexpr void __cordl_internal_set_bitk(int32_t value);

  constexpr void __cordl_internal_set_blens(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_check(int64_t value);

  constexpr void __cordl_internal_set_checkfn(::System::Object* value);

  constexpr void __cordl_internal_set_codes(::Org::BouncyCastle::Utilities::Zlib::InfCodes* value);

  constexpr void __cordl_internal_set_end(int32_t value);

  constexpr void __cordl_internal_set_hufts(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_inftree(::Org::BouncyCastle::Utilities::Zlib::InfTree* value);

  constexpr void __cordl_internal_set_last(int32_t value);

  constexpr void __cordl_internal_set_left(int32_t value);

  constexpr void __cordl_internal_set_mode(int32_t value);

  constexpr void __cordl_internal_set_read(int32_t value);

  constexpr void __cordl_internal_set_table(int32_t value);

  constexpr void __cordl_internal_set_tb(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_window(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_write(int32_t value);

  /// @brief Method .ctor, addr 0x350e084, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, ::System::Object* checkfn, int32_t w);

  /// @brief Method free, addr 0x3510400, size 0x1c, virtual false, abstract: false, final false
  inline void free(::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_border();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_inflate_mask();

  /// @brief Method inflate_flush, addr 0x350f378, size 0x17c, virtual false, abstract: false, final false
  inline int32_t inflate_flush(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t r);

  /// @brief Method proc, addr 0x350e26c, size 0x110c, virtual false, abstract: false, final false
  inline int32_t proc(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t r);

  /// @brief Method reset, addr 0x350e1d8, size 0x90, virtual false, abstract: false, final false
  inline void reset(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, ::ArrayW<int64_t, ::Array<int64_t>*> c);

  static inline void setStaticF_border(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_inflate_mask(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_dictionary, addr 0x351041c, size 0x40, virtual false, abstract: false, final false
  inline void set_dictionary(::ArrayW<uint8_t, ::Array<uint8_t>*> d, int32_t start, int32_t n);

  /// @brief Method sync_point, addr 0x351045c, size 0x10, virtual false, abstract: false, final false
  inline int32_t sync_point();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InfBlocks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InfBlocks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InfBlocks(InfBlocks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InfBlocks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InfBlocks(InfBlocks const&) = delete;

  /// @brief Field BAD offset 0xffffffff size 0x4
  static constexpr int32_t BAD{ static_cast<int32_t>(0x9) };

  /// @brief Field BTREE offset 0xffffffff size 0x4
  static constexpr int32_t BTREE{ static_cast<int32_t>(0x4) };

  /// @brief Field CODES offset 0xffffffff size 0x4
  static constexpr int32_t CODES{ static_cast<int32_t>(0x6) };

  /// @brief Field DONE offset 0xffffffff size 0x4
  static constexpr int32_t DONE{ static_cast<int32_t>(0x8) };

  /// @brief Field DRY offset 0xffffffff size 0x4
  static constexpr int32_t DRY{ static_cast<int32_t>(0x7) };

  /// @brief Field DTREE offset 0xffffffff size 0x4
  static constexpr int32_t DTREE{ static_cast<int32_t>(0x5) };

  /// @brief Field LENS offset 0xffffffff size 0x4
  static constexpr int32_t LENS{ static_cast<int32_t>(0x1) };

  /// @brief Field MANY offset 0xffffffff size 0x4
  static constexpr int32_t MANY{ static_cast<int32_t>(0x5a0) };

  /// @brief Field STORED offset 0xffffffff size 0x4
  static constexpr int32_t STORED{ static_cast<int32_t>(0x2) };

  /// @brief Field TABLE offset 0xffffffff size 0x4
  static constexpr int32_t TABLE{ static_cast<int32_t>(0x3) };

  /// @brief Field TYPE offset 0xffffffff size 0x4
  static constexpr int32_t TYPE{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_BUF_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_BUF_ERROR{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field Z_DATA_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_DATA_ERROR{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field Z_ERRNO offset 0xffffffff size 0x4
  static constexpr int32_t Z_ERRNO{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field Z_MEM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_MEM_ERROR{ static_cast<int32_t>(0xfffffffc) };

  /// @brief Field Z_NEED_DICT offset 0xffffffff size 0x4
  static constexpr int32_t Z_NEED_DICT{ static_cast<int32_t>(0x2) };

  /// @brief Field Z_OK offset 0xffffffff size 0x4
  static constexpr int32_t Z_OK{ static_cast<int32_t>(0x0) };

  /// @brief Field Z_STREAM_END offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_END{ static_cast<int32_t>(0x1) };

  /// @brief Field Z_STREAM_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_STREAM_ERROR{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field Z_VERSION_ERROR offset 0xffffffff size 0x4
  static constexpr int32_t Z_VERSION_ERROR{ static_cast<int32_t>(0xfffffffa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1820 };

  /// @brief Field mode, offset: 0x10, size: 0x4, def value: None
  int32_t ___mode;

  /// @brief Field left, offset: 0x14, size: 0x4, def value: None
  int32_t ___left;

  /// @brief Field table, offset: 0x18, size: 0x4, def value: None
  int32_t ___table;

  /// @brief Field index, offset: 0x1c, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field blens, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___blens;

  /// @brief Field bb, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___bb;

  /// @brief Field tb, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___tb;

  /// @brief Field codes, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::InfCodes* ___codes;

  /// @brief Field last, offset: 0x40, size: 0x4, def value: None
  int32_t ___last;

  /// @brief Field bitk, offset: 0x44, size: 0x4, def value: None
  int32_t ___bitk;

  /// @brief Field bitb, offset: 0x48, size: 0x4, def value: None
  int32_t ___bitb;

  /// @brief Field hufts, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___hufts;

  /// @brief Field window, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___window;

  /// @brief Field end, offset: 0x60, size: 0x4, def value: None
  int32_t ___end;

  /// @brief Field read, offset: 0x64, size: 0x4, def value: None
  int32_t ___read;

  /// @brief Field write, offset: 0x68, size: 0x4, def value: None
  int32_t ___write;

  /// @brief Field checkfn, offset: 0x70, size: 0x8, def value: None
  ::System::Object* ___checkfn;

  /// @brief Field check, offset: 0x78, size: 0x8, def value: None
  int64_t ___check;

  /// @brief Field inftree, offset: 0x80, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::InfTree* ___inftree;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___left) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___index) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___blens) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___bb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___tb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___codes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___last) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___bitk) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___bitb) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___hufts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___window) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___end) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___read) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___write) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___checkfn) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___check) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfBlocks, ___inftree) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::InfBlocks, 0x88>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::InfBlocks);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::InfBlocks*, "Org.BouncyCastle.Utilities.Zlib", "InfBlocks");
