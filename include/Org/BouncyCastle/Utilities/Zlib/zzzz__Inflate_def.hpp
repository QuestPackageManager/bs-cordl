#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Inflate)
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class InfBlocks;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class Inflate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::Inflate);
// Type: Org.BouncyCastle.Utilities.Zlib::Inflate
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1822))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::Inflate*
class CORDL_TYPE Inflate : public ::System::Object {
public:
  // Declarations
  /// @brief Field mode, offset 0x10, size 0x4
  __declspec(property(get = __get_mode, put = __set_mode)) int32_t mode;

  /// @brief Field method, offset 0x14, size 0x4
  __declspec(property(get = __get_method, put = __set_method)) int32_t method;

  /// @brief Field was, offset 0x18, size 0x8
  __declspec(property(get = __get_was, put = __set_was))::ArrayW<int64_t, ::Array<int64_t>*> was;

  /// @brief Field need, offset 0x20, size 0x8
  __declspec(property(get = __get_need, put = __set_need)) int64_t need;

  /// @brief Field marker, offset 0x28, size 0x4
  __declspec(property(get = __get_marker, put = __set_marker)) int32_t marker;

  /// @brief Field nowrap, offset 0x2c, size 0x4
  __declspec(property(get = __get_nowrap, put = __set_nowrap)) int32_t nowrap;

  /// @brief Field wbits, offset 0x30, size 0x4
  __declspec(property(get = __get_wbits, put = __set_wbits)) int32_t wbits;

  /// @brief Field blocks, offset 0x38, size 0x8
  __declspec(property(get = __get_blocks, put = __set_blocks))::Org::BouncyCastle::Utilities::Zlib::InfBlocks* blocks;

  /// @brief Field mark, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mark, put = setStaticF_mark))::ArrayW<uint8_t, ::Array<uint8_t>*> mark;

  constexpr int32_t& __get_mode();

  constexpr int32_t const& __get_mode() const;

  constexpr void __set_mode(int32_t value);

  constexpr int32_t& __get_method();

  constexpr int32_t const& __get_method() const;

  constexpr void __set_method(int32_t value);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __get_was();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __get_was() const;

  constexpr void __set_was(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr int64_t& __get_need();

  constexpr int64_t const& __get_need() const;

  constexpr void __set_need(int64_t value);

  constexpr int32_t& __get_marker();

  constexpr int32_t const& __get_marker() const;

  constexpr void __set_marker(int32_t value);

  constexpr int32_t& __get_nowrap();

  constexpr int32_t const& __get_nowrap() const;

  constexpr void __set_nowrap(int32_t value);

  constexpr int32_t& __get_wbits();

  constexpr int32_t const& __get_wbits() const;

  constexpr void __set_wbits(int32_t value);

  constexpr ::Org::BouncyCastle::Utilities::Zlib::InfBlocks*& __get_blocks();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::InfBlocks*> const& __get_blocks() const;

  constexpr void __set_blocks(::Org::BouncyCastle::Utilities::Zlib::InfBlocks* value);

  static inline void setStaticF_mark(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_mark();

  /// @brief Method inflateReset, addr 0x116720c, size 0x54, virtual false, abstract: false, final false
  inline int32_t inflateReset(::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method inflateEnd, addr 0x1167260, size 0x38, virtual false, abstract: false, final false
  inline int32_t inflateEnd(::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method inflateInit, addr 0x1167298, size 0xd8, virtual false, abstract: false, final false
  inline int32_t inflateInit(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t w);

  /// @brief Method inflate, addr 0x1167370, size 0x670, virtual false, abstract: false, final false
  inline int32_t inflate(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, int32_t f);

  /// @brief Method inflateSetDictionary, addr 0x11679e0, size 0x104, virtual false, abstract: false, final false
  inline int32_t inflateSetDictionary(::Org::BouncyCastle::Utilities::Zlib::ZStream* z, ::ArrayW<uint8_t, ::Array<uint8_t>*> dictionary, int32_t dictLength);

  /// @brief Method inflateSync, addr 0x1167ae4, size 0x1c0, virtual false, abstract: false, final false
  inline int32_t inflateSync(::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  /// @brief Method inflateSyncPoint, addr 0x1167ca4, size 0x2c, virtual false, abstract: false, final false
  inline int32_t inflateSyncPoint(::Org::BouncyCastle::Utilities::Zlib::ZStream* z);

  static inline ::Org::BouncyCastle::Utilities::Zlib::Inflate* New_ctor();

  /// @brief Method .ctor, addr 0x1167d64, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Inflate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Inflate(Inflate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Inflate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Inflate(Inflate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Inflate();

public:
  /// @brief Field mode, offset: 0x10, size: 0x4, def value: None
  int32_t ___mode;

  /// @brief Field method, offset: 0x14, size: 0x4, def value: None
  int32_t ___method;

  /// @brief Field was, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ___was;

  /// @brief Field need, offset: 0x20, size: 0x8, def value: None
  int64_t ___need;

  /// @brief Field marker, offset: 0x28, size: 0x4, def value: None
  int32_t ___marker;

  /// @brief Field nowrap, offset: 0x2c, size: 0x4, def value: None
  int32_t ___nowrap;

  /// @brief Field wbits, offset: 0x30, size: 0x4, def value: None
  int32_t ___wbits;

  /// @brief Field blocks, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::InfBlocks* ___blocks;

  /// @brief Field MAX_WBITS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_WBITS{ static_cast<int32_t>(0xf) };

  /// @brief Field PRESET_DICT offset 0xffffffff size 0x4
  static constexpr int32_t PRESET_DICT{ static_cast<int32_t>(0x20) };

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

  /// @brief Field Z_DEFLATED offset 0xffffffff size 0x4
  static constexpr int32_t Z_DEFLATED{ static_cast<int32_t>(0x8) };

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

  /// @brief Field METHOD offset 0xffffffff size 0x4
  static constexpr int32_t METHOD{ static_cast<int32_t>(0x0) };

  /// @brief Field FLAG offset 0xffffffff size 0x4
  static constexpr int32_t FLAG{ static_cast<int32_t>(0x1) };

  /// @brief Field DICT4 offset 0xffffffff size 0x4
  static constexpr int32_t DICT4{ static_cast<int32_t>(0x2) };

  /// @brief Field DICT3 offset 0xffffffff size 0x4
  static constexpr int32_t DICT3{ static_cast<int32_t>(0x3) };

  /// @brief Field DICT2 offset 0xffffffff size 0x4
  static constexpr int32_t DICT2{ static_cast<int32_t>(0x4) };

  /// @brief Field DICT1 offset 0xffffffff size 0x4
  static constexpr int32_t DICT1{ static_cast<int32_t>(0x5) };

  /// @brief Field DICT0 offset 0xffffffff size 0x4
  static constexpr int32_t DICT0{ static_cast<int32_t>(0x6) };

  /// @brief Field BLOCKS offset 0xffffffff size 0x4
  static constexpr int32_t BLOCKS{ static_cast<int32_t>(0x7) };

  /// @brief Field CHECK4 offset 0xffffffff size 0x4
  static constexpr int32_t CHECK4{ static_cast<int32_t>(0x8) };

  /// @brief Field CHECK3 offset 0xffffffff size 0x4
  static constexpr int32_t CHECK3{ static_cast<int32_t>(0x9) };

  /// @brief Field CHECK2 offset 0xffffffff size 0x4
  static constexpr int32_t CHECK2{ static_cast<int32_t>(0xa) };

  /// @brief Field CHECK1 offset 0xffffffff size 0x4
  static constexpr int32_t CHECK1{ static_cast<int32_t>(0xb) };

  /// @brief Field DONE offset 0xffffffff size 0x4
  static constexpr int32_t DONE{ static_cast<int32_t>(0xc) };

  /// @brief Field BAD offset 0xffffffff size 0x4
  static constexpr int32_t BAD{ static_cast<int32_t>(0xd) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::Inflate, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Inflate, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Inflate, ___method) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Inflate, ___was) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Inflate, ___need) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Inflate, ___marker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Inflate, ___nowrap) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Inflate, ___wbits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::Zlib::Inflate, ___blocks) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::Inflate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::Inflate*, "Org.BouncyCastle.Utilities.Zlib", "Inflate");
