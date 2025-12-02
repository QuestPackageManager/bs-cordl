#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexInterpreter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexRunner_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexInterpreter)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text::RegularExpressions {
class RegexCode;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexInterpreter;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexInterpreter);
// Dependencies System.Text.RegularExpressions.RegexRunner
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.RegexInterpreter
class CORDL_TYPE RegexInterpreter : public ::System::Text::RegularExpressions::RegexRunner {
public:
  // Declarations
  /// @brief Field _caseInsensitive, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get__caseInsensitive, put = __cordl_internal_set__caseInsensitive)) bool _caseInsensitive;

  /// @brief Field _code, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__code, put = __cordl_internal_set__code)) ::System::Text::RegularExpressions::RegexCode* _code;

  /// @brief Field _codepos, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__codepos, put = __cordl_internal_set__codepos)) int32_t _codepos;

  /// @brief Field _culture, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture)) ::System::Globalization::CultureInfo* _culture;

  /// @brief Field _operator, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__operator, put = __cordl_internal_set__operator)) int32_t _operator;

  /// @brief Field _rightToLeft, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__rightToLeft, put = __cordl_internal_set__rightToLeft)) bool _rightToLeft;

  /// @brief Method Advance, addr 0x616db90, size 0x64, virtual false, abstract: false, final false
  inline void Advance(int32_t i);

  /// @brief Method Backtrack, addr 0x616dfb0, size 0xe8, virtual false, abstract: false, final false
  inline void Backtrack();

  /// @brief Method Backwardnext, addr 0x616e6c0, size 0x28, virtual false, abstract: false, final false
  inline void Backwardnext();

  /// @brief Method Bump, addr 0x616e2c0, size 0x14, virtual false, abstract: false, final false
  inline int32_t Bump();

  /// @brief Method CharAt, addr 0x616e6e8, size 0x38, virtual false, abstract: false, final false
  inline char16_t CharAt(int32_t j);

  /// @brief Method FindFirstChar, addr 0x616e720, size 0x3b8, virtual true, abstract: false, final false
  inline bool FindFirstChar();

  /// @brief Method Forwardcharnext, addr 0x616e300, size 0x94, virtual false, abstract: false, final false
  inline char16_t Forwardcharnext();

  /// @brief Method Forwardchars, addr 0x616e2d4, size 0x2c, virtual false, abstract: false, final false
  inline int32_t Forwardchars();

  /// @brief Method Go, addr 0x616ead8, size 0x11a4, virtual true, abstract: false, final false
  inline void Go();

  /// @brief Method Goto, addr 0x616dc14, size 0x78, virtual false, abstract: false, final false
  inline void Goto(int32_t newpos);

  /// @brief Method InitTrackCount, addr 0x616db74, size 0x1c, virtual true, abstract: false, final false
  inline void InitTrackCount();

  /// @brief Method Leftchars, addr 0x616e2a0, size 0x10, virtual false, abstract: false, final false
  inline int32_t Leftchars();

  static inline ::System::Text::RegularExpressions::RegexInterpreter* New_ctor(::System::Text::RegularExpressions::RegexCode* code, ::System::Globalization::CultureInfo* culture);

  /// @brief Method Operand, addr 0x616e25c, size 0x44, virtual false, abstract: false, final false
  inline int32_t Operand(int32_t i);

  /// @brief Method Operator, addr 0x616e254, size 0x8, virtual false, abstract: false, final false
  inline int32_t Operator();

  /// @brief Method Refmatch, addr 0x616e51c, size 0x1a4, virtual false, abstract: false, final false
  inline bool Refmatch(int32_t index, int32_t len);

  /// @brief Method Rightchars, addr 0x616e2b0, size 0x10, virtual false, abstract: false, final false
  inline int32_t Rightchars();

  /// @brief Method SetOperator, addr 0x616dbf4, size 0x20, virtual false, abstract: false, final false
  inline void SetOperator(int32_t op);

  /// @brief Method StackPeek, addr 0x616e1e0, size 0x38, virtual false, abstract: false, final false
  inline int32_t StackPeek();

  /// @brief Method StackPeek, addr 0x616e218, size 0x3c, virtual false, abstract: false, final false
  inline int32_t StackPeek(int32_t i);

  /// @brief Method StackPop, addr 0x616e1c0, size 0x10, virtual false, abstract: false, final false
  inline void StackPop();

  /// @brief Method StackPop, addr 0x616e1d0, size 0x10, virtual false, abstract: false, final false
  inline void StackPop(int32_t framesize);

  /// @brief Method StackPush, addr 0x616e12c, size 0x3c, virtual false, abstract: false, final false
  inline void StackPush(int32_t I1);

  /// @brief Method StackPush, addr 0x616e168, size 0x58, virtual false, abstract: false, final false
  inline void StackPush(int32_t I1, int32_t I2);

  /// @brief Method Stringmatch, addr 0x616e394, size 0x188, virtual false, abstract: false, final false
  inline bool Stringmatch(::StringW str);

  /// @brief Method Textpos, addr 0x616dd04, size 0x8, virtual false, abstract: false, final false
  inline int32_t Textpos();

  /// @brief Method Textstart, addr 0x616dcfc, size 0x8, virtual false, abstract: false, final false
  inline int32_t Textstart();

  /// @brief Method Textto, addr 0x616dcd4, size 0x8, virtual false, abstract: false, final false
  inline void Textto(int32_t newpos);

  /// @brief Method TrackPeek, addr 0x616e0b8, size 0x38, virtual false, abstract: false, final false
  inline int32_t TrackPeek();

  /// @brief Method TrackPeek, addr 0x616e0f0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t TrackPeek(int32_t i);

  /// @brief Method TrackPop, addr 0x616e098, size 0x10, virtual false, abstract: false, final false
  inline void TrackPop();

  /// @brief Method TrackPop, addr 0x616e0a8, size 0x10, virtual false, abstract: false, final false
  inline void TrackPop(int32_t framesize);

  /// @brief Method TrackPush, addr 0x616dd2c, size 0x40, virtual false, abstract: false, final false
  inline void TrackPush();

  /// @brief Method TrackPush, addr 0x616dd6c, size 0x5c, virtual false, abstract: false, final false
  inline void TrackPush(int32_t I1);

  /// @brief Method TrackPush, addr 0x616ddc8, size 0x78, virtual false, abstract: false, final false
  inline void TrackPush(int32_t I1, int32_t I2);

  /// @brief Method TrackPush, addr 0x616de40, size 0x94, virtual false, abstract: false, final false
  inline void TrackPush(int32_t I1, int32_t I2, int32_t I3);

  /// @brief Method TrackPush2, addr 0x616ded4, size 0x60, virtual false, abstract: false, final false
  inline void TrackPush2(int32_t I1);

  /// @brief Method TrackPush2, addr 0x616df34, size 0x7c, virtual false, abstract: false, final false
  inline void TrackPush2(int32_t I1, int32_t I2);

  /// @brief Method Trackpos, addr 0x616dd0c, size 0x20, virtual false, abstract: false, final false
  inline int32_t Trackpos();

  /// @brief Method Trackto, addr 0x616dcdc, size 0x20, virtual false, abstract: false, final false
  inline void Trackto(int32_t newpos);

  constexpr bool const& __cordl_internal_get__caseInsensitive() const;

  constexpr bool& __cordl_internal_get__caseInsensitive();

  constexpr ::System::Text::RegularExpressions::RegexCode* const& __cordl_internal_get__code() const;

  constexpr ::System::Text::RegularExpressions::RegexCode*& __cordl_internal_get__code();

  constexpr int32_t const& __cordl_internal_get__codepos() const;

  constexpr int32_t& __cordl_internal_get__codepos();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr int32_t const& __cordl_internal_get__operator() const;

  constexpr int32_t& __cordl_internal_get__operator();

  constexpr bool const& __cordl_internal_get__rightToLeft() const;

  constexpr bool& __cordl_internal_get__rightToLeft();

  constexpr void __cordl_internal_set__caseInsensitive(bool value);

  constexpr void __cordl_internal_set__code(::System::Text::RegularExpressions::RegexCode* value);

  constexpr void __cordl_internal_set__codepos(int32_t value);

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__operator(int32_t value);

  constexpr void __cordl_internal_set__rightToLeft(bool value);

  /// @brief Method .ctor, addr 0x616db68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::RegexCode* code, ::System::Globalization::CultureInfo* culture);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexInterpreter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexInterpreter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexInterpreter(RegexInterpreter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexInterpreter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexInterpreter(RegexInterpreter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11087 };

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
static_assert(offsetof(::System::Text::RegularExpressions::RegexInterpreter, ____code) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexInterpreter, ____culture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexInterpreter, ____operator) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexInterpreter, ____codepos) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexInterpreter, ____rightToLeft) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexInterpreter, ____caseInsensitive) == 0x99, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexInterpreter, 0xa0>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexInterpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexInterpreter*, "System.Text.RegularExpressions", "RegexInterpreter");
