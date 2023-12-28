#pragma once
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
// Type: System.Text.RegularExpressions::RegexNode
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8925)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8924))
// CS Name: ::System.Text.RegularExpressions::RegexNode*
class CORDL_TYPE RegexNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field NType, offset 0x10, size 0x4
  __declspec(property(get = __get_NType, put = __set_NType)) int32_t NType;

  /// @brief Field Children, offset 0x18, size 0x8
  __declspec(property(get = __get_Children, put = __set_Children))::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* Children;

  /// @brief Field Str, offset 0x20, size 0x8
  __declspec(property(get = __get_Str, put = __set_Str))::StringW Str;

  /// @brief Field Ch, offset 0x28, size 0x2
  __declspec(property(get = __get_Ch, put = __set_Ch)) char16_t Ch;

  /// @brief Field M, offset 0x2c, size 0x4
  __declspec(property(get = __get_M, put = __set_M)) int32_t M;

  /// @brief Field N, offset 0x30, size 0x4
  __declspec(property(get = __get_N, put = __set_N)) int32_t N;

  /// @brief Field Options, offset 0x34, size 0x4
  __declspec(property(get = __get_Options, put = __set_Options))::System::Text::RegularExpressions::RegexOptions Options;

  /// @brief Field Next, offset 0x38, size 0x8
  __declspec(property(get = __get_Next, put = __set_Next))::System::Text::RegularExpressions::RegexNode* Next;

  constexpr int32_t& __get_NType();

  constexpr int32_t const& __get_NType() const;

  constexpr void __set_NType(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>*& __get_Children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>*> const& __get_Children() const;

  constexpr void __set_Children(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* value);

  constexpr ::StringW& __get_Str();

  constexpr ::StringW const& __get_Str() const;

  constexpr void __set_Str(::StringW value);

  constexpr char16_t& __get_Ch();

  constexpr char16_t const& __get_Ch() const;

  constexpr void __set_Ch(char16_t value);

  constexpr int32_t& __get_M();

  constexpr int32_t const& __get_M() const;

  constexpr void __set_M(int32_t value);

  constexpr int32_t& __get_N();

  constexpr int32_t const& __get_N() const;

  constexpr void __set_N(int32_t value);

  constexpr ::System::Text::RegularExpressions::RegexOptions& __get_Options();

  constexpr ::System::Text::RegularExpressions::RegexOptions const& __get_Options() const;

  constexpr void __set_Options(::System::Text::RegularExpressions::RegexOptions value);

  constexpr ::System::Text::RegularExpressions::RegexNode*& __get_Next();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& __get_Next() const;

  constexpr void __set_Next(::System::Text::RegularExpressions::RegexNode* value);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method .ctor addr 0x29628d4 size 0x30 virtual false final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, char16_t ch);

  /// @brief Method .ctor addr 0x2962904 size 0x40 virtual false final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, char16_t ch);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, ::StringW str);

  /// @brief Method .ctor addr 0x2962944 size 0x40 virtual false final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, ::StringW str);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, int32_t m);

  /// @brief Method .ctor addr 0x2962984 size 0x40 virtual false final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, int32_t m);

  static inline ::System::Text::RegularExpressions::RegexNode* New_ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, int32_t m, int32_t n);

  /// @brief Method .ctor addr 0x29629c4 size 0x44 virtual false final false
  inline void _ctor(int32_t type, ::System::Text::RegularExpressions::RegexOptions options, int32_t m, int32_t n);

  /// @brief Method UseOptionR addr 0x2962a08 size 0xc virtual false final false
  inline bool UseOptionR();

  /// @brief Method ReverseLeft addr 0x2962a14 size 0x7c virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ReverseLeft();

  /// @brief Method MakeRep addr 0x2962a90 size 0x18 virtual false final false
  inline void MakeRep(int32_t type, int32_t min, int32_t max);

  /// @brief Method Reduce addr 0x2962aa8 size 0x68 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* Reduce();

  /// @brief Method StripEnation addr 0x2963504 size 0xbc virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* StripEnation(int32_t emptyType);

  /// @brief Method ReduceGroup addr 0x29633bc size 0x2c virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceGroup();

  /// @brief Method ReduceRep addr 0x2963230 size 0x18c virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceRep();

  /// @brief Method ReduceSet addr 0x29633e8 size 0x11c virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceSet();

  /// @brief Method ReduceAlternation addr 0x2962b10 size 0x3b8 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceAlternation();

  /// @brief Method ReduceConcatenation addr 0x2962ec8 size 0x368 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ReduceConcatenation();

  /// @brief Method MakeQuantifier addr 0x29635c0 size 0x11c virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* MakeQuantifier(bool lazy, int32_t min, int32_t max);

  /// @brief Method AddChild addr 0x29636dc size 0x114 virtual false final false
  inline void AddChild(::System::Text::RegularExpressions::RegexNode* newChild);

  /// @brief Method Child addr 0x295f448 size 0x58 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* Child(int32_t i);

  /// @brief Method ChildCount addr 0x295f3fc size 0x4c virtual false final false
  inline int32_t ChildCount();

  /// @brief Method Type addr 0x29637f0 size 0x8 virtual false final false
  inline int32_t Type();

  // Ctor Parameters [CppParam { name: "", ty: "RegexNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexNode(RegexNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexNode(RegexNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexNode();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexNode, 0x40>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexNode*, "System.Text.RegularExpressions", "RegexNode");
