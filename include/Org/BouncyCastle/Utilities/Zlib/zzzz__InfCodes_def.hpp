#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/InfCodes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InfCodes)
namespace Org::BouncyCastle::Utilities::Zlib {
class InfBlocks;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class InfCodes;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::InfCodes);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Zlib.InfCodes
class CORDL_TYPE InfCodes : public ::System::Object {
public:
  // Declarations
  /// @brief Field dbits, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_dbits, put = __cordl_internal_set_dbits)) uint8_t dbits;

  /// @brief Field dist, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_dist, put = __cordl_internal_set_dist)) int32_t dist;

  /// @brief Field dtree, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_dtree, put = __cordl_internal_set_dtree)) ::ArrayW<int32_t, ::Array<int32_t>*> dtree;

  /// @brief Field dtree_index, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_dtree_index, put = __cordl_internal_set_dtree_index)) int32_t dtree_index;

  /// @brief Field get, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_get, put = __cordl_internal_set_get)) int32_t get;

  /// @brief Field inflate_mask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inflate_mask, put = setStaticF_inflate_mask)) ::ArrayW<int32_t, ::Array<int32_t>*> inflate_mask;

  /// @brief Field lbits, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_lbits, put = __cordl_internal_set_lbits)) uint8_t lbits;

  /// @brief Field len, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_len, put = __cordl_internal_set_len)) int32_t len;

  /// @brief Field lit, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lit, put = __cordl_internal_set_lit)) int32_t lit;

  /// @brief Field ltree, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ltree, put = __cordl_internal_set_ltree)) ::ArrayW<int32_t, ::Array<int32_t>*> ltree;

  /// @brief Field ltree_index, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_ltree_index, put = __cordl_internal_set_ltree_index)) int32_t ltree_index;

  /// @brief Field mode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) int32_t mode;

  /// @brief Field need, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_need, put = __cordl_internal_set_need)) int32_t need;

  /// @brief Field tree, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tree, put = __cordl_internal_set_tree)) ::ArrayW<int32_t, ::Array<int32_t>*> tree;

  /// @brief Field tree_index, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_tree_index, put = __cordl_internal_set_tree_index)) int32_t tree_index;

  static inline ::Org::BouncyCastle::Utilities::Zlib::InfCodes* New_ctor();

  constexpr uint8_t const& __cordl_internal_get_dbits() const;

  constexpr uint8_t& __cordl_internal_get_dbits();

  constexpr int32_t const& __cordl_internal_get_dist() const;

  constexpr int32_t& __cordl_internal_get_dist();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_dtree() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_dtree();

  constexpr int32_t const& __cordl_internal_get_dtree_index() const;

  constexpr int32_t& __cordl_internal_get_dtree_index();

  constexpr int32_t const& __cordl_internal_get_get() const;

  constexpr int32_t& __cordl_internal_get_get();

  constexpr uint8_t const& __cordl_internal_get_lbits() const;

  constexpr uint8_t& __cordl_internal_get_lbits();

  constexpr int32_t const& __cordl_internal_get_len() const;

  constexpr int32_t& __cordl_internal_get_len();

  constexpr int32_t const& __cordl_internal_get_lit() const;

  constexpr int32_t& __cordl_internal_get_lit();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_ltree() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_ltree();

  constexpr int32_t const& __cordl_internal_get_ltree_index() const;

  constexpr int32_t& __cordl_internal_get_ltree_index();

  constexpr int32_t const& __cordl_internal_get_mode() const;

  constexpr int32_t& __cordl_internal_get_mode();

  constexpr int32_t const& __cordl_internal_get_need() const;

  constexpr int32_t& __cordl_internal_get_need();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_tree() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_tree();

  constexpr int32_t const& __cordl_internal_get_tree_index() const;

  constexpr int32_t& __cordl_internal_get_tree_index();

  constexpr void __cordl_internal_set_dbits(uint8_t value);

  constexpr void __cordl_internal_set_dist(int32_t value);

  constexpr void __cordl_internal_set_dtree(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_dtree_index(int32_t value);

  constexpr void __cordl_internal_set_get(int32_t value);

  constexpr void __cordl_internal_set_lbits(uint8_t value);

  constexpr void __cordl_internal_set_len(int32_t value);

  constexpr void __cordl_internal_set_lit(int32_t value);

  constexpr void __cordl_internal_set_ltree(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_ltree_index(int32_t value);

  constexpr void __cordl_internal_set_mode(int32_t value);

  constexpr void __cordl_internal_set_need(int32_t value);

  constexpr void __cordl_internal_set_tree(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_tree_index(int32_t value);

  /// @brief Method .ctor, addr 0x350e1c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method free, addr 0x350e268, size 0x4, virtual false, abstract: false, final false
  inline void free(::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_inflate_mask();

  /// @brief Method inflate_fast, addr 0x3510544, size 0x8fc, virtual false, abstract: false, final false
  inline int32_t inflate_fast(int32_t bl, int32_t bd, ::ArrayW<int32_t, ::Array<int32_t>*> tl, int32_t tl_index, ::ArrayW<int32_t, ::Array<int32_t>*> td, int32_t td_index,
                              ::Org::BouncyCastle::Utilities::Zlib::InfBlocks* s, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method init, addr 0x350f5d0, size 0x24, virtual false, abstract: false, final false
  inline void init(int32_t bl, int32_t bd, ::ArrayW<int32_t, ::Array<int32_t>*> tl, int32_t tl_index, ::ArrayW<int32_t, ::Array<int32_t>*> td, int32_t td_index,
                   ::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method proc, addr 0x350f99c, size 0xa64, virtual false, abstract: false, final false
  inline int32_t proc(::Org::BouncyCastle::Utilities::Zlib::InfBlocks* s, ::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t r);

  static inline void setStaticF_inflate_mask(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InfCodes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InfCodes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InfCodes(InfCodes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InfCodes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InfCodes(InfCodes const&) = delete;

  /// @brief Field BADCODE offset 0xffffffff size 0x4
  static constexpr int32_t BADCODE{ static_cast<int32_t>(0x9) };

  /// @brief Field COPY offset 0xffffffff size 0x4
  static constexpr int32_t COPY{ static_cast<int32_t>(0x5) };

  /// @brief Field DIST offset 0xffffffff size 0x4
  static constexpr int32_t DIST{ static_cast<int32_t>(0x3) };

  /// @brief Field DISTEXT offset 0xffffffff size 0x4
  static constexpr int32_t DISTEXT{ static_cast<int32_t>(0x4) };

  /// @brief Field END offset 0xffffffff size 0x4
  static constexpr int32_t END{ static_cast<int32_t>(0x8) };

  /// @brief Field LEN offset 0xffffffff size 0x4
  static constexpr int32_t LEN{ static_cast<int32_t>(0x1) };

  /// @brief Field LENEXT offset 0xffffffff size 0x4
  static constexpr int32_t LENEXT{ static_cast<int32_t>(0x2) };

  /// @brief Field LIT offset 0xffffffff size 0x4
  static constexpr int32_t LIT{ static_cast<int32_t>(0x6) };

  /// @brief Field START offset 0xffffffff size 0x4
  static constexpr int32_t START{ static_cast<int32_t>(0x0) };

  /// @brief Field WASH offset 0xffffffff size 0x4
  static constexpr int32_t WASH{ static_cast<int32_t>(0x7) };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1821 };

  /// @brief Field mode, offset: 0x10, size: 0x4, def value: None
  int32_t ___mode;

  /// @brief Field len, offset: 0x14, size: 0x4, def value: None
  int32_t ___len;

  /// @brief Field tree, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___tree;

  /// @brief Field tree_index, offset: 0x20, size: 0x4, def value: None
  int32_t ___tree_index;

  /// @brief Field need, offset: 0x24, size: 0x4, def value: None
  int32_t ___need;

  /// @brief Field lit, offset: 0x28, size: 0x4, def value: None
  int32_t ___lit;

  /// @brief Field get, offset: 0x2c, size: 0x4, def value: None
  int32_t ___get;

  /// @brief Field dist, offset: 0x30, size: 0x4, def value: None
  int32_t ___dist;

  /// @brief Field lbits, offset: 0x34, size: 0x1, def value: None
  uint8_t ___lbits;

  /// @brief Field dbits, offset: 0x35, size: 0x1, def value: None
  uint8_t ___dbits;

  /// @brief Field ltree, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___ltree;

  /// @brief Field ltree_index, offset: 0x40, size: 0x4, def value: None
  int32_t ___ltree_index;

  /// @brief Field dtree, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___dtree;

  /// @brief Field dtree_index, offset: 0x50, size: 0x4, def value: None
  int32_t ___dtree_index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___len) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___tree) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___tree_index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___need) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___lit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___get) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___dist) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___lbits) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___dbits) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___ltree) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___ltree_index) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___dtree) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::InfCodes, ___dtree_index) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::InfCodes, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::InfCodes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::InfCodes*, "Org.BouncyCastle.Utilities.Zlib", "InfCodes");
