#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__RegexPrefix_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexCode)
namespace System::Text::RegularExpressions {
class RegexBoyerMoore;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexCode;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexCode);
// Type: System.Text.RegularExpressions::RegexCode
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 93, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2448)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4755 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8927))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8919)) CS Name:
// ::System.Text.RegularExpressions::RegexCode*
class CORDL_TYPE RegexCode : public ::System::Object {
public:
  // Declarations
  /// @brief Field Codes, offset 0x10, size 0x8
  __declspec(property(get = __get_Codes, put = __set_Codes))::ArrayW<int32_t, ::Array<int32_t>*> Codes;

  /// @brief Field Strings, offset 0x18, size 0x8
  __declspec(property(get = __get_Strings, put = __set_Strings))::ArrayW<::StringW, ::Array<::StringW>*> Strings;

  /// @brief Field TrackCount, offset 0x20, size 0x4
  __declspec(property(get = __get_TrackCount, put = __set_TrackCount)) int32_t TrackCount;

  /// @brief Field Caps, offset 0x28, size 0x8
  __declspec(property(get = __get_Caps, put = __set_Caps))::System::Collections::Hashtable* Caps;

  /// @brief Field CapSize, offset 0x30, size 0x4
  __declspec(property(get = __get_CapSize, put = __set_CapSize)) int32_t CapSize;

  /// @brief Field FCPrefix, offset 0x38, size 0x18
  __declspec(property(get = __get_FCPrefix, put = __set_FCPrefix))::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> FCPrefix;

  /// @brief Field BMPrefix, offset 0x50, size 0x8
  __declspec(property(get = __get_BMPrefix, put = __set_BMPrefix))::System::Text::RegularExpressions::RegexBoyerMoore* BMPrefix;

  /// @brief Field Anchors, offset 0x58, size 0x4
  __declspec(property(get = __get_Anchors, put = __set_Anchors)) int32_t Anchors;

  /// @brief Field RightToLeft, offset 0x5c, size 0x1
  __declspec(property(get = __get_RightToLeft, put = __set_RightToLeft)) bool RightToLeft;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_Codes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_Codes() const;

  constexpr void __set_Codes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_Strings();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_Strings() const;

  constexpr void __set_Strings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __get_TrackCount();

  constexpr int32_t const& __get_TrackCount() const;

  constexpr void __set_TrackCount(int32_t value);

  constexpr ::System::Collections::Hashtable*& __get_Caps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_Caps() const;

  constexpr void __set_Caps(::System::Collections::Hashtable* value);

  constexpr int32_t& __get_CapSize();

  constexpr int32_t const& __get_CapSize() const;

  constexpr void __set_CapSize(int32_t value);

  constexpr ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>& __get_FCPrefix();

  constexpr ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> const& __get_FCPrefix() const;

  constexpr void __set_FCPrefix(::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> value);

  constexpr ::System::Text::RegularExpressions::RegexBoyerMoore*& __get_BMPrefix();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexBoyerMoore*> const& __get_BMPrefix() const;

  constexpr void __set_BMPrefix(::System::Text::RegularExpressions::RegexBoyerMoore* value);

  constexpr int32_t& __get_Anchors();

  constexpr int32_t const& __get_Anchors() const;

  constexpr void __set_Anchors(int32_t value);

  constexpr bool& __get_RightToLeft();

  constexpr bool const& __get_RightToLeft() const;

  constexpr void __set_RightToLeft(bool value);

  static inline ::System::Text::RegularExpressions::RegexCode* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist, int32_t trackcount,
                                                                        ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix,
                                                                        ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> fcPrefix, int32_t anchors, bool rightToLeft);

  /// @brief Method .ctor, addr 0x295ec68, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist, int32_t trackcount, ::System::Collections::Hashtable* caps,
                    int32_t capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix, ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> fcPrefix, int32_t anchors,
                    bool rightToLeft);

  /// @brief Method OpcodeBacktracks, addr 0x295ed38, size 0x30, virtual false, abstract: false, final false
  static inline bool OpcodeBacktracks(int32_t Op);

  // Ctor Parameters [CppParam { name: "", ty: "RegexCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexCode(RegexCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexCode(RegexCode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexCode();

public:
  /// @brief Field Codes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___Codes;

  /// @brief Field Strings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___Strings;

  /// @brief Field TrackCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___TrackCount;

  /// @brief Field Caps, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___Caps;

  /// @brief Field CapSize, offset: 0x30, size: 0x4, def value: None
  int32_t ___CapSize;

  /// @brief Field FCPrefix, offset: 0x38, size: 0x18, def value: None
  ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> ___FCPrefix;

  /// @brief Field BMPrefix, offset: 0x50, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexBoyerMoore* ___BMPrefix;

  /// @brief Field Anchors, offset: 0x58, size: 0x4, def value: None
  int32_t ___Anchors;

  /// @brief Field RightToLeft, offset: 0x5c, size: 0x1, def value: None
  bool ___RightToLeft;

  /// @brief Field Onerep offset 0xffffffff size 0x4
  static constexpr int32_t Onerep{ static_cast<int32_t>(0x0) };

  /// @brief Field Notonerep offset 0xffffffff size 0x4
  static constexpr int32_t Notonerep{ static_cast<int32_t>(0x1) };

  /// @brief Field Setrep offset 0xffffffff size 0x4
  static constexpr int32_t Setrep{ static_cast<int32_t>(0x2) };

  /// @brief Field Oneloop offset 0xffffffff size 0x4
  static constexpr int32_t Oneloop{ static_cast<int32_t>(0x3) };

  /// @brief Field Notoneloop offset 0xffffffff size 0x4
  static constexpr int32_t Notoneloop{ static_cast<int32_t>(0x4) };

  /// @brief Field Setloop offset 0xffffffff size 0x4
  static constexpr int32_t Setloop{ static_cast<int32_t>(0x5) };

  /// @brief Field Onelazy offset 0xffffffff size 0x4
  static constexpr int32_t Onelazy{ static_cast<int32_t>(0x6) };

  /// @brief Field Notonelazy offset 0xffffffff size 0x4
  static constexpr int32_t Notonelazy{ static_cast<int32_t>(0x7) };

  /// @brief Field Setlazy offset 0xffffffff size 0x4
  static constexpr int32_t Setlazy{ static_cast<int32_t>(0x8) };

  /// @brief Field One offset 0xffffffff size 0x4
  static constexpr int32_t One{ static_cast<int32_t>(0x9) };

  /// @brief Field Notone offset 0xffffffff size 0x4
  static constexpr int32_t Notone{ static_cast<int32_t>(0xa) };

  /// @brief Field Set offset 0xffffffff size 0x4
  static constexpr int32_t Set{ static_cast<int32_t>(0xb) };

  /// @brief Field Multi offset 0xffffffff size 0x4
  static constexpr int32_t Multi{ static_cast<int32_t>(0xc) };

  /// @brief Field Ref offset 0xffffffff size 0x4
  static constexpr int32_t Ref{ static_cast<int32_t>(0xd) };

  /// @brief Field Bol offset 0xffffffff size 0x4
  static constexpr int32_t Bol{ static_cast<int32_t>(0xe) };

  /// @brief Field Eol offset 0xffffffff size 0x4
  static constexpr int32_t Eol{ static_cast<int32_t>(0xf) };

  /// @brief Field Boundary offset 0xffffffff size 0x4
  static constexpr int32_t Boundary{ static_cast<int32_t>(0x10) };

  /// @brief Field Nonboundary offset 0xffffffff size 0x4
  static constexpr int32_t Nonboundary{ static_cast<int32_t>(0x11) };

  /// @brief Field Beginning offset 0xffffffff size 0x4
  static constexpr int32_t Beginning{ static_cast<int32_t>(0x12) };

  /// @brief Field Start offset 0xffffffff size 0x4
  static constexpr int32_t Start{ static_cast<int32_t>(0x13) };

  /// @brief Field EndZ offset 0xffffffff size 0x4
  static constexpr int32_t EndZ{ static_cast<int32_t>(0x14) };

  /// @brief Field End offset 0xffffffff size 0x4
  static constexpr int32_t End{ static_cast<int32_t>(0x15) };

  /// @brief Field Nothing offset 0xffffffff size 0x4
  static constexpr int32_t Nothing{ static_cast<int32_t>(0x16) };

  /// @brief Field Lazybranch offset 0xffffffff size 0x4
  static constexpr int32_t Lazybranch{ static_cast<int32_t>(0x17) };

  /// @brief Field Branchmark offset 0xffffffff size 0x4
  static constexpr int32_t Branchmark{ static_cast<int32_t>(0x18) };

  /// @brief Field Lazybranchmark offset 0xffffffff size 0x4
  static constexpr int32_t Lazybranchmark{ static_cast<int32_t>(0x19) };

  /// @brief Field Nullcount offset 0xffffffff size 0x4
  static constexpr int32_t Nullcount{ static_cast<int32_t>(0x1a) };

  /// @brief Field Setcount offset 0xffffffff size 0x4
  static constexpr int32_t Setcount{ static_cast<int32_t>(0x1b) };

  /// @brief Field Branchcount offset 0xffffffff size 0x4
  static constexpr int32_t Branchcount{ static_cast<int32_t>(0x1c) };

  /// @brief Field Lazybranchcount offset 0xffffffff size 0x4
  static constexpr int32_t Lazybranchcount{ static_cast<int32_t>(0x1d) };

  /// @brief Field Nullmark offset 0xffffffff size 0x4
  static constexpr int32_t Nullmark{ static_cast<int32_t>(0x1e) };

  /// @brief Field Setmark offset 0xffffffff size 0x4
  static constexpr int32_t Setmark{ static_cast<int32_t>(0x1f) };

  /// @brief Field Capturemark offset 0xffffffff size 0x4
  static constexpr int32_t Capturemark{ static_cast<int32_t>(0x20) };

  /// @brief Field Getmark offset 0xffffffff size 0x4
  static constexpr int32_t Getmark{ static_cast<int32_t>(0x21) };

  /// @brief Field Setjump offset 0xffffffff size 0x4
  static constexpr int32_t Setjump{ static_cast<int32_t>(0x22) };

  /// @brief Field Backjump offset 0xffffffff size 0x4
  static constexpr int32_t Backjump{ static_cast<int32_t>(0x23) };

  /// @brief Field Forejump offset 0xffffffff size 0x4
  static constexpr int32_t Forejump{ static_cast<int32_t>(0x24) };

  /// @brief Field Testref offset 0xffffffff size 0x4
  static constexpr int32_t Testref{ static_cast<int32_t>(0x25) };

  /// @brief Field Goto offset 0xffffffff size 0x4
  static constexpr int32_t Goto{ static_cast<int32_t>(0x26) };

  /// @brief Field Prune offset 0xffffffff size 0x4
  static constexpr int32_t Prune{ static_cast<int32_t>(0x27) };

  /// @brief Field Stop offset 0xffffffff size 0x4
  static constexpr int32_t Stop{ static_cast<int32_t>(0x28) };

  /// @brief Field ECMABoundary offset 0xffffffff size 0x4
  static constexpr int32_t ECMABoundary{ static_cast<int32_t>(0x29) };

  /// @brief Field NonECMABoundary offset 0xffffffff size 0x4
  static constexpr int32_t NonECMABoundary{ static_cast<int32_t>(0x2a) };

  /// @brief Field Mask offset 0xffffffff size 0x4
  static constexpr int32_t Mask{ static_cast<int32_t>(0x3f) };

  /// @brief Field Rtl offset 0xffffffff size 0x4
  static constexpr int32_t Rtl{ static_cast<int32_t>(0x40) };

  /// @brief Field Back offset 0xffffffff size 0x4
  static constexpr int32_t Back{ static_cast<int32_t>(0x80) };

  /// @brief Field Back2 offset 0xffffffff size 0x4
  static constexpr int32_t Back2{ static_cast<int32_t>(0x100) };

  /// @brief Field Ci offset 0xffffffff size 0x4
  static constexpr int32_t Ci{ static_cast<int32_t>(0x200) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexCode, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCode, ___Codes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCode, ___Strings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCode, ___TrackCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCode, ___Caps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCode, ___CapSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCode, ___FCPrefix) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCode, ___BMPrefix) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCode, ___Anchors) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexCode, ___RightToLeft) == 0x5c, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexCode);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexCode*, "System.Text.RegularExpressions", "RegexCode");
