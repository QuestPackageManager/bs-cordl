#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/SortKeyBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortKeyBuffer)
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class SortKey;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class SortKeyBuffer;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::SortKeyBuffer);
// Type: Mono.Globalization.Unicode::SortKeyBuffer
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 131, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: ::Mono.Globalization.Unicode::SortKeyBuffer*
class CORDL_TYPE SortKeyBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field frenchSort, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_frenchSort, put = __cordl_internal_set_frenchSort)) bool frenchSort;

  /// @brief Field frenchSorted, offset 0x82, size 0x1
  __declspec(property(get = __cordl_internal_get_frenchSorted, put = __cordl_internal_set_frenchSorted)) bool frenchSorted;

  /// @brief Field l1, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_l1, put = __cordl_internal_set_l1)) int32_t l1;

  /// @brief Field l1b, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_l1b, put = __cordl_internal_set_l1b))::ArrayW<uint8_t, ::Array<uint8_t>*> l1b;

  /// @brief Field l2, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_l2, put = __cordl_internal_set_l2)) int32_t l2;

  /// @brief Field l2b, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_l2b, put = __cordl_internal_set_l2b))::ArrayW<uint8_t, ::Array<uint8_t>*> l2b;

  /// @brief Field l3, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_l3, put = __cordl_internal_set_l3)) int32_t l3;

  /// @brief Field l3b, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_l3b, put = __cordl_internal_set_l3b))::ArrayW<uint8_t, ::Array<uint8_t>*> l3b;

  /// @brief Field l4k, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_l4k, put = __cordl_internal_set_l4k)) int32_t l4k;

  /// @brief Field l4kb, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_l4kb, put = __cordl_internal_set_l4kb))::ArrayW<uint8_t, ::Array<uint8_t>*> l4kb;

  /// @brief Field l4s, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_l4s, put = __cordl_internal_set_l4s)) int32_t l4s;

  /// @brief Field l4sb, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_l4sb, put = __cordl_internal_set_l4sb))::ArrayW<uint8_t, ::Array<uint8_t>*> l4sb;

  /// @brief Field l4t, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_l4t, put = __cordl_internal_set_l4t)) int32_t l4t;

  /// @brief Field l4tb, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_l4tb, put = __cordl_internal_set_l4tb))::ArrayW<uint8_t, ::Array<uint8_t>*> l4tb;

  /// @brief Field l4w, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_l4w, put = __cordl_internal_set_l4w)) int32_t l4w;

  /// @brief Field l4wb, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_l4wb, put = __cordl_internal_set_l4wb))::ArrayW<uint8_t, ::Array<uint8_t>*> l4wb;

  /// @brief Field l5, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_l5, put = __cordl_internal_set_l5)) int32_t l5;

  /// @brief Field l5b, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_l5b, put = __cordl_internal_set_l5b))::ArrayW<uint8_t, ::Array<uint8_t>*> l5b;

  /// @brief Field lcid, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_lcid, put = __cordl_internal_set_lcid)) int32_t lcid;

  /// @brief Field options, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_options, put = __cordl_internal_set_options))::System::Globalization::CompareOptions options;

  /// @brief Field processLevel2, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_processLevel2, put = __cordl_internal_set_processLevel2)) bool processLevel2;

  /// @brief Field source, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source))::StringW source;

  /// @brief Method AppendBufferPrimitive, addr 0x27b4bc4, size 0xc8, virtual false, abstract: false, final false
  inline void AppendBufferPrimitive(uint8_t value, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buf, ByRef<int32_t> bidx);

  /// @brief Method AppendCJKExtension, addr 0x27b1290, size 0x94, virtual false, abstract: false, final false
  inline void AppendCJKExtension(uint8_t lv1msb, uint8_t lv1lsb);

  /// @brief Method AppendKana, addr 0x27b13d8, size 0x94, virtual false, abstract: false, final false
  inline void AppendKana(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool isSmallKana, uint8_t markType, bool isKatakana, bool isHalfWidth);

  /// @brief Method AppendLevel5, addr 0x27b4c8c, size 0x98, virtual false, abstract: false, final false
  inline void AppendLevel5(uint8_t category, uint8_t lv1);

  /// @brief Method AppendNormal, addr 0x27b114c, size 0x144, virtual false, abstract: false, final false
  inline void AppendNormal(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3);

  /// @brief Method GetOptimizedLength, addr 0x27b5200, size 0x60, virtual false, abstract: false, final false
  inline int32_t GetOptimizedLength(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t len, uint8_t defaultValue);

  /// @brief Method GetResult, addr 0x27b4d24, size 0x4dc, virtual false, abstract: false, final false
  inline ::System::Globalization::SortKey* GetResult();

  /// @brief Method GetResultAndReset, addr 0x27b0d50, size 0x24, virtual false, abstract: false, final false
  inline ::System::Globalization::SortKey* GetResultAndReset();

  /// @brief Method Initialize, addr 0x27b085c, size 0x178, virtual false, abstract: false, final false
  inline void Initialize(::System::Globalization::CompareOptions options, int32_t lcid, ::StringW s, bool frenchSort);

  static inline ::Mono::Globalization::Unicode::SortKeyBuffer* New_ctor(int32_t lcid);

  /// @brief Method Reset, addr 0x27b4bb0, size 0x14, virtual false, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get_frenchSort() const;

  constexpr bool& __cordl_internal_get_frenchSort();

  constexpr bool const& __cordl_internal_get_frenchSorted() const;

  constexpr bool& __cordl_internal_get_frenchSorted();

  constexpr int32_t const& __cordl_internal_get_l1() const;

  constexpr int32_t& __cordl_internal_get_l1();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_l1b() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_l1b();

  constexpr int32_t const& __cordl_internal_get_l2() const;

  constexpr int32_t& __cordl_internal_get_l2();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_l2b() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_l2b();

  constexpr int32_t const& __cordl_internal_get_l3() const;

  constexpr int32_t& __cordl_internal_get_l3();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_l3b() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_l3b();

  constexpr int32_t const& __cordl_internal_get_l4k() const;

  constexpr int32_t& __cordl_internal_get_l4k();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_l4kb() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_l4kb();

  constexpr int32_t const& __cordl_internal_get_l4s() const;

  constexpr int32_t& __cordl_internal_get_l4s();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_l4sb() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_l4sb();

  constexpr int32_t const& __cordl_internal_get_l4t() const;

  constexpr int32_t& __cordl_internal_get_l4t();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_l4tb() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_l4tb();

  constexpr int32_t const& __cordl_internal_get_l4w() const;

  constexpr int32_t& __cordl_internal_get_l4w();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_l4wb() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_l4wb();

  constexpr int32_t const& __cordl_internal_get_l5() const;

  constexpr int32_t& __cordl_internal_get_l5();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_l5b() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_l5b();

  constexpr int32_t const& __cordl_internal_get_lcid() const;

  constexpr int32_t& __cordl_internal_get_lcid();

  constexpr ::System::Globalization::CompareOptions const& __cordl_internal_get_options() const;

  constexpr ::System::Globalization::CompareOptions& __cordl_internal_get_options();

  constexpr bool const& __cordl_internal_get_processLevel2() const;

  constexpr bool& __cordl_internal_get_processLevel2();

  constexpr ::StringW const& __cordl_internal_get_source() const;

  constexpr ::StringW& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_frenchSort(bool value);

  constexpr void __cordl_internal_set_frenchSorted(bool value);

  constexpr void __cordl_internal_set_l1(int32_t value);

  constexpr void __cordl_internal_set_l1b(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_l2(int32_t value);

  constexpr void __cordl_internal_set_l2b(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_l3(int32_t value);

  constexpr void __cordl_internal_set_l3b(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_l4k(int32_t value);

  constexpr void __cordl_internal_set_l4kb(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_l4s(int32_t value);

  constexpr void __cordl_internal_set_l4sb(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_l4t(int32_t value);

  constexpr void __cordl_internal_set_l4tb(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_l4w(int32_t value);

  constexpr void __cordl_internal_set_l4wb(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_l5(int32_t value);

  constexpr void __cordl_internal_set_l5b(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_lcid(int32_t value);

  constexpr void __cordl_internal_set_options(::System::Globalization::CompareOptions value);

  constexpr void __cordl_internal_set_processLevel2(bool value);

  constexpr void __cordl_internal_set_source(::StringW value);

  /// @brief Method .ctor, addr 0x27b0854, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t lcid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortKeyBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortKeyBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortKeyBuffer(SortKeyBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortKeyBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortKeyBuffer(SortKeyBuffer const&) = delete;

  /// @brief Field l1b, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l1b;

  /// @brief Field l2b, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l2b;

  /// @brief Field l3b, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l3b;

  /// @brief Field l4sb, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l4sb;

  /// @brief Field l4tb, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l4tb;

  /// @brief Field l4kb, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l4kb;

  /// @brief Field l4wb, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l4wb;

  /// @brief Field l5b, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___l5b;

  /// @brief Field source, offset: 0x50, size: 0x8, def value: None
  ::StringW ___source;

  /// @brief Field l1, offset: 0x58, size: 0x4, def value: None
  int32_t ___l1;

  /// @brief Field l2, offset: 0x5c, size: 0x4, def value: None
  int32_t ___l2;

  /// @brief Field l3, offset: 0x60, size: 0x4, def value: None
  int32_t ___l3;

  /// @brief Field l4s, offset: 0x64, size: 0x4, def value: None
  int32_t ___l4s;

  /// @brief Field l4t, offset: 0x68, size: 0x4, def value: None
  int32_t ___l4t;

  /// @brief Field l4k, offset: 0x6c, size: 0x4, def value: None
  int32_t ___l4k;

  /// @brief Field l4w, offset: 0x70, size: 0x4, def value: None
  int32_t ___l4w;

  /// @brief Field l5, offset: 0x74, size: 0x4, def value: None
  int32_t ___l5;

  /// @brief Field lcid, offset: 0x78, size: 0x4, def value: None
  int32_t ___lcid;

  /// @brief Field options, offset: 0x7c, size: 0x4, def value: None
  ::System::Globalization::CompareOptions ___options;

  /// @brief Field processLevel2, offset: 0x80, size: 0x1, def value: None
  bool ___processLevel2;

  /// @brief Field frenchSort, offset: 0x81, size: 0x1, def value: None
  bool ___frenchSort;

  /// @brief Field frenchSorted, offset: 0x82, size: 0x1, def value: None
  bool ___frenchSorted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::SortKeyBuffer, 0x88>, "Size mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l1b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l2b) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l3b) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l4sb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l4tb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l4kb) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l4wb) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l5b) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___source) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l2) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l4s) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l4t) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l4k) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l4w) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___l5) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___lcid) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___options) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___processLevel2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___frenchSort) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::SortKeyBuffer, ___frenchSorted) == 0x82, "Offset mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::SortKeyBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::SortKeyBuffer*, "Mono.Globalization.Unicode", "SortKeyBuffer");
