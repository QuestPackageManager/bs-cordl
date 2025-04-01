#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ValueListBuilder_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegexWriter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class RegexCode;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Text::RegularExpressions {
class RegexTree;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexWriter;
}
// Write type traits
MARK_VAL_T(::System::Text::RegularExpressions::RegexWriter);
// Dependencies System.Collections.Generic.ValueListBuilder`1<T>
namespace System::Text::RegularExpressions {
// Is value type: true
// CS Name: System.Text.RegularExpressions.RegexWriter
struct CORDL_TYPE RegexWriter {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x4425068, size 0x54, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Emit, addr 0x4425c88, size 0xc8, virtual false, abstract: false, final false
  inline void Emit(int32_t op);

  /// @brief Method Emit, addr 0x44250bc, size 0x130, virtual false, abstract: false, final false
  inline void Emit(int32_t op, int32_t opd1);

  /// @brief Method Emit, addr 0x4425d50, size 0x190, virtual false, abstract: false, final false
  inline void Emit(int32_t op, int32_t opd1, int32_t opd2);

  /// @brief Method EmitFragment, addr 0x44251ec, size 0xa38, virtual false, abstract: false, final false
  inline void EmitFragment(int32_t nodetype, ::System::Text::RegularExpressions::RegexNode* node, int32_t curIndex);

  /// @brief Method MapCapnum, addr 0x4426028, size 0xb4, virtual false, abstract: false, final false
  inline int32_t MapCapnum(int32_t capnum);

  /// @brief Method PatchJump, addr 0x4425c24, size 0x64, virtual false, abstract: false, final false
  inline void PatchJump(int32_t offset, int32_t jumpDest);

  /// @brief Method RegexCodeFromRegexTree, addr 0x4424be0, size 0x488, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexCode* RegexCodeFromRegexTree(::System::Text::RegularExpressions::RegexTree* tree);

  /// @brief Method StringCode, addr 0x4425ee0, size 0x148, virtual false, abstract: false, final false
  inline int32_t StringCode(::StringW str);

  /// @brief Method Write, addr 0x4424afc, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::RegexCode* Write(::System::Text::RegularExpressions::RegexTree* tree);

  /// @brief Method .ctor, addr 0x44249b8, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Span_1<int32_t> emittedSpan, ::System::Span_1<int32_t> intStackSpan);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexWriter();

  // Ctor Parameters [CppParam { name: "_emitted", ty: "::System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_intStack", ty:
  // "::System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_stringHash", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*", modifiers: "", def_value: None }, CppParam { name: "_stringTable", ty: "::System::Collections::Generic::List_1<::StringW>*",
  // modifiers: "", def_value: None }, CppParam { name: "_caps", ty: "::System::Collections::Hashtable*", modifiers: "", def_value: None }, CppParam { name: "_trackCount", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr RegexWriter(::System::Collections::Generic::ValueListBuilder_1<int32_t> _emitted, ::System::Collections::Generic::ValueListBuilder_1<int32_t> _intStack,
                        ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _stringHash, ::System::Collections::Generic::List_1<::StringW>* _stringTable,
                        ::System::Collections::Hashtable* _caps, int32_t _trackCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9252 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field _emitted, offset: 0x0, size: 0x20, def value: None
  ::System::Collections::Generic::ValueListBuilder_1<int32_t> _emitted;

  /// @brief Field _intStack, offset: 0x20, size: 0x20, def value: None
  ::System::Collections::Generic::ValueListBuilder_1<int32_t> _intStack;

  /// @brief Field _stringHash, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _stringHash;

  /// @brief Field _stringTable, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* _stringTable;

  /// @brief Field _caps, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Hashtable* _caps;

  /// @brief Field _trackCount, offset: 0x58, size: 0x4, def value: None
  int32_t _trackCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::RegexWriter, _emitted) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexWriter, _intStack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexWriter, _stringHash) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexWriter, _stringTable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexWriter, _caps) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexWriter, _trackCount) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexWriter, 0x60>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexWriter, "System.Text.RegularExpressions", "RegexWriter");
