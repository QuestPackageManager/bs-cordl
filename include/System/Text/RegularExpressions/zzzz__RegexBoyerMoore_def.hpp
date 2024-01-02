#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexBoyerMoore)
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexBoyerMoore;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexBoyerMoore);
// Type: System.Text.RegularExpressions::RegexBoyerMoore
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8914))
// CS Name: ::System.Text.RegularExpressions::RegexBoyerMoore*
class CORDL_TYPE RegexBoyerMoore : public ::System::Object {
public:
  // Declarations
  /// @brief Field Positive, offset 0x10, size 0x8
  __declspec(property(get = __get_Positive, put = __set_Positive))::ArrayW<int32_t, ::Array<int32_t>*> Positive;

  /// @brief Field NegativeASCII, offset 0x18, size 0x8
  __declspec(property(get = __get_NegativeASCII, put = __set_NegativeASCII))::ArrayW<int32_t, ::Array<int32_t>*> NegativeASCII;

  /// @brief Field NegativeUnicode, offset 0x20, size 0x8
  __declspec(property(get = __get_NegativeUnicode, put = __set_NegativeUnicode))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> NegativeUnicode;

  /// @brief Field Pattern, offset 0x28, size 0x8
  __declspec(property(get = __get_Pattern, put = __set_Pattern))::StringW Pattern;

  /// @brief Field LowASCII, offset 0x30, size 0x4
  __declspec(property(get = __get_LowASCII, put = __set_LowASCII)) int32_t LowASCII;

  /// @brief Field HighASCII, offset 0x34, size 0x4
  __declspec(property(get = __get_HighASCII, put = __set_HighASCII)) int32_t HighASCII;

  /// @brief Field RightToLeft, offset 0x38, size 0x1
  __declspec(property(get = __get_RightToLeft, put = __set_RightToLeft)) bool RightToLeft;

  /// @brief Field CaseInsensitive, offset 0x39, size 0x1
  __declspec(property(get = __get_CaseInsensitive, put = __set_CaseInsensitive)) bool CaseInsensitive;

  /// @brief Field _culture, offset 0x40, size 0x8
  __declspec(property(get = __get__culture, put = __set__culture))::System::Globalization::CultureInfo* _culture;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_Positive();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_Positive() const;

  constexpr void __set_Positive(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_NegativeASCII();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_NegativeASCII() const;

  constexpr void __set_NegativeASCII(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __get_NegativeUnicode();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __get_NegativeUnicode() const;

  constexpr void __set_NegativeUnicode(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr ::StringW& __get_Pattern();

  constexpr ::StringW const& __get_Pattern() const;

  constexpr void __set_Pattern(::StringW value);

  constexpr int32_t& __get_LowASCII();

  constexpr int32_t const& __get_LowASCII() const;

  constexpr void __set_LowASCII(int32_t value);

  constexpr int32_t& __get_HighASCII();

  constexpr int32_t const& __get_HighASCII() const;

  constexpr void __set_HighASCII(int32_t value);

  constexpr bool& __get_RightToLeft();

  constexpr bool const& __get_RightToLeft() const;

  constexpr void __set_RightToLeft(bool value);

  constexpr bool& __get_CaseInsensitive();

  constexpr bool const& __get_CaseInsensitive() const;

  constexpr void __set_CaseInsensitive(bool value);

  constexpr ::System::Globalization::CultureInfo*& __get__culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __get__culture() const;

  constexpr void __set__culture(::System::Globalization::CultureInfo* value);

  static inline ::System::Text::RegularExpressions::RegexBoyerMoore* New_ctor(::StringW pattern, bool caseInsensitive, bool rightToLeft, ::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor, addr 0x2953dec, size 0x4b4, virtual false, abstract: false, final false
  inline void _ctor(::StringW pattern, bool caseInsensitive, bool rightToLeft, ::System::Globalization::CultureInfo* culture);

  /// @brief Method MatchPattern, addr 0x29542a0, size 0x124, virtual false, abstract: false, final false
  inline bool MatchPattern(::StringW text, int32_t index);

  /// @brief Method IsMatch, addr 0x29543c4, size 0x6c, virtual false, abstract: false, final false
  inline bool IsMatch(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit);

  /// @brief Method Scan, addr 0x2954430, size 0x2e4, virtual false, abstract: false, final false
  inline int32_t Scan(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit);

  // Ctor Parameters [CppParam { name: "", ty: "RegexBoyerMoore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexBoyerMoore(RegexBoyerMoore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexBoyerMoore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexBoyerMoore(RegexBoyerMoore const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexBoyerMoore();

public:
  /// @brief Field Positive, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___Positive;

  /// @brief Field NegativeASCII, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___NegativeASCII;

  /// @brief Field NegativeUnicode, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ___NegativeUnicode;

  /// @brief Field Pattern, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Pattern;

  /// @brief Field LowASCII, offset: 0x30, size: 0x4, def value: None
  int32_t ___LowASCII;

  /// @brief Field HighASCII, offset: 0x34, size: 0x4, def value: None
  int32_t ___HighASCII;

  /// @brief Field RightToLeft, offset: 0x38, size: 0x1, def value: None
  bool ___RightToLeft;

  /// @brief Field CaseInsensitive, offset: 0x39, size: 0x1, def value: None
  bool ___CaseInsensitive;

  /// @brief Field _culture, offset: 0x40, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexBoyerMoore, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexBoyerMoore, ___Positive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexBoyerMoore, ___NegativeASCII) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexBoyerMoore, ___NegativeUnicode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexBoyerMoore, ___Pattern) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexBoyerMoore, ___LowASCII) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexBoyerMoore, ___HighASCII) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexBoyerMoore, ___RightToLeft) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexBoyerMoore, ___CaseInsensitive) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexBoyerMoore, ____culture) == 0x40, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexBoyerMoore);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexBoyerMoore*, "System.Text.RegularExpressions", "RegexBoyerMoore");
