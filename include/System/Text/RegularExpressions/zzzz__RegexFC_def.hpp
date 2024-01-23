#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RegexFC)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Text::RegularExpressions {
class RegexCharClass;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexFC;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexFC);
// Type: System.Text.RegularExpressions::RegexFC
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8921))
// CS Name: ::System.Text.RegularExpressions::RegexFC*
class CORDL_TYPE RegexFC : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cc, put = __cordl_internal_set__cc))::System::Text::RegularExpressions::RegexCharClass* _cc;

  /// @brief Field _nullable, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__nullable, put = __cordl_internal_set__nullable)) bool _nullable;

  /// @brief Field <CaseInsensitive>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__CaseInsensitive_k__BackingField, put = __cordl_internal_set__CaseInsensitive_k__BackingField)) bool _CaseInsensitive_k__BackingField;

  __declspec(property(get = get_CaseInsensitive, put = set_CaseInsensitive)) bool CaseInsensitive;

  constexpr ::System::Text::RegularExpressions::RegexCharClass*& __cordl_internal_get__cc();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexCharClass*> const& __cordl_internal_get__cc() const;

  constexpr void __cordl_internal_set__cc(::System::Text::RegularExpressions::RegexCharClass* value);

  constexpr bool& __cordl_internal_get__nullable();

  constexpr bool const& __cordl_internal_get__nullable() const;

  constexpr void __cordl_internal_set__nullable(bool value);

  constexpr bool& __cordl_internal_get__CaseInsensitive_k__BackingField();

  constexpr bool const& __cordl_internal_get__CaseInsensitive_k__BackingField() const;

  constexpr void __cordl_internal_set__CaseInsensitive_k__BackingField(bool value);

  static inline ::System::Text::RegularExpressions::RegexFC* New_ctor(bool nullable);

  /// @brief Method .ctor, addr 0x295fd64, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(bool nullable);

  static inline ::System::Text::RegularExpressions::RegexFC* New_ctor(char16_t ch, bool _cordl_not, bool nullable, bool caseInsensitive);

  /// @brief Method .ctor, addr 0x295fe90, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(char16_t ch, bool _cordl_not, bool nullable, bool caseInsensitive);

  static inline ::System::Text::RegularExpressions::RegexFC* New_ctor(::StringW charClass, bool nullable, bool caseInsensitive);

  /// @brief Method .ctor, addr 0x295ff84, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW charClass, bool nullable, bool caseInsensitive);

  /// @brief Method AddFC, addr 0x295fde4, size 0xac, virtual false, abstract: false, final false
  inline bool AddFC(::System::Text::RegularExpressions::RegexFC* fc, bool concatenate);

  /// @brief Method get_CaseInsensitive, addr 0x2960018, size 0x8, virtual false, abstract: false, final false
  inline bool get_CaseInsensitive();

  /// @brief Method set_CaseInsensitive, addr 0x2960020, size 0xc, virtual false, abstract: false, final false
  inline void set_CaseInsensitive(bool value);

  /// @brief Method GetFirstChars, addr 0x295f19c, size 0x38, virtual false, abstract: false, final false
  inline ::StringW GetFirstChars(::System::Globalization::CultureInfo* culture);

  // Ctor Parameters [CppParam { name: "", ty: "RegexFC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexFC(RegexFC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexFC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexFC(RegexFC const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexFC();

public:
  /// @brief Field _cc, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexCharClass* ____cc;

  /// @brief Field _nullable, offset: 0x18, size: 0x1, def value: None
  bool ____nullable;

  /// @brief Field <CaseInsensitive>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____CaseInsensitive_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexFC, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexFC, ____cc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexFC, ____nullable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexFC, ____CaseInsensitive_k__BackingField) == 0x19, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexFC);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexFC*, "System.Text.RegularExpressions", "RegexFC");
