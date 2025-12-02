#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexReplacement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexReplacement)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> class WeakReference_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexReplacement;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexReplacement);
// Dependencies System.Object
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.RegexReplacement
class CORDL_TYPE RegexReplacement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Pattern)) ::StringW Pattern;

  /// @brief Field <Pattern>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Pattern_k__BackingField, put = __cordl_internal_set__Pattern_k__BackingField)) ::StringW _Pattern_k__BackingField;

  /// @brief Field _rules, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rules, put = __cordl_internal_set__rules)) ::System::Collections::Generic::List_1<int32_t>* _rules;

  /// @brief Field _strings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__strings, put = __cordl_internal_set__strings)) ::System::Collections::Generic::List_1<::StringW>* _strings;

  /// @brief Method GetOrCreate, addr 0x6176e50, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::RegexReplacement* GetOrCreate(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* replRef, ::StringW replacement,
                                                                                  ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Collections::Hashtable* capnames,
                                                                                  ::System::Text::RegularExpressions::RegexOptions roptions);

  static inline ::System::Text::RegularExpressions::RegexReplacement* New_ctor(::StringW rep, ::System::Text::RegularExpressions::RegexNode* concat, ::System::Collections::Hashtable* _caps);

  /// @brief Method Replace, addr 0x6177358, size 0x3a0, virtual false, abstract: false, final false
  inline ::StringW Replace(::System::Text::RegularExpressions::Regex* regex, ::StringW input, int32_t count, int32_t startat);

  /// @brief Method ReplacementImpl, addr 0x6176f84, size 0x1a0, virtual false, abstract: false, final false
  inline void ReplacementImpl(::System::Text::StringBuilder* sb, ::System::Text::RegularExpressions::Match* match);

  /// @brief Method ReplacementImplRTL, addr 0x6177124, size 0x234, virtual false, abstract: false, final false
  inline void ReplacementImplRTL(::System::Collections::Generic::List_1<::StringW>* al, ::System::Text::RegularExpressions::Match* match);

  constexpr ::StringW const& __cordl_internal_get__Pattern_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Pattern_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__rules() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__rules();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__strings() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__strings();

  constexpr void __cordl_internal_set__Pattern_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__rules(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set__strings(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x617236c, size 0x4e0, virtual false, abstract: false, final false
  inline void _ctor(::StringW rep, ::System::Text::RegularExpressions::RegexNode* concat, ::System::Collections::Hashtable* _caps);

  /// @brief Method get_Pattern, addr 0x6176f7c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Pattern();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexReplacement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexReplacement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexReplacement(RegexReplacement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexReplacement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexReplacement(RegexReplacement const&) = delete;

  /// @brief Field LastGroup offset 0xffffffff size 0x4
  static constexpr int32_t LastGroup{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field LeftPortion offset 0xffffffff size 0x4
  static constexpr int32_t LeftPortion{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field RightPortion offset 0xffffffff size 0x4
  static constexpr int32_t RightPortion{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field Specials offset 0xffffffff size 0x4
  static constexpr int32_t Specials{ static_cast<int32_t>(0x4) };

  /// @brief Field WholeString offset 0xffffffff size 0x4
  static constexpr int32_t WholeString{ static_cast<int32_t>(0xfffffffc) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11093 };

  /// @brief Field _strings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____strings;

  /// @brief Field _rules, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____rules;

  /// @brief Field <Pattern>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Pattern_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::RegexReplacement, ____strings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexReplacement, ____rules) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexReplacement, ____Pattern_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexReplacement, 0x28>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexReplacement);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexReplacement*, "System.Text.RegularExpressions", "RegexReplacement");
