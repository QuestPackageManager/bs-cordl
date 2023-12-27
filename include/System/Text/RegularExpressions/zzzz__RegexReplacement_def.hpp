#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexReplacement)
namespace System::Text::RegularExpressions {
class RegexNode;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
template <typename T> class WeakReference_1;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Text::RegularExpressions {
class Match;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexReplacement;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexReplacement);
// Type: System.Text.RegularExpressions::RegexReplacement
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8928))
// CS Name: ::System.Text.RegularExpressions::RegexReplacement*
class CORDL_TYPE RegexReplacement : public ::System::Object {
public:
  // Declarations
  /// @brief Field _strings, offset 0x10, size 0x8
  __declspec(property(get = __get__strings, put = __set__strings))::System::Collections::Generic::List_1<::StringW>* _strings;

  /// @brief Field _rules, offset 0x18, size 0x8
  __declspec(property(get = __get__rules, put = __set__rules))::System::Collections::Generic::List_1<int32_t>* _rules;

  /// @brief Field <Pattern>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Pattern_k__BackingField, put = __set__Pattern_k__BackingField))::StringW _Pattern_k__BackingField;

  __declspec(property(get = get_Pattern))::StringW Pattern;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__strings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__strings() const;

  constexpr void __set__strings(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __get__rules();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __get__rules() const;

  constexpr void __set__rules(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr ::StringW& __get__Pattern_k__BackingField();

  constexpr ::StringW const& __get__Pattern_k__BackingField() const;

  constexpr void __set__Pattern_k__BackingField(::StringW value);

  static inline ::System::Text::RegularExpressions::RegexReplacement* New_ctor(::StringW rep, ::System::Text::RegularExpressions::RegexNode* concat, ::System::Collections::Hashtable* _caps);

  /// @brief Method .ctor addr 0x29648ac size 0x4e8 virtual false final false
  inline void _ctor(::StringW rep, ::System::Text::RegularExpressions::RegexNode* concat, ::System::Collections::Hashtable* _caps);

  /// @brief Method GetOrCreate addr 0x2969340 size 0x114 virtual false final false
  static inline ::System::Text::RegularExpressions::RegexReplacement* GetOrCreate(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* replRef, ::StringW replacement,
                                                                                  ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Collections::Hashtable* capnames,
                                                                                  ::System::Text::RegularExpressions::RegexOptions roptions);

  /// @brief Method get_Pattern addr 0x2969454 size 0x8 virtual false final false
  inline ::StringW get_Pattern();

  /// @brief Method ReplacementImpl addr 0x296945c size 0x1a4 virtual false final false
  inline void ReplacementImpl(::System::Text::StringBuilder* sb, ::System::Text::RegularExpressions::Match* match);

  /// @brief Method ReplacementImplRTL addr 0x2969600 size 0x230 virtual false final false
  inline void ReplacementImplRTL(::System::Collections::Generic::List_1<::StringW>* al, ::System::Text::RegularExpressions::Match* match);

  /// @brief Method Replace addr 0x2969830 size 0x3a0 virtual false final false
  inline ::StringW Replace(::System::Text::RegularExpressions::Regex* regex, ::StringW input, int32_t count, int32_t startat);

  // Ctor Parameters [CppParam { name: "", ty: "RegexReplacement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexReplacement(RegexReplacement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexReplacement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexReplacement(RegexReplacement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexReplacement();

public:
  /// @brief Field _strings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____strings;

  /// @brief Field _rules, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ____rules;

  /// @brief Field <Pattern>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Pattern_k__BackingField;

  /// @brief Field Specials offset 0xffffffff size 0x4
  static constexpr int32_t Specials{ static_cast<int32_t>(0x4) };

  /// @brief Field LeftPortion offset 0xffffffff size 0x4
  static constexpr int32_t LeftPortion{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field RightPortion offset 0xffffffff size 0x4
  static constexpr int32_t RightPortion{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field LastGroup offset 0xffffffff size 0x4
  static constexpr int32_t LastGroup{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field WholeString offset 0xffffffff size 0x4
  static constexpr int32_t WholeString{ static_cast<int32_t>(0xfffffffc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexReplacement, 0x28>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexReplacement);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexReplacement*, "System.Text.RegularExpressions", "RegexReplacement");
