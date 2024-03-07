#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tree)
namespace Org::BouncyCastle::Utilities::Zlib {
class Deflate;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class StaticTree;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class Tree;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::Tree);
// Type: Org.BouncyCastle.Utilities.Zlib::Tree
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::Tree*
class CORDL_TYPE Tree : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dist_code, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__dist_code, put = setStaticF__dist_code))::ArrayW<uint8_t, ::Array<uint8_t>*> _dist_code;

  /// @brief Field _length_code, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__length_code, put = setStaticF__length_code))::ArrayW<uint8_t, ::Array<uint8_t>*> _length_code;

  /// @brief Field base_dist, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_base_dist, put = setStaticF_base_dist))::ArrayW<int32_t, ::Array<int32_t>*> base_dist;

  /// @brief Field base_length, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_base_length, put = setStaticF_base_length))::ArrayW<int32_t, ::Array<int32_t>*> base_length;

  /// @brief Field bl_order, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bl_order, put = setStaticF_bl_order))::ArrayW<uint8_t, ::Array<uint8_t>*> bl_order;

  /// @brief Field dyn_tree, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dyn_tree, put = __cordl_internal_set_dyn_tree))::ArrayW<int16_t, ::Array<int16_t>*> dyn_tree;

  /// @brief Field extra_blbits, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_extra_blbits, put = setStaticF_extra_blbits))::ArrayW<int32_t, ::Array<int32_t>*> extra_blbits;

  /// @brief Field extra_dbits, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_extra_dbits, put = setStaticF_extra_dbits))::ArrayW<int32_t, ::Array<int32_t>*> extra_dbits;

  /// @brief Field extra_lbits, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_extra_lbits, put = setStaticF_extra_lbits))::ArrayW<int32_t, ::Array<int32_t>*> extra_lbits;

  /// @brief Field max_code, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_max_code, put = __cordl_internal_set_max_code)) int32_t max_code;

  /// @brief Field stat_desc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stat_desc, put = __cordl_internal_set_stat_desc))::Org::BouncyCastle::Utilities::Zlib::StaticTree* stat_desc;

  static inline ::Org::BouncyCastle::Utilities::Zlib::Tree* New_ctor();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_dyn_tree() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_dyn_tree();

  constexpr int32_t const& __cordl_internal_get_max_code() const;

  constexpr int32_t& __cordl_internal_get_max_code();

  constexpr ::Org::BouncyCastle::Utilities::Zlib::StaticTree*& __cordl_internal_get_stat_desc();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::StaticTree*> const& __cordl_internal_get_stat_desc() const;

  constexpr void __cordl_internal_set_dyn_tree(::ArrayW<int16_t, ::Array<int16_t>*> value);

  constexpr void __cordl_internal_set_max_code(int32_t value);

  constexpr void __cordl_internal_set_stat_desc(::Org::BouncyCastle::Utilities::Zlib::StaticTree* value);

  /// @brief Method .ctor, addr 0x1200c24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method bi_reverse, addr 0x1200998, size 0x28, virtual false, abstract: false, final false
  static inline int32_t bi_reverse(int32_t code, int32_t len);

  /// @brief Method build_tree, addr 0x12003a8, size 0x474, virtual false, abstract: false, final false
  inline void build_tree(::Org::BouncyCastle::Utilities::Zlib::Deflate* s);

  /// @brief Method d_code, addr 0x1200044, size 0x98, virtual false, abstract: false, final false
  static inline int32_t d_code(int32_t dist);

  /// @brief Method gen_bitlen, addr 0x12000dc, size 0x2cc, virtual false, abstract: false, final false
  inline void gen_bitlen(::Org::BouncyCastle::Utilities::Zlib::Deflate* s);

  /// @brief Method gen_codes, addr 0x120081c, size 0x17c, virtual false, abstract: false, final false
  static inline void gen_codes(::ArrayW<int16_t, ::Array<int16_t>*> tree, int32_t max_code, ::ArrayW<int16_t, ::Array<int16_t>*> bl_count);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__dist_code();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF__length_code();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_base_dist();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_base_length();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_bl_order();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_extra_blbits();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_extra_dbits();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_extra_lbits();

  static inline void setStaticF__dist_code(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF__length_code(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_base_dist(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_base_length(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_bl_order(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_extra_blbits(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_extra_dbits(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_extra_lbits(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tree(Tree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tree(Tree const&) = delete;

  /// @brief Field dyn_tree, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___dyn_tree;

  /// @brief Field max_code, offset: 0x18, size: 0x4, def value: None
  int32_t ___max_code;

  /// @brief Field stat_desc, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::StaticTree* ___stat_desc;

  /// @brief Field BL_CODES offset 0xffffffff size 0x4
  static constexpr int32_t BL_CODES{ static_cast<int32_t>(0x13) };

  /// @brief Field Buf_size offset 0xffffffff size 0x4
  static constexpr int32_t Buf_size{ static_cast<int32_t>(0x10) };

  /// @brief Field DIST_CODE_LEN offset 0xffffffff size 0x4
  static constexpr int32_t DIST_CODE_LEN{ static_cast<int32_t>(0x200) };

  /// @brief Field D_CODES offset 0xffffffff size 0x4
  static constexpr int32_t D_CODES{ static_cast<int32_t>(0x1e) };

  /// @brief Field END_BLOCK offset 0xffffffff size 0x4
  static constexpr int32_t END_BLOCK{ static_cast<int32_t>(0x100) };

  /// @brief Field HEAP_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t HEAP_SIZE{ static_cast<int32_t>(0x23d) };

  /// @brief Field LENGTH_CODES offset 0xffffffff size 0x4
  static constexpr int32_t LENGTH_CODES{ static_cast<int32_t>(0x1d) };

  /// @brief Field LITERALS offset 0xffffffff size 0x4
  static constexpr int32_t LITERALS{ static_cast<int32_t>(0x100) };

  /// @brief Field L_CODES offset 0xffffffff size 0x4
  static constexpr int32_t L_CODES{ static_cast<int32_t>(0x11e) };

  /// @brief Field MAX_BITS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_BITS{ static_cast<int32_t>(0xf) };

  /// @brief Field MAX_BL_BITS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_BL_BITS{ static_cast<int32_t>(0x7) };

  /// @brief Field REPZ_11_138 offset 0xffffffff size 0x4
  static constexpr int32_t REPZ_11_138{ static_cast<int32_t>(0x12) };

  /// @brief Field REPZ_3_10 offset 0xffffffff size 0x4
  static constexpr int32_t REPZ_3_10{ static_cast<int32_t>(0x11) };

  /// @brief Field REP_3_6 offset 0xffffffff size 0x4
  static constexpr int32_t REP_3_6{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::Tree, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Tree, ___dyn_tree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Tree, ___max_code) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Tree, ___stat_desc) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::Tree);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::Tree*, "Org.BouncyCastle.Utilities.Zlib", "Tree");
