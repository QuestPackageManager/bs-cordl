#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexBoyerMoore.hpp"
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
// CS Name: ::System.Text.RegularExpressions::RegexBoyerMoore*
class CORDL_TYPE RegexBoyerMoore : public ::System::Object {
public:
  // Declarations
  /// @brief Field CaseInsensitive, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_CaseInsensitive, put = __cordl_internal_set_CaseInsensitive)) bool CaseInsensitive;

  /// @brief Field HighASCII, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_HighASCII, put = __cordl_internal_set_HighASCII)) int32_t HighASCII;

  /// @brief Field LowASCII, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_LowASCII, put = __cordl_internal_set_LowASCII)) int32_t LowASCII;

  /// @brief Field NegativeASCII, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NegativeASCII, put = __cordl_internal_set_NegativeASCII))::ArrayW<int32_t, ::Array<int32_t>*> NegativeASCII;

  /// @brief Field NegativeUnicode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_NegativeUnicode,
                      put = __cordl_internal_set_NegativeUnicode))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> NegativeUnicode;

  /// @brief Field Pattern, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Pattern, put = __cordl_internal_set_Pattern))::StringW Pattern;

  /// @brief Field Positive, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Positive, put = __cordl_internal_set_Positive))::ArrayW<int32_t, ::Array<int32_t>*> Positive;

  /// @brief Field RightToLeft, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_RightToLeft, put = __cordl_internal_set_RightToLeft)) bool RightToLeft;

  /// @brief Field _culture, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture))::System::Globalization::CultureInfo* _culture;

  /// @brief Method IsMatch, addr 0x2fb4624, size 0x6c, virtual false, abstract: false, final false
  inline bool IsMatch(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit);

  /// @brief Method MatchPattern, addr 0x2fb4500, size 0x124, virtual false, abstract: false, final false
  inline bool MatchPattern(::StringW text, int32_t index);

  static inline ::System::Text::RegularExpressions::RegexBoyerMoore* New_ctor(::StringW pattern, bool caseInsensitive, bool rightToLeft, ::System::Globalization::CultureInfo* culture);

  /// @brief Method Scan, addr 0x2fb4690, size 0x2e4, virtual false, abstract: false, final false
  inline int32_t Scan(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit);

  constexpr bool const& __cordl_internal_get_CaseInsensitive() const;

  constexpr bool& __cordl_internal_get_CaseInsensitive();

  constexpr int32_t const& __cordl_internal_get_HighASCII() const;

  constexpr int32_t& __cordl_internal_get_HighASCII();

  constexpr int32_t const& __cordl_internal_get_LowASCII() const;

  constexpr int32_t& __cordl_internal_get_LowASCII();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_NegativeASCII() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_NegativeASCII();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __cordl_internal_get_NegativeUnicode() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __cordl_internal_get_NegativeUnicode();

  constexpr ::StringW const& __cordl_internal_get_Pattern() const;

  constexpr ::StringW& __cordl_internal_get_Pattern();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_Positive() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_Positive();

  constexpr bool const& __cordl_internal_get_RightToLeft() const;

  constexpr bool& __cordl_internal_get_RightToLeft();

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __cordl_internal_get__culture() const;

  constexpr void __cordl_internal_set_CaseInsensitive(bool value);

  constexpr void __cordl_internal_set_HighASCII(int32_t value);

  constexpr void __cordl_internal_set_LowASCII(int32_t value);

  constexpr void __cordl_internal_set_NegativeASCII(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_NegativeUnicode(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr void __cordl_internal_set_Pattern(::StringW value);

  constexpr void __cordl_internal_set_Positive(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_RightToLeft(bool value);

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  /// @brief Method .ctor, addr 0x2fb404c, size 0x4b4, virtual false, abstract: false, final false
  inline void _ctor(::StringW pattern, bool caseInsensitive, bool rightToLeft, ::System::Globalization::CultureInfo* culture);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexBoyerMoore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexBoyerMoore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexBoyerMoore(RegexBoyerMoore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexBoyerMoore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexBoyerMoore(RegexBoyerMoore const&) = delete;

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
