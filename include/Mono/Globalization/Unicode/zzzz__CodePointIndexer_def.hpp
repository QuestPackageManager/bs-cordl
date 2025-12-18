#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/CodePointIndexer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CodePointIndexer)
namespace Mono::Globalization::Unicode {
struct CodePointIndexer_TableRange;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
namespace Mono::Globalization::Unicode {
struct CodePointIndexer_TableRange;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::CodePointIndexer);
MARK_VAL_T(::Mono::Globalization::Unicode::CodePointIndexer_TableRange);
// Dependencies
namespace Mono::Globalization::Unicode {
// Is value type: true
// CS Name: Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct CORDL_TYPE CodePointIndexer_TableRange {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x5901aac, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t start, int32_t end, int32_t indexStart);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CodePointIndexer_TableRange();

  // Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexEnd", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr CodePointIndexer_TableRange(int32_t Start, int32_t End, int32_t Count, int32_t IndexStart, int32_t IndexEnd) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2257 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field Start, offset: 0x0, size: 0x4, def value: None
  int32_t Start;

  /// @brief Field End, offset: 0x4, size: 0x4, def value: None
  int32_t End;

  /// @brief Field Count, offset: 0x8, size: 0x4, def value: None
  int32_t Count;

  /// @brief Field IndexStart, offset: 0xc, size: 0x4, def value: None
  int32_t IndexStart;

  /// @brief Field IndexEnd, offset: 0x10, size: 0x4, def value: None
  int32_t IndexEnd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer_TableRange, Start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer_TableRange, End) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer_TableRange, Count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer_TableRange, IndexStart) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer_TableRange, IndexEnd) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::CodePointIndexer_TableRange, 0x14>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
// Dependencies System.Object
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: Mono.Globalization.Unicode.CodePointIndexer
class CORDL_TYPE CodePointIndexer : public ::System::Object {
public:
  // Declarations
  using TableRange = ::Mono::Globalization::Unicode::CodePointIndexer_TableRange;

  /// @brief Field TotalCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_TotalCount, put = __cordl_internal_set_TotalCount)) int32_t TotalCount;

  /// @brief Field defaultCP, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultCP, put = __cordl_internal_set_defaultCP)) int32_t defaultCP;

  /// @brief Field defaultIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultIndex, put = __cordl_internal_set_defaultIndex)) int32_t defaultIndex;

  /// @brief Field ranges, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ranges,
                      put = __cordl_internal_set_ranges)) ::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer_TableRange, ::Array<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>*>
      ranges;

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> starts, ::ArrayW<int32_t, ::Array<int32_t>*> ends, int32_t defaultIndex,
                                                                           int32_t defaultCP);

  /// @brief Method ToIndex, addr 0x5901ac4, size 0x64, virtual false, abstract: false, final false
  inline int32_t ToIndex(int32_t cp);

  constexpr int32_t const& __cordl_internal_get_TotalCount() const;

  constexpr int32_t& __cordl_internal_get_TotalCount();

  constexpr int32_t const& __cordl_internal_get_defaultCP() const;

  constexpr int32_t& __cordl_internal_get_defaultCP();

  constexpr int32_t const& __cordl_internal_get_defaultIndex() const;

  constexpr int32_t& __cordl_internal_get_defaultIndex();

  constexpr ::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer_TableRange, ::Array<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>*> const& __cordl_internal_get_ranges() const;

  constexpr ::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer_TableRange, ::Array<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>*>& __cordl_internal_get_ranges();

  constexpr void __cordl_internal_set_TotalCount(int32_t value);

  constexpr void __cordl_internal_set_defaultCP(int32_t value);

  constexpr void __cordl_internal_set_defaultIndex(int32_t value);

  constexpr void __cordl_internal_set_ranges(::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer_TableRange, ::Array<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>*> value);

  /// @brief Method .ctor, addr 0x5901964, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> starts, ::ArrayW<int32_t, ::Array<int32_t>*> ends, int32_t defaultIndex, int32_t defaultCP);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodePointIndexer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodePointIndexer(CodePointIndexer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodePointIndexer(CodePointIndexer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2258 };

  /// @brief Field ranges, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer_TableRange, ::Array<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>*> ___ranges;

  /// @brief Field TotalCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___TotalCount;

  /// @brief Field defaultIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___defaultIndex;

  /// @brief Field defaultCP, offset: 0x20, size: 0x4, def value: None
  int32_t ___defaultCP;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___ranges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___TotalCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___defaultIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___defaultCP) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::CodePointIndexer, 0x28>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::CodePointIndexer);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::CodePointIndexer*, "Mono.Globalization.Unicode", "CodePointIndexer");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::CodePointIndexer_TableRange, "Mono.Globalization.Unicode", "CodePointIndexer/TableRange");
