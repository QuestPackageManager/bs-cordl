#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CodePointIndexer)
namespace Mono::Globalization::Unicode {
struct __CodePointIndexer__TableRange;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
namespace Mono::Globalization::Unicode {
struct __CodePointIndexer__TableRange;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::CodePointIndexer);
MARK_VAL_T(::Mono::Globalization::Unicode::__CodePointIndexer__TableRange);
// Type: ::TableRange
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2257))
// CS Name: ::CodePointIndexer::TableRange
struct CORDL_TYPE __CodePointIndexer__TableRange {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x24154a0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t start, int32_t end, int32_t indexStart);

  // Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexEnd", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr __CodePointIndexer__TableRange(int32_t Start, int32_t End, int32_t Count, int32_t IndexStart, int32_t IndexEnd) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CodePointIndexer__TableRange();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, 0x14>, "Size mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, Start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, End) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, Count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, IndexStart) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, IndexEnd) == 0x10, "Offset mismatch!");

} // namespace Mono::Globalization::Unicode
// Type: Mono.Globalization.Unicode::CodePointIndexer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2258))
// CS Name: ::Mono.Globalization.Unicode::CodePointIndexer*
class CORDL_TYPE CodePointIndexer : public ::System::Object {
public:
  // Declarations
  using TableRange = ::Mono::Globalization::Unicode::__CodePointIndexer__TableRange;

  /// @brief Field ranges, offset 0x10, size 0x8
  __declspec(property(get = __get_ranges,
                      put = __set_ranges))::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, ::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*> ranges;

  /// @brief Field TotalCount, offset 0x18, size 0x4
  __declspec(property(get = __get_TotalCount, put = __set_TotalCount)) int32_t TotalCount;

  /// @brief Field defaultIndex, offset 0x1c, size 0x4
  __declspec(property(get = __get_defaultIndex, put = __set_defaultIndex)) int32_t defaultIndex;

  /// @brief Field defaultCP, offset 0x20, size 0x4
  __declspec(property(get = __get_defaultCP, put = __set_defaultCP)) int32_t defaultCP;

  constexpr ::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, ::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*>& __get_ranges();

  constexpr ::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, ::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*> const& __get_ranges() const;

  constexpr void __set_ranges(::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, ::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*> value);

  constexpr int32_t& __get_TotalCount();

  constexpr int32_t const& __get_TotalCount() const;

  constexpr void __set_TotalCount(int32_t value);

  constexpr int32_t& __get_defaultIndex();

  constexpr int32_t const& __get_defaultIndex() const;

  constexpr void __set_defaultIndex(int32_t value);

  constexpr int32_t& __get_defaultCP();

  constexpr int32_t const& __get_defaultCP() const;

  constexpr void __set_defaultCP(int32_t value);

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> starts, ::ArrayW<int32_t, ::Array<int32_t>*> ends, int32_t defaultIndex,
                                                                           int32_t defaultCP);

  /// @brief Method .ctor, addr 0x241534c, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> starts, ::ArrayW<int32_t, ::Array<int32_t>*> ends, int32_t defaultIndex, int32_t defaultCP);

  /// @brief Method ToIndex, addr 0x24154b8, size 0x84, virtual false, abstract: false, final false
  inline int32_t ToIndex(int32_t cp);

  // Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodePointIndexer(CodePointIndexer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodePointIndexer(CodePointIndexer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodePointIndexer();

public:
  /// @brief Field ranges, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, ::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*> ___ranges;

  /// @brief Field TotalCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___TotalCount;

  /// @brief Field defaultIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___defaultIndex;

  /// @brief Field defaultCP, offset: 0x20, size: 0x4, def value: None
  int32_t ___defaultCP;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::CodePointIndexer, 0x28>, "Size mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___ranges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___TotalCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___defaultIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::CodePointIndexer, ___defaultCP) == 0x20, "Offset mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::CodePointIndexer);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::CodePointIndexer*, "Mono.Globalization.Unicode", "CodePointIndexer");
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, "Mono.Globalization.Unicode", "CodePointIndexer/TableRange");
