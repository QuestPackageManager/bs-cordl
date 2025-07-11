#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexFCD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ValueListBuilder_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegexFCD)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text::RegularExpressions {
class RegexFC;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
namespace System::Text::RegularExpressions {
class RegexTree;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexFCD;
}
// Write type traits
MARK_VAL_T(::System::Text::RegularExpressions::RegexFCD);
// Dependencies System.Collections.Generic.ValueListBuilder`1<T>
namespace System::Text::RegularExpressions {
// Is value type: true
// CS Name: System.Text.RegularExpressions.RegexFCD
struct CORDL_TYPE RegexFCD {
public:
  // Declarations
  /// @brief Method AnchorFromType, addr 0x441e638, size 0x70, virtual false, abstract: false, final false
  static inline int32_t AnchorFromType(int32_t type);

  /// @brief Method Anchors, addr 0x441e508, size 0x130, virtual false, abstract: false, final false
  static inline int32_t Anchors(::System::Text::RegularExpressions::RegexTree* tree);

  /// @brief Method CalculateFC, addr 0x441e9d0, size 0x3fc, virtual false, abstract: false, final false
  inline void CalculateFC(int32_t NodeType, ::System::Text::RegularExpressions::RegexNode* node, int32_t CurIndex);

  /// @brief Method Dispose, addr 0x441e19c, size 0x48, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method FCIsEmpty, addr 0x441e8a0, size 0x50, virtual false, abstract: false, final false
  inline bool FCIsEmpty();

  /// @brief Method FirstChars, addr 0x441deb0, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> FirstChars(::System::Text::RegularExpressions::RegexTree* t);

  /// @brief Method IntIsEmpty, addr 0x441e75c, size 0x44, virtual false, abstract: false, final false
  inline bool IntIsEmpty();

  /// @brief Method PopFC, addr 0x441e8f0, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexFC* PopFC();

  /// @brief Method PopInt, addr 0x441e7a0, size 0x5c, virtual false, abstract: false, final false
  inline int32_t PopInt();

  /// @brief Method Prefix, addr 0x441e22c, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::RegexPrefix Prefix(::System::Text::RegularExpressions::RegexTree* tree);

  /// @brief Method PushFC, addr 0x441e7fc, size 0xa4, virtual false, abstract: false, final false
  inline void PushFC(::System::Text::RegularExpressions::RegexFC* fc);

  /// @brief Method PushInt, addr 0x441e6a8, size 0xb4, virtual false, abstract: false, final false
  inline void PushInt(int32_t i);

  /// @brief Method RegexFCFromRegexTree, addr 0x441e004, size 0x198, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexFC* RegexFCFromRegexTree(::System::Text::RegularExpressions::RegexTree* tree);

  /// @brief Method SkipChild, addr 0x441edcc, size 0xc, virtual false, abstract: false, final false
  inline void SkipChild();

  /// @brief Method TopFC, addr 0x441e96c, size 0x64, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexFC* TopFC();

  /// @brief Method .ctor, addr 0x441dddc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Span_1<int32_t> intStack);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexFCD();

  // Ctor Parameters [CppParam { name: "_fcStack", ty: "::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC*>*", modifiers: "", def_value: None }, CppParam { name:
  // "_intStack", ty: "::System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_skipAllChildren", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "_skipchild", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_failed", ty: "bool", modifiers: "", def_value: None }]
  constexpr RegexFCD(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC*>* _fcStack, ::System::Collections::Generic::ValueListBuilder_1<int32_t> _intStack,
                     bool _skipAllChildren, bool _skipchild, bool _failed) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9240 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field _fcStack, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC*>* _fcStack;

  /// @brief Field _intStack, offset: 0x8, size: 0x20, def value: None
  ::System::Collections::Generic::ValueListBuilder_1<int32_t> _intStack;

  /// @brief Field _skipAllChildren, offset: 0x28, size: 0x1, def value: None
  bool _skipAllChildren;

  /// @brief Field _skipchild, offset: 0x29, size: 0x1, def value: None
  bool _skipchild;

  /// @brief Field _failed, offset: 0x2a, size: 0x1, def value: None
  bool _failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::RegexFCD, _fcStack) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexFCD, _intStack) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexFCD, _skipAllChildren) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexFCD, _skipchild) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexFCD, _failed) == 0x2a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexFCD, 0x30>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexFCD, "System.Text.RegularExpressions", "RegexFCD");
