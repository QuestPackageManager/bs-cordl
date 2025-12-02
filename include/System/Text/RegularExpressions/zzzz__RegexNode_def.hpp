#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexNode)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexNode);
// Dependencies System.Object, System.Text.RegularExpressions.RegexOptions
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.RegexNode
class CORDL_TYPE RegexNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field Ch, offset 0x28, size 0x2
  __declspec(property(get = __cordl_internal_get_Ch, put = __cordl_internal_set_Ch)) char16_t Ch;

  /// @brief Field Children, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Children, put = __cordl_internal_set_Children)) ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* Children;

  /// @brief Field M, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_M, put = __cordl_internal_set_M)) int32_t M;

  /// @brief Field N, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_N, put = __cordl_internal_set_N)) int32_t N;

  /// @brief Field NType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_NType, put = __cordl_internal_set_NType)) int32_t NType;

  /// @brief Field Next, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next)) ::System::Text::RegularExpressions::RegexNode* Next;

  /// @brief Field Options, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_Options, put = __cordl_internal_set_Options)) ::System::Text::RegularExpressions::RegexOptions Options;

  /// @brief Field Str, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Str, put = __cordl_internal_set_Str)) ::StringW Str;

  /// @brief Method AddChild, addr 0x61711e8, size 0x11c, virtual false, abstract: false, final false
  inline void AddChild(::System::Text::RegularExpressions::RegexNode* newChild);

  /// @brief Method Child, addr 0x616ceac, size 0x64, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* Child(int32_t i);

  /// @brief Method ChildCount, addr 0x616ce58, size 0x54, virtual false, abstract: false, final false
  inline int32_t ChildCount();

  /// @brief Method MakeQuantifier, addr 0x61710e4, size 0x104, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* MakeQuantifier(bool lazy, int32_t min, int32_t max);

  /// @brief Method MakeRep, addr 0x6170548, size 0x18, virtual false, abstract: false, final false
  inline void MakeRep(int32_t type, int32_t min, int32_t max);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, char16_t ch);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, int32_t m);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, int32_t m, int32_t n);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, ::StringW str);

  /// @brief Method Reduce, addr 0x6170560, size 0x60, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* Reduce();

  /// @brief Method ReduceAlternation, addr 0x61705c0, size 0x3e8, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceAlternation();

  /// @brief Method ReduceConcatenation, addr 0x61709a8, size 0x3a0, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceConcatenation();

  /// @brief Method ReduceGroup, addr 0x6170ed4, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceGroup();

  /// @brief Method ReduceRep, addr 0x6170d48, size 0x18c, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceRep();

  /// @brief Method ReduceSet, addr 0x6170f00, size 0x120, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceSet();

  /// @brief Method ReverseLeft, addr 0x61704c0, size 0x88, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ReverseLeft();

  /// @brief Method StripEnation, addr 0x6171020, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* StripEnation(int32_t emptyType);

  /// @brief Method Type, addr 0x6171304, size 0x8, virtual false, abstract: false, final false
  inline int32_t Type();

  /// @brief Method UseOptionR, addr 0x61704b4, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionR();

  constexpr char16_t const& __cordl_internal_get_Ch() const;

  constexpr char16_t& __cordl_internal_get_Ch();

  constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* const& __cordl_internal_get_Children() const;

  constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>*& __cordl_internal_get_Children();

  constexpr int32_t const& __cordl_internal_get_M() const;

  constexpr int32_t& __cordl_internal_get_M();

  constexpr int32_t const& __cordl_internal_get_N() const;

  constexpr int32_t& __cordl_internal_get_N();

  constexpr int32_t const& __cordl_internal_get_NType() const;

  constexpr int32_t& __cordl_internal_get_NType();

  constexpr ::System::Text::RegularExpressions::RegexNode* const& __cordl_internal_get_Next() const;

  constexpr ::System::Text::RegularExpressions::RegexNode*& __cordl_internal_get_Next();

  constexpr ::System::Text::RegularExpressions::RegexOptions const& __cordl_internal_get_Options() const;

  constexpr ::System::Text::RegularExpressions::RegexOptions& __cordl_internal_get_Options();

  constexpr ::StringW const& __cordl_internal_get_Str() const;

  constexpr ::StringW& __cordl_internal_get_Str();

  constexpr void __cordl_internal_set_Ch(char16_t value);

  constexpr void __cordl_internal_set_Children(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* value);

  constexpr void __cordl_internal_set_M(int32_t value);

  constexpr void __cordl_internal_set_N(int32_t value);

  constexpr void __cordl_internal_set_NType(int32_t value);

  constexpr void __cordl_internal_set_Next(::System::Text::RegularExpressions::RegexNode* value);

  constexpr void __cordl_internal_set_Options(::System::Text::RegularExpressions::RegexOptions value);

  constexpr void __cordl_internal_set_Str(::StringW value);

  /// @brief Method .ctor, addr 0x6170468, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method .ctor, addr 0x6170474, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, char16_t ch);

  /// @brief Method .ctor, addr 0x6170494, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, int32_t m);

  /// @brief Method .ctor, addr 0x61704a4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, int32_t m, int32_t n);

  /// @brief Method .ctor, addr 0x6170484, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, ::StringW str);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexNode(RegexNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexNode(RegexNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11089 };

  /// @brief Field NType, offset: 0x10, size: 0x4, def value: None
  int32_t ___NType;

  /// @brief Field Children, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* ___Children;

  /// @brief Field Str, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Str;

  /// @brief Field Ch, offset: 0x28, size: 0x2, def value: None
  char16_t ___Ch;

  /// @brief Field M, offset: 0x2c, size: 0x4, def value: None
  int32_t ___M;

  /// @brief Field N, offset: 0x30, size: 0x4, def value: None
  int32_t ___N;

  /// @brief Field Options, offset: 0x34, size: 0x4, def value: None
  ::System::Text::RegularExpressions::RegexOptions ___Options;

  /// @brief Field Next, offset: 0x38, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexNode* ___Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::RegexNode, ___NType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexNode, ___Children) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexNode, ___Str) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexNode, ___Ch) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexNode, ___M) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexNode, ___N) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexNode, ___Options) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexNode, ___Next) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexNode, 0x40>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexNode*, "System.Text.RegularExpressions", "RegexNode");
