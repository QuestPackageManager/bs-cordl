#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexParser)
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System {
class ArgumentException;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text::RegularExpressions {
class RegexReplacement;
}
namespace System::Text::RegularExpressions {
class RegexTree;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class RegexCharClass;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexParser);
// Type: System.Text.RegularExpressions::RegexParser
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8925))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8926))
// CS Name: ::System.Text.RegularExpressions::RegexParser*
class CORDL_TYPE RegexParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _stack, offset 0x10, size 0x8
  __declspec(property(get = __get__stack, put = __set__stack))::System::Text::RegularExpressions::RegexNode* _stack;

  /// @brief Field _group, offset 0x18, size 0x8
  __declspec(property(get = __get__group, put = __set__group))::System::Text::RegularExpressions::RegexNode* _group;

  /// @brief Field _alternation, offset 0x20, size 0x8
  __declspec(property(get = __get__alternation, put = __set__alternation))::System::Text::RegularExpressions::RegexNode* _alternation;

  /// @brief Field _concatenation, offset 0x28, size 0x8
  __declspec(property(get = __get__concatenation, put = __set__concatenation))::System::Text::RegularExpressions::RegexNode* _concatenation;

  /// @brief Field _unit, offset 0x30, size 0x8
  __declspec(property(get = __get__unit, put = __set__unit))::System::Text::RegularExpressions::RegexNode* _unit;

  /// @brief Field _pattern, offset 0x38, size 0x8
  __declspec(property(get = __get__pattern, put = __set__pattern))::StringW _pattern;

  /// @brief Field _currentPos, offset 0x40, size 0x4
  __declspec(property(get = __get__currentPos, put = __set__currentPos)) int32_t _currentPos;

  /// @brief Field _culture, offset 0x48, size 0x8
  __declspec(property(get = __get__culture, put = __set__culture))::System::Globalization::CultureInfo* _culture;

  /// @brief Field _autocap, offset 0x50, size 0x4
  __declspec(property(get = __get__autocap, put = __set__autocap)) int32_t _autocap;

  /// @brief Field _capcount, offset 0x54, size 0x4
  __declspec(property(get = __get__capcount, put = __set__capcount)) int32_t _capcount;

  /// @brief Field _captop, offset 0x58, size 0x4
  __declspec(property(get = __get__captop, put = __set__captop)) int32_t _captop;

  /// @brief Field _capsize, offset 0x5c, size 0x4
  __declspec(property(get = __get__capsize, put = __set__capsize)) int32_t _capsize;

  /// @brief Field _caps, offset 0x60, size 0x8
  __declspec(property(get = __get__caps, put = __set__caps))::System::Collections::Hashtable* _caps;

  /// @brief Field _capnames, offset 0x68, size 0x8
  __declspec(property(get = __get__capnames, put = __set__capnames))::System::Collections::Hashtable* _capnames;

  /// @brief Field _capnumlist, offset 0x70, size 0x8
  __declspec(property(get = __get__capnumlist, put = __set__capnumlist))::ArrayW<int32_t, ::Array<int32_t>*> _capnumlist;

  /// @brief Field _capnamelist, offset 0x78, size 0x8
  __declspec(property(get = __get__capnamelist, put = __set__capnamelist))::System::Collections::Generic::List_1<::StringW>* _capnamelist;

  /// @brief Field _options, offset 0x80, size 0x4
  __declspec(property(get = __get__options, put = __set__options))::System::Text::RegularExpressions::RegexOptions _options;

  /// @brief Field _optionsStack, offset 0x88, size 0x8
  __declspec(property(get = __get__optionsStack, put = __set__optionsStack))::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* _optionsStack;

  /// @brief Field _ignoreNextParen, offset 0x90, size 0x1
  __declspec(property(get = __get__ignoreNextParen, put = __set__ignoreNextParen)) bool _ignoreNextParen;

  /// @brief Field s_category, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_category, put = setStaticF_s_category))::ArrayW<uint8_t, ::Array<uint8_t>*> s_category;

  constexpr ::System::Text::RegularExpressions::RegexNode*& __get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& __get__stack() const;

  constexpr void __set__stack(::System::Text::RegularExpressions::RegexNode* value);

  constexpr ::System::Text::RegularExpressions::RegexNode*& __get__group();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& __get__group() const;

  constexpr void __set__group(::System::Text::RegularExpressions::RegexNode* value);

  constexpr ::System::Text::RegularExpressions::RegexNode*& __get__alternation();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& __get__alternation() const;

  constexpr void __set__alternation(::System::Text::RegularExpressions::RegexNode* value);

  constexpr ::System::Text::RegularExpressions::RegexNode*& __get__concatenation();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& __get__concatenation() const;

  constexpr void __set__concatenation(::System::Text::RegularExpressions::RegexNode* value);

  constexpr ::System::Text::RegularExpressions::RegexNode*& __get__unit();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexNode*> const& __get__unit() const;

  constexpr void __set__unit(::System::Text::RegularExpressions::RegexNode* value);

  constexpr ::StringW& __get__pattern();

  constexpr ::StringW const& __get__pattern() const;

  constexpr void __set__pattern(::StringW value);

  constexpr int32_t& __get__currentPos();

  constexpr int32_t const& __get__currentPos() const;

  constexpr void __set__currentPos(int32_t value);

  constexpr ::System::Globalization::CultureInfo*& __get__culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __get__culture() const;

  constexpr void __set__culture(::System::Globalization::CultureInfo* value);

  constexpr int32_t& __get__autocap();

  constexpr int32_t const& __get__autocap() const;

  constexpr void __set__autocap(int32_t value);

  constexpr int32_t& __get__capcount();

  constexpr int32_t const& __get__capcount() const;

  constexpr void __set__capcount(int32_t value);

  constexpr int32_t& __get__captop();

  constexpr int32_t const& __get__captop() const;

  constexpr void __set__captop(int32_t value);

  constexpr int32_t& __get__capsize();

  constexpr int32_t const& __get__capsize() const;

  constexpr void __set__capsize(int32_t value);

  constexpr ::System::Collections::Hashtable*& __get__caps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__caps() const;

  constexpr void __set__caps(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __get__capnames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get__capnames() const;

  constexpr void __set__capnames(::System::Collections::Hashtable* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__capnumlist();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__capnumlist() const;

  constexpr void __set__capnumlist(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__capnamelist();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__capnamelist() const;

  constexpr void __set__capnamelist(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Text::RegularExpressions::RegexOptions& __get__options();

  constexpr ::System::Text::RegularExpressions::RegexOptions const& __get__options() const;

  constexpr void __set__options(::System::Text::RegularExpressions::RegexOptions value);

  constexpr ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>*& __get__optionsStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>*> const& __get__optionsStack() const;

  constexpr void __set__optionsStack(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* value);

  constexpr bool& __get__ignoreNextParen();

  constexpr bool const& __get__ignoreNextParen() const;

  constexpr void __set__ignoreNextParen(bool value);

  static inline void setStaticF_s_category(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_category();

  /// @brief Method Parse addr 0x29637f8 size 0x19c virtual false final false
  static inline ::System::Text::RegularExpressions::RegexTree* Parse(::StringW re, ::System::Text::RegularExpressions::RegexOptions op);

  /// @brief Method ParseReplacement addr 0x296462c size 0x150 virtual false final false
  static inline ::System::Text::RegularExpressions::RegexReplacement* ParseReplacement(::StringW rep, ::System::Collections::Hashtable* caps, int32_t capsize,
                                                                                       ::System::Collections::Hashtable* capnames, ::System::Text::RegularExpressions::RegexOptions op);

  static inline ::System::Text::RegularExpressions::RegexParser* New_ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor addr 0x2963994 size 0xc0 virtual false final false
  inline void _ctor(::System::Globalization::CultureInfo* culture);

  /// @brief Method SetPattern addr 0x2963a54 size 0x5c virtual false final false
  inline void SetPattern(::StringW Re);

  /// @brief Method Reset addr 0x2963df0 size 0x8c virtual false final false
  inline void Reset(::System::Text::RegularExpressions::RegexOptions topopts);

  /// @brief Method ScanRegex addr 0x2963e7c size 0x748 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanRegex();

  /// @brief Method ScanReplacement addr 0x2964788 size 0x124 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanReplacement();

  /// @brief Method ScanCharClass addr 0x29657b8 size 0x608 virtual false final false
  inline ::System::Text::RegularExpressions::RegexCharClass* ScanCharClass(bool caseInsensitive, bool scanOnly);

  /// @brief Method ScanGroupOpen addr 0x2965ee4 size 0x8e8 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanGroupOpen();

  /// @brief Method ScanBlank addr 0x2964e40 size 0x2e4 virtual false final false
  inline void ScanBlank();

  /// @brief Method ScanBackslash addr 0x2966c8c size 0x4e4 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanBackslash(bool scanOnly);

  /// @brief Method ScanBasicBackslash addr 0x2967f84 size 0x5a8 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanBasicBackslash(bool scanOnly);

  /// @brief Method ScanDollar addr 0x2967428 size 0x3f8 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* ScanDollar();

  /// @brief Method ScanCapname addr 0x2967b1c size 0xbc virtual false final false
  inline ::StringW ScanCapname();

  /// @brief Method ScanOctal addr 0x296852c size 0x9c virtual false final false
  inline char16_t ScanOctal();

  /// @brief Method ScanDecimal addr 0x2967318 size 0xcc virtual false final false
  inline int32_t ScanDecimal();

  /// @brief Method ScanHex addr 0x29685c8 size 0x130 virtual false final false
  inline char16_t ScanHex(int32_t c);

  /// @brief Method HexDigit addr 0x29686f8 size 0x38 virtual false final false
  static inline int32_t HexDigit(char16_t ch);

  /// @brief Method ScanControl addr 0x2968730 size 0x9c virtual false final false
  inline char16_t ScanControl();

  /// @brief Method IsOnlyTopOption addr 0x29687cc size 0x28 virtual false final false
  inline bool IsOnlyTopOption(::System::Text::RegularExpressions::RegexOptions option);

  /// @brief Method ScanOptions addr 0x2967d60 size 0xfc virtual false final false
  inline void ScanOptions();

  /// @brief Method ScanCharEscape addr 0x296799c size 0x180 virtual false final false
  inline char16_t ScanCharEscape();

  /// @brief Method ParseProperty addr 0x296782c size 0x170 virtual false final false
  inline ::StringW ParseProperty();

  /// @brief Method TypeFromCode addr 0x2967ef4 size 0x90 virtual false final false
  inline int32_t TypeFromCode(char16_t ch);

  /// @brief Method OptionFromCode addr 0x29687f4 size 0x60 virtual false final false
  static inline ::System::Text::RegularExpressions::RegexOptions OptionFromCode(char16_t ch);

  /// @brief Method CountCaptures addr 0x2963ab0 size 0x340 virtual false final false
  inline void CountCaptures();

  /// @brief Method NoteCaptureSlot addr 0x2968854 size 0x108 virtual false final false
  inline void NoteCaptureSlot(int32_t i, int32_t pos);

  /// @brief Method NoteCaptureName addr 0x29689ac size 0x19c virtual false final false
  inline void NoteCaptureName(::StringW name, int32_t pos);

  /// @brief Method NoteCaptures addr 0x296477c size 0xc virtual false final false
  inline void NoteCaptures(::System::Collections::Hashtable* caps, int32_t capsize, ::System::Collections::Hashtable* capnames);

  /// @brief Method AssignNameSlots addr 0x2968b48 size 0x674 virtual false final false
  inline void AssignNameSlots();

  /// @brief Method CaptureSlotFromName addr 0x2967cd4 size 0x8c virtual false final false
  inline int32_t CaptureSlotFromName(::StringW capname);

  /// @brief Method IsCaptureSlot addr 0x2967c1c size 0x9c virtual false final false
  inline bool IsCaptureSlot(int32_t i);

  /// @brief Method IsCaptureName addr 0x2967cb8 size 0x1c virtual false final false
  inline bool IsCaptureName(::StringW capname);

  /// @brief Method UseOptionN addr 0x2967c10 size 0xc virtual false final false
  inline bool UseOptionN();

  /// @brief Method UseOptionI addr 0x29657ac size 0xc virtual false final false
  inline bool UseOptionI();

  /// @brief Method UseOptionM addr 0x2967170 size 0xc virtual false final false
  inline bool UseOptionM();

  /// @brief Method UseOptionS addr 0x29671f4 size 0xc virtual false final false
  inline bool UseOptionS();

  /// @brief Method UseOptionX addr 0x2965124 size 0xc virtual false final false
  inline bool UseOptionX();

  /// @brief Method UseOptionE addr 0x2967820 size 0xc virtual false final false
  inline bool UseOptionE();

  /// @brief Method IsSpecial addr 0x29653c0 size 0x98 virtual false final false
  static inline bool IsSpecial(char16_t ch);

  /// @brief Method IsStopperX addr 0x2965188 size 0x98 virtual false final false
  static inline bool IsStopperX(char16_t ch);

  /// @brief Method IsQuantifier addr 0x2965458 size 0x98 virtual false final false
  static inline bool IsQuantifier(char16_t ch);

  /// @brief Method IsTrueQuantifier addr 0x2965220 size 0x1a0 virtual false final false
  inline bool IsTrueQuantifier();

  /// @brief Method IsSpace addr 0x2967e5c size 0x98 virtual false final false
  static inline bool IsSpace(char16_t ch);

  /// @brief Method AddConcatenate addr 0x29654f0 size 0x1ec virtual false final false
  inline void AddConcatenate(int32_t pos, int32_t cch, bool isReplacement);

  /// @brief Method PushGroup addr 0x2966830 size 0x3c virtual false final false
  inline void PushGroup();

  /// @brief Method PopGroup addr 0x2966b24 size 0xd0 virtual false final false
  inline void PopGroup();

  /// @brief Method EmptyStack addr 0x2966934 size 0x10 virtual false final false
  inline bool EmptyStack();

  /// @brief Method StartGroup addr 0x2964d94 size 0xac virtual false final false
  inline void StartGroup(::System::Text::RegularExpressions::RegexNode* openGroup);

  /// @brief Method AddAlternate addr 0x296686c size 0xc8 virtual false final false
  inline void AddAlternate();

  /// @brief Method AddConcatenate addr 0x29672c4 size 0x28 virtual false final false
  inline void AddConcatenate();

  /// @brief Method AddConcatenate addr 0x29673e4 size 0x44 virtual false final false
  inline void AddConcatenate(bool lazy, int32_t min, int32_t max);

  /// @brief Method Unit addr 0x29691bc size 0x8 virtual false final false
  inline ::System::Text::RegularExpressions::RegexNode* Unit();

  /// @brief Method AddUnitOne addr 0x29656f8 size 0xb4 virtual false final false
  inline void AddUnitOne(char16_t ch);

  /// @brief Method AddUnitNotone addr 0x2967200 size 0xb4 virtual false final false
  inline void AddUnitNotone(char16_t ch);

  /// @brief Method AddUnitSet addr 0x2965dc0 size 0x80 virtual false final false
  inline void AddUnitSet(::StringW cc);

  /// @brief Method AddUnitNode addr 0x29691c4 size 0x8 virtual false final false
  inline void AddUnitNode(::System::Text::RegularExpressions::RegexNode* node);

  /// @brief Method AddUnitType addr 0x296717c size 0x78 virtual false final false
  inline void AddUnitType(int32_t type);

  /// @brief Method AddGroup addr 0x29669e4 size 0x140 virtual false final false
  inline void AddGroup();

  /// @brief Method PushOptions addr 0x2965e40 size 0xa4 virtual false final false
  inline void PushOptions();

  /// @brief Method PopOptions addr 0x2966bf4 size 0x98 virtual false final false
  inline void PopOptions();

  /// @brief Method EmptyOptionsStack addr 0x296895c size 0x50 virtual false final false
  inline bool EmptyOptionsStack();

  /// @brief Method PopKeepOptions addr 0x29667cc size 0x64 virtual false final false
  inline void PopKeepOptions();

  /// @brief Method MakeException addr 0x2966944 size 0xa0 virtual false final false
  inline ::System::ArgumentException* MakeException(::StringW message);

  /// @brief Method Textpos addr 0x29691cc size 0x8 virtual false final false
  inline int32_t Textpos();

  /// @brief Method Textto addr 0x29691d4 size 0x8 virtual false final false
  inline void Textto(int32_t pos);

  /// @brief Method RightCharMoveRight addr 0x29672ec size 0x2c virtual false final false
  inline char16_t RightCharMoveRight();

  /// @brief Method MoveRight addr 0x2965130 size 0x10 virtual false final false
  inline void MoveRight();

  /// @brief Method MoveRight addr 0x2967c00 size 0x10 virtual false final false
  inline void MoveRight(int32_t i);

  /// @brief Method MoveLeft addr 0x29672b4 size 0x10 virtual false final false
  inline void MoveLeft();

  /// @brief Method CharAt addr 0x29656dc size 0x1c virtual false final false
  inline char16_t CharAt(int32_t i);

  /// @brief Method RightChar addr 0x2965164 size 0x24 virtual false final false
  inline char16_t RightChar();

  /// @brief Method RightChar addr 0x2967bd8 size 0x28 virtual false final false
  inline char16_t RightChar(int32_t i);

  /// @brief Method CharsRight addr 0x2965140 size 0x24 virtual false final false
  inline int32_t CharsRight();

  // Ctor Parameters [CppParam { name: "", ty: "RegexParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexParser(RegexParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexParser(RegexParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexParser();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexParser, 0x98>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexParser*, "System.Text.RegularExpressions", "RegexParser");
