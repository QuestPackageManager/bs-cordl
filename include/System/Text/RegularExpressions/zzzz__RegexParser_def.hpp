#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexParser)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text::RegularExpressions {
class RegexCharClass;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class RegexReplacement;
}
namespace System::Text::RegularExpressions {
class RegexTree;
}
namespace System {
class ArgumentException;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexParser);
// Dependencies System.Object, System.Text.RegularExpressions.RegexOptions
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.RegexParser
class CORDL_TYPE RegexParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _alternation, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__alternation, put = __cordl_internal_set__alternation)) ::System::Text::RegularExpressions::RegexNode* _alternation;

  /// @brief Field _autocap, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__autocap, put = __cordl_internal_set__autocap)) int32_t _autocap;

  /// @brief Field _capcount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__capcount, put = __cordl_internal_set__capcount)) int32_t _capcount;

  /// @brief Field _capnamelist, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__capnamelist, put = __cordl_internal_set__capnamelist)) ::System::Collections::Generic::List_1<::StringW>* _capnamelist;

  /// @brief Field _capnames, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__capnames, put = __cordl_internal_set__capnames)) ::System::Collections::Hashtable* _capnames;

  /// @brief Field _capnumlist, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__capnumlist, put = __cordl_internal_set__capnumlist)) ::ArrayW<int32_t, ::Array<int32_t>*> _capnumlist;

  /// @brief Field _caps, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__caps, put = __cordl_internal_set__caps)) ::System::Collections::Hashtable* _caps;

  /// @brief Field _capsize, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__capsize, put = __cordl_internal_set__capsize)) int32_t _capsize;

  /// @brief Field _captop, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__captop, put = __cordl_internal_set__captop)) int32_t _captop;

  /// @brief Field _concatenation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__concatenation, put = __cordl_internal_set__concatenation)) ::System::Text::RegularExpressions::RegexNode* _concatenation;

  /// @brief Field _culture, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture)) ::System::Globalization::CultureInfo* _culture;

  /// @brief Field _currentPos, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__currentPos, put = __cordl_internal_set__currentPos)) int32_t _currentPos;

  /// @brief Field _group, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__group, put = __cordl_internal_set__group)) ::System::Text::RegularExpressions::RegexNode* _group;

  /// @brief Field _ignoreNextParen, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreNextParen, put = __cordl_internal_set__ignoreNextParen)) bool _ignoreNextParen;

  /// @brief Field _options, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__options, put = __cordl_internal_set__options)) ::System::Text::RegularExpressions::RegexOptions _options;

  /// @brief Field _optionsStack, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__optionsStack,
                      put = __cordl_internal_set__optionsStack)) ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* _optionsStack;

  /// @brief Field _pattern, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pattern, put = __cordl_internal_set__pattern)) ::StringW _pattern;

  /// @brief Field _stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack)) ::System::Text::RegularExpressions::RegexNode* _stack;

  /// @brief Field _unit, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__unit, put = __cordl_internal_set__unit)) ::System::Text::RegularExpressions::RegexNode* _unit;

  /// @brief Field s_category, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_category, put = setStaticF_s_category)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s_category;

  /// @brief Method AddAlternate, addr 0x4425c5c, size 0xc4, virtual false, abstract: false, final false
  inline void AddAlternate();

  /// @brief Method AddConcatenate, addr 0x44266fc, size 0x28, virtual false, abstract: false, final false
  inline void AddConcatenate();

  /// @brief Method AddConcatenate, addr 0x442681c, size 0x44, virtual false, abstract: false, final false
  inline void AddConcatenate(bool lazy, int32_t min, int32_t max);

  /// @brief Method AddConcatenate, addr 0x44248fc, size 0x1e0, virtual false, abstract: false, final false
  inline void AddConcatenate(int32_t pos, int32_t cch, bool isReplacement);

  /// @brief Method AddGroup, addr 0x4425dc8, size 0x140, virtual false, abstract: false, final false
  inline void AddGroup();

  /// @brief Method AddUnitNode, addr 0x44285f4, size 0x8, virtual false, abstract: false, final false
  inline void AddUnitNode(::System::Text::RegularExpressions::RegexNode* node);

  /// @brief Method AddUnitNotone, addr 0x442663c, size 0xb0, virtual false, abstract: false, final false
  inline void AddUnitNotone(char16_t ch);

  /// @brief Method AddUnitOne, addr 0x4424af8, size 0xb0, virtual false, abstract: false, final false
  inline void AddUnitOne(char16_t ch);

  /// @brief Method AddUnitSet, addr 0x44251c0, size 0x78, virtual false, abstract: false, final false
  inline void AddUnitSet(::StringW cc);

  /// @brief Method AddUnitType, addr 0x44265c0, size 0x70, virtual false, abstract: false, final false
  inline void AddUnitType(int32_t type);

  /// @brief Method AssignNameSlots, addr 0x4427f90, size 0x65c, virtual false, abstract: false, final false
  inline void AssignNameSlots();

  /// @brief Method CaptureSlotFromName, addr 0x442711c, size 0x8c, virtual false, abstract: false, final false
  inline int32_t CaptureSlotFromName(::StringW capname);

  /// @brief Method CharAt, addr 0x4424adc, size 0x1c, virtual false, abstract: false, final false
  inline char16_t CharAt(int32_t i);

  /// @brief Method CharsRight, addr 0x442455c, size 0x24, virtual false, abstract: false, final false
  inline int32_t CharsRight();

  /// @brief Method CountCaptures, addr 0x4422ee4, size 0x340, virtual false, abstract: false, final false
  inline void CountCaptures();

  /// @brief Method EmptyOptionsStack, addr 0x4427db8, size 0x50, virtual false, abstract: false, final false
  inline bool EmptyOptionsStack();

  /// @brief Method EmptyStack, addr 0x4425d20, size 0x10, virtual false, abstract: false, final false
  inline bool EmptyStack();

  /// @brief Method HexDigit, addr 0x4427b58, size 0x38, virtual false, abstract: false, final false
  static inline int32_t HexDigit(char16_t ch);

  /// @brief Method IsCaptureName, addr 0x4427100, size 0x1c, virtual false, abstract: false, final false
  inline bool IsCaptureName(::StringW capname);

  /// @brief Method IsCaptureSlot, addr 0x4427064, size 0x9c, virtual false, abstract: false, final false
  inline bool IsCaptureSlot(int32_t i);

  /// @brief Method IsOnlyTopOption, addr 0x4427c2c, size 0x24, virtual false, abstract: false, final false
  inline bool IsOnlyTopOption(::System::Text::RegularExpressions::RegexOptions option);

  /// @brief Method IsQuantifier, addr 0x4424864, size 0x98, virtual false, abstract: false, final false
  static inline bool IsQuantifier(char16_t ch);

  /// @brief Method IsSpace, addr 0x44272b4, size 0x98, virtual false, abstract: false, final false
  static inline bool IsSpace(char16_t ch);

  /// @brief Method IsSpecial, addr 0x44247cc, size 0x98, virtual false, abstract: false, final false
  static inline bool IsSpecial(char16_t ch);

  /// @brief Method IsStopperX, addr 0x44245a4, size 0x98, virtual false, abstract: false, final false
  static inline bool IsStopperX(char16_t ch);

  /// @brief Method IsTrueQuantifier, addr 0x442463c, size 0x190, virtual false, abstract: false, final false
  inline bool IsTrueQuantifier();

  /// @brief Method MakeException, addr 0x4425d30, size 0x98, virtual false, abstract: false, final false
  inline ::System::ArgumentException* MakeException(::StringW message);

  /// @brief Method MoveLeft, addr 0x44266ec, size 0x10, virtual false, abstract: false, final false
  inline void MoveLeft();

  /// @brief Method MoveRight, addr 0x442454c, size 0x10, virtual false, abstract: false, final false
  inline void MoveRight();

  /// @brief Method MoveRight, addr 0x4427048, size 0x10, virtual false, abstract: false, final false
  inline void MoveRight(int32_t i);

  static inline ::System::Text::RegularExpressions::RegexParser* New_ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method NoteCaptureName, addr 0x4427e08, size 0x188, virtual false, abstract: false, final false
  inline void NoteCaptureName(::StringW name, int32_t pos);

  /// @brief Method NoteCaptureSlot, addr 0x4427cb0, size 0x108, virtual false, abstract: false, final false
  inline void NoteCaptureSlot(int32_t i, int32_t pos);

  /// @brief Method NoteCaptures, addr 0x4423bb4, size 0xc, virtual false, abstract: false, final false
  inline void NoteCaptures(::System::Collections::Hashtable* caps, int32_t capsize, ::System::Collections::Hashtable* capnames);

  /// @brief Method OptionFromCode, addr 0x4427c50, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::RegexOptions OptionFromCode(char16_t ch);

  /// @brief Method Parse, addr 0x4422c34, size 0x198, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::RegexTree* Parse(::StringW re, ::System::Text::RegularExpressions::RegexOptions op);

  /// @brief Method ParseProperty, addr 0x4426c64, size 0x170, virtual false, abstract: false, final false
  inline ::StringW ParseProperty();

  /// @brief Method ParseReplacement, addr 0x4423a68, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::RegexReplacement* ParseReplacement(::StringW rep, ::System::Collections::Hashtable* caps, int32_t capsize,
                                                                                       ::System::Collections::Hashtable* capnames, ::System::Text::RegularExpressions::RegexOptions op);

  /// @brief Method PopGroup, addr 0x4425f08, size 0xd0, virtual false, abstract: false, final false
  inline void PopGroup();

  /// @brief Method PopKeepOptions, addr 0x4425bbc, size 0x64, virtual false, abstract: false, final false
  inline void PopKeepOptions();

  /// @brief Method PopOptions, addr 0x4425fd8, size 0x98, virtual false, abstract: false, final false
  inline void PopOptions();

  /// @brief Method PushGroup, addr 0x4425c20, size 0x3c, virtual false, abstract: false, final false
  inline void PushGroup();

  /// @brief Method PushOptions, addr 0x4425238, size 0xa0, virtual false, abstract: false, final false
  inline void PushOptions();

  /// @brief Method Reset, addr 0x4423224, size 0x8c, virtual false, abstract: false, final false
  inline void Reset(::System::Text::RegularExpressions::RegexOptions topopts);

  /// @brief Method RightChar, addr 0x4424580, size 0x24, virtual false, abstract: false, final false
  inline char16_t RightChar();

  /// @brief Method RightChar, addr 0x4427020, size 0x28, virtual false, abstract: false, final false
  inline char16_t RightChar(int32_t i);

  /// @brief Method RightCharMoveRight, addr 0x4426724, size 0x2c, virtual false, abstract: false, final false
  inline char16_t RightCharMoveRight();

  /// @brief Method ScanBackslash, addr 0x4426070, size 0x544, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanBackslash(bool scanOnly);

  /// @brief Method ScanBasicBackslash, addr 0x44273dc, size 0x5ac, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanBasicBackslash(bool scanOnly);

  /// @brief Method ScanBlank, addr 0x442425c, size 0x2e4, virtual false, abstract: false, final false
  inline void ScanBlank();

  /// @brief Method ScanCapname, addr 0x4426f64, size 0xbc, virtual false, abstract: false, final false
  inline ::StringW ScanCapname();

  /// @brief Method ScanCharClass, addr 0x4424bb4, size 0x60c, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexCharClass* ScanCharClass(bool caseInsensitive, bool scanOnly);

  /// @brief Method ScanCharEscape, addr 0x4426dd4, size 0x190, virtual false, abstract: false, final false
  inline char16_t ScanCharEscape();

  /// @brief Method ScanControl, addr 0x4427b90, size 0x9c, virtual false, abstract: false, final false
  inline char16_t ScanControl();

  /// @brief Method ScanDecimal, addr 0x4426750, size 0xcc, virtual false, abstract: false, final false
  inline int32_t ScanDecimal();

  /// @brief Method ScanDollar, addr 0x4426860, size 0x3f8, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanDollar();

  /// @brief Method ScanGroupOpen, addr 0x44252d8, size 0x8e4, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanGroupOpen();

  /// @brief Method ScanHex, addr 0x4427a24, size 0x134, virtual false, abstract: false, final false
  inline char16_t ScanHex(int32_t c);

  /// @brief Method ScanOctal, addr 0x4427988, size 0x9c, virtual false, abstract: false, final false
  inline char16_t ScanOctal();

  /// @brief Method ScanOptions, addr 0x44271a8, size 0x10c, virtual false, abstract: false, final false
  inline void ScanOptions();

  /// @brief Method ScanRegex, addr 0x44232b0, size 0x750, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanRegex();

  /// @brief Method ScanReplacement, addr 0x4423bc0, size 0x120, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanReplacement();

  /// @brief Method SetPattern, addr 0x4422e88, size 0x5c, virtual false, abstract: false, final false
  inline void SetPattern(::StringW Re);

  /// @brief Method StartGroup, addr 0x44241bc, size 0xa0, virtual false, abstract: false, final false
  inline void StartGroup(::System::Text::RegularExpressions::RegexNode* openGroup);

  /// @brief Method Textpos, addr 0x44285fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t Textpos();

  /// @brief Method Textto, addr 0x4428604, size 0x8, virtual false, abstract: false, final false
  inline void Textto(int32_t pos);

  /// @brief Method TypeFromCode, addr 0x442734c, size 0x90, virtual false, abstract: false, final false
  inline int32_t TypeFromCode(char16_t ch);

  /// @brief Method Unit, addr 0x44285ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexNode* Unit();

  /// @brief Method UseOptionE, addr 0x4426c58, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionE();

  /// @brief Method UseOptionI, addr 0x4424ba8, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionI();

  /// @brief Method UseOptionM, addr 0x44265b4, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionM();

  /// @brief Method UseOptionN, addr 0x4427058, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionN();

  /// @brief Method UseOptionS, addr 0x4426630, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionS();

  /// @brief Method UseOptionX, addr 0x4424540, size 0xc, virtual false, abstract: false, final false
  inline bool UseOptionX();

  constexpr ::System::Text::RegularExpressions::RegexNode* const& __cordl_internal_get__alternation() const;

  constexpr ::System::Text::RegularExpressions::RegexNode*& __cordl_internal_get__alternation();

  constexpr int32_t const& __cordl_internal_get__autocap() const;

  constexpr int32_t& __cordl_internal_get__autocap();

  constexpr int32_t const& __cordl_internal_get__capcount() const;

  constexpr int32_t& __cordl_internal_get__capcount();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__capnamelist() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__capnamelist();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__capnames() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__capnames();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__capnumlist() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__capnumlist();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__caps() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__caps();

  constexpr int32_t const& __cordl_internal_get__capsize() const;

  constexpr int32_t& __cordl_internal_get__capsize();

  constexpr int32_t const& __cordl_internal_get__captop() const;

  constexpr int32_t& __cordl_internal_get__captop();

  constexpr ::System::Text::RegularExpressions::RegexNode* const& __cordl_internal_get__concatenation() const;

  constexpr ::System::Text::RegularExpressions::RegexNode*& __cordl_internal_get__concatenation();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr int32_t const& __cordl_internal_get__currentPos() const;

  constexpr int32_t& __cordl_internal_get__currentPos();

  constexpr ::System::Text::RegularExpressions::RegexNode* const& __cordl_internal_get__group() const;

  constexpr ::System::Text::RegularExpressions::RegexNode*& __cordl_internal_get__group();

  constexpr bool const& __cordl_internal_get__ignoreNextParen() const;

  constexpr bool& __cordl_internal_get__ignoreNextParen();

  constexpr ::System::Text::RegularExpressions::RegexOptions const& __cordl_internal_get__options() const;

  constexpr ::System::Text::RegularExpressions::RegexOptions& __cordl_internal_get__options();

  constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* const& __cordl_internal_get__optionsStack() const;

  constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>*& __cordl_internal_get__optionsStack();

  constexpr ::StringW const& __cordl_internal_get__pattern() const;

  constexpr ::StringW& __cordl_internal_get__pattern();

  constexpr ::System::Text::RegularExpressions::RegexNode* const& __cordl_internal_get__stack() const;

  constexpr ::System::Text::RegularExpressions::RegexNode*& __cordl_internal_get__stack();

  constexpr ::System::Text::RegularExpressions::RegexNode* const& __cordl_internal_get__unit() const;

  constexpr ::System::Text::RegularExpressions::RegexNode*& __cordl_internal_get__unit();

  constexpr void __cordl_internal_set__alternation(::System::Text::RegularExpressions::RegexNode* value);

  constexpr void __cordl_internal_set__autocap(int32_t value);

  constexpr void __cordl_internal_set__capcount(int32_t value);

  constexpr void __cordl_internal_set__capnamelist(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__capnames(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__capnumlist(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__caps(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__capsize(int32_t value);

  constexpr void __cordl_internal_set__captop(int32_t value);

  constexpr void __cordl_internal_set__concatenation(::System::Text::RegularExpressions::RegexNode* value);

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__currentPos(int32_t value);

  constexpr void __cordl_internal_set__group(::System::Text::RegularExpressions::RegexNode* value);

  constexpr void __cordl_internal_set__ignoreNextParen(bool value);

  constexpr void __cordl_internal_set__options(::System::Text::RegularExpressions::RegexOptions value);

  constexpr void __cordl_internal_set__optionsStack(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* value);

  constexpr void __cordl_internal_set__pattern(::StringW value);

  constexpr void __cordl_internal_set__stack(::System::Text::RegularExpressions::RegexNode* value);

  constexpr void __cordl_internal_set__unit(::System::Text::RegularExpressions::RegexNode* value);

  /// @brief Method .ctor, addr 0x4422dcc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_category();

  static inline void setStaticF_s_category(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexParser(RegexParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexParser(RegexParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9246 };

  /// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexNode* ____stack;

  /// @brief Field _group, offset: 0x18, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexNode* ____group;

  /// @brief Field _alternation, offset: 0x20, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexNode* ____alternation;

  /// @brief Field _concatenation, offset: 0x28, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexNode* ____concatenation;

  /// @brief Field _unit, offset: 0x30, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexNode* ____unit;

  /// @brief Field _pattern, offset: 0x38, size: 0x8, def value: None
  ::StringW ____pattern;

  /// @brief Field _currentPos, offset: 0x40, size: 0x4, def value: None
  int32_t ____currentPos;

  /// @brief Field _culture, offset: 0x48, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  /// @brief Field _autocap, offset: 0x50, size: 0x4, def value: None
  int32_t ____autocap;

  /// @brief Field _capcount, offset: 0x54, size: 0x4, def value: None
  int32_t ____capcount;

  /// @brief Field _captop, offset: 0x58, size: 0x4, def value: None
  int32_t ____captop;

  /// @brief Field _capsize, offset: 0x5c, size: 0x4, def value: None
  int32_t ____capsize;

  /// @brief Field _caps, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____caps;

  /// @brief Field _capnames, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____capnames;

  /// @brief Field _capnumlist, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____capnumlist;

  /// @brief Field _capnamelist, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____capnamelist;

  /// @brief Field _options, offset: 0x80, size: 0x4, def value: None
  ::System::Text::RegularExpressions::RegexOptions ____options;

  /// @brief Field _optionsStack, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* ____optionsStack;

  /// @brief Field _ignoreNextParen, offset: 0x90, size: 0x1, def value: None
  bool ____ignoreNextParen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____group) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____alternation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____concatenation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____unit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____pattern) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____currentPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____culture) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____autocap) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____capcount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____captop) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____capsize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____caps) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____capnames) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____capnumlist) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____capnamelist) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____options) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____optionsStack) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexParser, ____ignoreNextParen) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexParser, 0x98>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexParser*, "System.Text.RegularExpressions", "RegexParser");
