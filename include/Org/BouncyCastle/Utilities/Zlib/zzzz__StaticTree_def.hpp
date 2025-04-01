#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Zlib/StaticTree.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StaticTree)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class StaticTree;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::StaticTree);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Zlib.StaticTree
class CORDL_TYPE StaticTree : public ::System::Object {
public:
  // Declarations
  /// @brief Field elems, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_elems, put = __cordl_internal_set_elems)) int32_t elems;

  /// @brief Field extra_base, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_extra_base, put = __cordl_internal_set_extra_base)) int32_t extra_base;

  /// @brief Field extra_bits, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_extra_bits, put = __cordl_internal_set_extra_bits)) ::ArrayW<int32_t, ::Array<int32_t>*> extra_bits;

  /// @brief Field max_length, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_max_length, put = __cordl_internal_set_max_length)) int32_t max_length;

  /// @brief Field static_bl_desc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_static_bl_desc, put = setStaticF_static_bl_desc)) ::Org::BouncyCastle::Utilities::Zlib::StaticTree* static_bl_desc;

  /// @brief Field static_d_desc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_static_d_desc, put = setStaticF_static_d_desc)) ::Org::BouncyCastle::Utilities::Zlib::StaticTree* static_d_desc;

  /// @brief Field static_dtree, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_static_dtree, put = setStaticF_static_dtree)) ::ArrayW<int16_t, ::Array<int16_t>*> static_dtree;

  /// @brief Field static_l_desc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_static_l_desc, put = setStaticF_static_l_desc)) ::Org::BouncyCastle::Utilities::Zlib::StaticTree* static_l_desc;

  /// @brief Field static_ltree, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_static_ltree, put = setStaticF_static_ltree)) ::ArrayW<int16_t, ::Array<int16_t>*> static_ltree;

  /// @brief Field static_tree, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_static_tree, put = __cordl_internal_set_static_tree)) ::ArrayW<int16_t, ::Array<int16_t>*> static_tree;

  static inline ::Org::BouncyCastle::Utilities::Zlib::StaticTree* New_ctor(::ArrayW<int16_t, ::Array<int16_t>*> static_tree, ::ArrayW<int32_t, ::Array<int32_t>*> extra_bits, int32_t extra_base,
                                                                           int32_t elems, int32_t max_length);

  constexpr int32_t const& __cordl_internal_get_elems() const;

  constexpr int32_t& __cordl_internal_get_elems();

  constexpr int32_t const& __cordl_internal_get_extra_base() const;

  constexpr int32_t& __cordl_internal_get_extra_base();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_extra_bits() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_extra_bits();

  constexpr int32_t const& __cordl_internal_get_max_length() const;

  constexpr int32_t& __cordl_internal_get_max_length();

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const& __cordl_internal_get_static_tree() const;

  constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& __cordl_internal_get_static_tree();

  constexpr void __cordl_internal_set_elems(int32_t value);

  constexpr void __cordl_internal_set_extra_base(int32_t value);

  constexpr void __cordl_internal_set_extra_bits(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_max_length(int32_t value);

  constexpr void __cordl_internal_set_static_tree(::ArrayW<int16_t, ::Array<int16_t>*> value);

  /// @brief Method .ctor, addr 0x25df110, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int16_t, ::Array<int16_t>*> static_tree, ::ArrayW<int32_t, ::Array<int32_t>*> extra_bits, int32_t extra_base, int32_t elems, int32_t max_length);

  static inline ::Org::BouncyCastle::Utilities::Zlib::StaticTree* getStaticF_static_bl_desc();

  static inline ::Org::BouncyCastle::Utilities::Zlib::StaticTree* getStaticF_static_d_desc();

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_static_dtree();

  static inline ::Org::BouncyCastle::Utilities::Zlib::StaticTree* getStaticF_static_l_desc();

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_static_ltree();

  static inline void setStaticF_static_bl_desc(::Org::BouncyCastle::Utilities::Zlib::StaticTree* value);

  static inline void setStaticF_static_d_desc(::Org::BouncyCastle::Utilities::Zlib::StaticTree* value);

  static inline void setStaticF_static_dtree(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline void setStaticF_static_l_desc(::Org::BouncyCastle::Utilities::Zlib::StaticTree* value);

  static inline void setStaticF_static_ltree(::ArrayW<int16_t, ::Array<int16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticTree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticTree(StaticTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticTree(StaticTree const&) = delete;

  /// @brief Field BL_CODES offset 0xffffffff size 0x4
  static constexpr int32_t BL_CODES{ static_cast<int32_t>(0x13) };

  /// @brief Field D_CODES offset 0xffffffff size 0x4
  static constexpr int32_t D_CODES{ static_cast<int32_t>(0x1e) };

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1825 };

  /// @brief Field static_tree, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int16_t, ::Array<int16_t>*> ___static_tree;

  /// @brief Field extra_bits, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___extra_bits;

  /// @brief Field extra_base, offset: 0x20, size: 0x4, def value: None
  int32_t ___extra_base;

  /// @brief Field elems, offset: 0x24, size: 0x4, def value: None
  int32_t ___elems;

  /// @brief Field max_length, offset: 0x28, size: 0x4, def value: None
  int32_t ___max_length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::StaticTree, ___static_tree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::StaticTree, ___extra_bits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::StaticTree, ___extra_base) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::StaticTree, ___elems) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::StaticTree, ___max_length) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::StaticTree, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::StaticTree);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::StaticTree*, "Org.BouncyCastle.Utilities.Zlib", "StaticTree");
