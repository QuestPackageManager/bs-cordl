#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexRunner_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexInterpreter)
namespace System::Text::RegularExpressions {
class RegexCode;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexInterpreter;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexInterpreter);
// Type: System.Text.RegularExpressions::RegexInterpreter
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 154, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8929))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8922))
// CS Name: ::System.Text.RegularExpressions::RegexInterpreter*
class CORDL_TYPE RegexInterpreter : public ::System::Text::RegularExpressions::RegexRunner {
public:
  // Declarations
  /// @brief Field _code, offset 0x80, size 0x8
  __declspec(property(get = __get__code, put = __set__code))::System::Text::RegularExpressions::RegexCode* _code;

  /// @brief Field _culture, offset 0x88, size 0x8
  __declspec(property(get = __get__culture, put = __set__culture))::System::Globalization::CultureInfo* _culture;

  /// @brief Field _operator, offset 0x90, size 0x4
  __declspec(property(get = __get__operator, put = __set__operator)) int32_t _operator;

  /// @brief Field _codepos, offset 0x94, size 0x4
  __declspec(property(get = __get__codepos, put = __set__codepos)) int32_t _codepos;

  /// @brief Field _rightToLeft, offset 0x98, size 0x1
  __declspec(property(get = __get__rightToLeft, put = __set__rightToLeft)) bool _rightToLeft;

  /// @brief Field _caseInsensitive, offset 0x99, size 0x1
  __declspec(property(get = __get__caseInsensitive, put = __set__caseInsensitive)) bool _caseInsensitive;

  constexpr ::System::Text::RegularExpressions::RegexCode*& __get__code();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexCode*> const& __get__code() const;

  constexpr void __set__code(::System::Text::RegularExpressions::RegexCode* value);

  constexpr ::System::Globalization::CultureInfo*& __get__culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __get__culture() const;

  constexpr void __set__culture(::System::Globalization::CultureInfo* value);

  constexpr int32_t& __get__operator();

  constexpr int32_t const& __get__operator() const;

  constexpr void __set__operator(int32_t value);

  constexpr int32_t& __get__codepos();

  constexpr int32_t const& __get__codepos() const;

  constexpr void __set__codepos(int32_t value);

  constexpr bool& __get__rightToLeft();

  constexpr bool const& __get__rightToLeft() const;

  constexpr void __set__rightToLeft(bool value);

  constexpr bool& __get__caseInsensitive();

  constexpr bool const& __get__caseInsensitive() const;

  constexpr void __set__caseInsensitive(bool value);

  static inline ::System::Text::RegularExpressions::RegexInterpreter* New_ctor(::System::Text::RegularExpressions::RegexCode* code, ::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor addr 0x296002c size 0x2c virtual false final false
  inline void _ctor(::System::Text::RegularExpressions::RegexCode* code, ::System::Globalization::CultureInfo* culture);

  /// @brief Method InitTrackCount addr 0x2960060 size 0x20 virtual true final false
  inline void InitTrackCount();

  /// @brief Method Advance addr 0x2960080 size 0x64 virtual false final false
  inline void Advance(int32_t i);

  /// @brief Method Goto addr 0x2960104 size 0x78 virtual false final false
  inline void Goto(int32_t newpos);

  /// @brief Method Textto addr 0x29601c4 size 0x8 virtual false final false
  inline void Textto(int32_t newpos);

  /// @brief Method Trackto addr 0x29601cc size 0x24 virtual false final false
  inline void Trackto(int32_t newpos);

  /// @brief Method Textstart addr 0x29601f0 size 0x8 virtual false final false
  inline int32_t Textstart();

  /// @brief Method Textpos addr 0x29601f8 size 0x8 virtual false final false
  inline int32_t Textpos();

  /// @brief Method Trackpos addr 0x2960200 size 0x24 virtual false final false
  inline int32_t Trackpos();

  /// @brief Method TrackPush addr 0x2960224 size 0x40 virtual false final false
  inline void TrackPush();

  /// @brief Method TrackPush addr 0x2960264 size 0x5c virtual false final false
  inline void TrackPush(int32_t I1);

  /// @brief Method TrackPush addr 0x29602c0 size 0x78 virtual false final false
  inline void TrackPush(int32_t I1, int32_t I2);

  /// @brief Method TrackPush addr 0x2960338 size 0x94 virtual false final false
  inline void TrackPush(int32_t I1, int32_t I2, int32_t I3);

  /// @brief Method TrackPush2 addr 0x29603cc size 0x60 virtual false final false
  inline void TrackPush2(int32_t I1);

  /// @brief Method TrackPush2 addr 0x296042c size 0x7c virtual false final false
  inline void TrackPush2(int32_t I1, int32_t I2);

  /// @brief Method Backtrack addr 0x29604a8 size 0xf8 virtual false final false
  inline void Backtrack();

  /// @brief Method SetOperator addr 0x29600e4 size 0x20 virtual false final false
  inline void SetOperator(int32_t op);

  /// @brief Method TrackPop addr 0x29605a0 size 0x10 virtual false final false
  inline void TrackPop();

  /// @brief Method TrackPop addr 0x29605b0 size 0x10 virtual false final false
  inline void TrackPop(int32_t framesize);

  /// @brief Method TrackPeek addr 0x29605c0 size 0x38 virtual false final false
  inline int32_t TrackPeek();

  /// @brief Method TrackPeek addr 0x29605f8 size 0x3c virtual false final false
  inline int32_t TrackPeek(int32_t i);

  /// @brief Method StackPush addr 0x2960634 size 0x3c virtual false final false
  inline void StackPush(int32_t I1);

  /// @brief Method StackPush addr 0x2960670 size 0x58 virtual false final false
  inline void StackPush(int32_t I1, int32_t I2);

  /// @brief Method StackPop addr 0x29606c8 size 0x10 virtual false final false
  inline void StackPop();

  /// @brief Method StackPop addr 0x29606d8 size 0x10 virtual false final false
  inline void StackPop(int32_t framesize);

  /// @brief Method StackPeek addr 0x29606e8 size 0x38 virtual false final false
  inline int32_t StackPeek();

  /// @brief Method StackPeek addr 0x2960720 size 0x3c virtual false final false
  inline int32_t StackPeek(int32_t i);

  /// @brief Method Operator addr 0x296075c size 0x8 virtual false final false
  inline int32_t Operator();

  /// @brief Method Operand addr 0x2960764 size 0x44 virtual false final false
  inline int32_t Operand(int32_t i);

  /// @brief Method Leftchars addr 0x29607a8 size 0x10 virtual false final false
  inline int32_t Leftchars();

  /// @brief Method Rightchars addr 0x29607b8 size 0x10 virtual false final false
  inline int32_t Rightchars();

  /// @brief Method Bump addr 0x29607c8 size 0x14 virtual false final false
  inline int32_t Bump();

  /// @brief Method Forwardchars addr 0x29607dc size 0x2c virtual false final false
  inline int32_t Forwardchars();

  /// @brief Method Forwardcharnext addr 0x2960808 size 0x90 virtual false final false
  inline char16_t Forwardcharnext();

  /// @brief Method Stringmatch addr 0x2960898 size 0x16c virtual false final false
  inline bool Stringmatch(::StringW str);

  /// @brief Method Refmatch addr 0x2960a04 size 0x19c virtual false final false
  inline bool Refmatch(int32_t index, int32_t len);

  /// @brief Method Backwardnext addr 0x2960ba0 size 0x30 virtual false final false
  inline void Backwardnext();

  /// @brief Method CharAt addr 0x2960bd0 size 0x1c virtual false final false
  inline char16_t CharAt(int32_t j);

  /// @brief Method FindFirstChar addr 0x2960bec size 0x360 virtual true final false
  inline bool FindFirstChar();

  /// @brief Method Go addr 0x2960f4c size 0x11dc virtual true final false
  inline void Go();

  // Ctor Parameters [CppParam { name: "", ty: "RegexInterpreter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexInterpreter(RegexInterpreter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexInterpreter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexInterpreter(RegexInterpreter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexInterpreter();

public:
  /// @brief Field _code, offset: 0x80, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexCode* ____code;

  /// @brief Field _culture, offset: 0x88, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  /// @brief Field _operator, offset: 0x90, size: 0x4, def value: None
  int32_t ____operator;

  /// @brief Field _codepos, offset: 0x94, size: 0x4, def value: None
  int32_t ____codepos;

  /// @brief Field _rightToLeft, offset: 0x98, size: 0x1, def value: None
  bool ____rightToLeft;

  /// @brief Field _caseInsensitive, offset: 0x99, size: 0x1, def value: None
  bool ____caseInsensitive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexInterpreter, 0xa0>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexInterpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexInterpreter*, "System.Text.RegularExpressions", "RegexInterpreter");
