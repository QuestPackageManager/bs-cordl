#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexCode.hpp"
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class RegexBoyerMoore;
}
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexCode;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexCode);
// Type: System.Text.RegularExpressions::RegexCode
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 93, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: ::System.Text.RegularExpressions::RegexCode*
class CORDL_TYPE RegexCode : public ::System::Object {
public:
  // Declarations
  /// @brief Field Anchors, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_Anchors, put = __cordl_internal_set_Anchors)) int32_t Anchors;

  /// @brief Field BMPrefix, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_BMPrefix, put = __cordl_internal_set_BMPrefix)) ::System::Text::RegularExpressions::RegexBoyerMoore* BMPrefix;

  /// @brief Field CapSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_CapSize, put = __cordl_internal_set_CapSize)) int32_t CapSize;

  /// @brief Field Caps, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Caps, put = __cordl_internal_set_Caps)) ::System::Collections::Hashtable* Caps;

  /// @brief Field Codes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Codes, put = __cordl_internal_set_Codes)) ::ArrayW<int32_t, ::Array<int32_t>*> Codes;

  /// @brief Field FCPrefix, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_FCPrefix, put = __cordl_internal_set_FCPrefix)) ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> FCPrefix;

  /// @brief Field RightToLeft, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_RightToLeft, put = __cordl_internal_set_RightToLeft)) bool RightToLeft;

  /// @brief Field Strings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Strings, put = __cordl_internal_set_Strings)) ::ArrayW<::StringW, ::Array<::StringW>*> Strings;

  /// @brief Field TrackCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_TrackCount, put = __cordl_internal_set_TrackCount)) int32_t TrackCount;

  static inline ::System::Text::RegularExpressions::RegexCode* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist, int32_t trackcount,
                                                                        ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix,
                                                                        ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> fcPrefix, int32_t anchors, bool rightToLeft);

  /// @brief Method OpcodeBacktracks, addr 0x43a6d40, size 0x30, virtual false, abstract: false, final false
  static inline bool OpcodeBacktracks(int32_t Op);

  constexpr int32_t const& __cordl_internal_get_Anchors() const;

  constexpr int32_t& __cordl_internal_get_Anchors();

  constexpr ::System::Text::RegularExpressions::RegexBoyerMoore*& __cordl_internal_get_BMPrefix();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexBoyerMoore*> const& __cordl_internal_get_BMPrefix() const;

  constexpr int32_t const& __cordl_internal_get_CapSize() const;

  constexpr int32_t& __cordl_internal_get_CapSize();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Caps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_Caps() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_Codes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_Codes();

  constexpr ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> const& __cordl_internal_get_FCPrefix() const;

  constexpr ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>& __cordl_internal_get_FCPrefix();

  constexpr bool const& __cordl_internal_get_RightToLeft() const;

  constexpr bool& __cordl_internal_get_RightToLeft();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Strings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Strings();

  constexpr int32_t const& __cordl_internal_get_TrackCount() const;

  constexpr int32_t& __cordl_internal_get_TrackCount();

  constexpr void __cordl_internal_set_Anchors(int32_t value);

  constexpr void __cordl_internal_set_BMPrefix(::System::Text::RegularExpressions::RegexBoyerMoore* value);

  constexpr void __cordl_internal_set_CapSize(int32_t value);

  constexpr void __cordl_internal_set_Caps(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_Codes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_FCPrefix(::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> value);

  constexpr void __cordl_internal_set_RightToLeft(bool value);

  constexpr void __cordl_internal_set_Strings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_TrackCount(int32_t value);

  /// @brief Method .ctor, addr 0x43a6c70, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist, int32_t trackcount, ::System::Collections::Hashtable* caps,
                    int32_t capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix, ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> fcPrefix, int32_t anchors,
                    bool rightToLeft);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexCode(RegexCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexCode(RegexCode const&) = delete;

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

  /// @brief Field Back offset 0xffffffff size 0x4
  static constexpr int32_t Back{ static_cast<int32_t>(0x80) };

  /// @brief Field Back2 offset 0xffffffff size 0x4
  static constexpr int32_t Back2{ static_cast<int32_t>(0x100) };

  /// @brief Field Backjump offset 0xffffffff size 0x4
  static constexpr int32_t Backjump{ static_cast<int32_t>(0x23) };

  /// @brief Field Beginning offset 0xffffffff size 0x4
  static constexpr int32_t Beginning{ static_cast<int32_t>(0x12) };

  /// @brief Field Bol offset 0xffffffff size 0x4
  static constexpr int32_t Bol{ static_cast<int32_t>(0xe) };

  /// @brief Field Boundary offset 0xffffffff size 0x4
  static constexpr int32_t Boundary{ static_cast<int32_t>(0x10) };

  /// @brief Field Branchcount offset 0xffffffff size 0x4
  static constexpr int32_t Branchcount{ static_cast<int32_t>(0x1c) };

  /// @brief Field Branchmark offset 0xffffffff size 0x4
  static constexpr int32_t Branchmark{ static_cast<int32_t>(0x18) };

  /// @brief Field Capturemark offset 0xffffffff size 0x4
  static constexpr int32_t Capturemark{ static_cast<int32_t>(0x20) };

  /// @brief Field Ci offset 0xffffffff size 0x4
  static constexpr int32_t Ci{ static_cast<int32_t>(0x200) };

  /// @brief Field ECMABoundary offset 0xffffffff size 0x4
  static constexpr int32_t ECMABoundary{ static_cast<int32_t>(0x29) };

  /// @brief Field End offset 0xffffffff size 0x4
  static constexpr int32_t End{ static_cast<int32_t>(0x15) };

  /// @brief Field EndZ offset 0xffffffff size 0x4
  static constexpr int32_t EndZ{ static_cast<int32_t>(0x14) };

  /// @brief Field Eol offset 0xffffffff size 0x4
  static constexpr int32_t Eol{ static_cast<int32_t>(0xf) };

  /// @brief Field Forejump offset 0xffffffff size 0x4
  static constexpr int32_t Forejump{ static_cast<int32_t>(0x24) };

  /// @brief Field Getmark offset 0xffffffff size 0x4
  static constexpr int32_t Getmark{ static_cast<int32_t>(0x21) };

  /// @brief Field Goto offset 0xffffffff size 0x4
  static constexpr int32_t Goto{ static_cast<int32_t>(0x26) };

  /// @brief Field Lazybranch offset 0xffffffff size 0x4
  static constexpr int32_t Lazybranch{ static_cast<int32_t>(0x17) };

  /// @brief Field Lazybranchcount offset 0xffffffff size 0x4
  static constexpr int32_t Lazybranchcount{ static_cast<int32_t>(0x1d) };

  /// @brief Field Lazybranchmark offset 0xffffffff size 0x4
  static constexpr int32_t Lazybranchmark{ static_cast<int32_t>(0x19) };

  /// @brief Field Mask offset 0xffffffff size 0x4
  static constexpr int32_t Mask{ static_cast<int32_t>(0x3f) };

  /// @brief Field Multi offset 0xffffffff size 0x4
  static constexpr int32_t Multi{ static_cast<int32_t>(0xc) };

  /// @brief Field NonECMABoundary offset 0xffffffff size 0x4
  static constexpr int32_t NonECMABoundary{ static_cast<int32_t>(0x2a) };

  /// @brief Field Nonboundary offset 0xffffffff size 0x4
  static constexpr int32_t Nonboundary{ static_cast<int32_t>(0x11) };

  /// @brief Field Nothing offset 0xffffffff size 0x4
  static constexpr int32_t Nothing{ static_cast<int32_t>(0x16) };

  /// @brief Field Notone offset 0xffffffff size 0x4
  static constexpr int32_t Notone{ static_cast<int32_t>(0xa) };

  /// @brief Field Notonelazy offset 0xffffffff size 0x4
  static constexpr int32_t Notonelazy{ static_cast<int32_t>(0x7) };

  /// @brief Field Notoneloop offset 0xffffffff size 0x4
  static constexpr int32_t Notoneloop{ static_cast<int32_t>(0x4) };

  /// @brief Field Notonerep offset 0xffffffff size 0x4
  static constexpr int32_t Notonerep{ static_cast<int32_t>(0x1) };

  /// @brief Field Nullcount offset 0xffffffff size 0x4
  static constexpr int32_t Nullcount{ static_cast<int32_t>(0x1a) };

  /// @brief Field Nullmark offset 0xffffffff size 0x4
  static constexpr int32_t Nullmark{ static_cast<int32_t>(0x1e) };

  /// @brief Field One offset 0xffffffff size 0x4
  static constexpr int32_t One{ static_cast<int32_t>(0x9) };

  /// @brief Field Onelazy offset 0xffffffff size 0x4
  static constexpr int32_t Onelazy{ static_cast<int32_t>(0x6) };

  /// @brief Field Oneloop offset 0xffffffff size 0x4
  static constexpr int32_t Oneloop{ static_cast<int32_t>(0x3) };

  /// @brief Field Onerep offset 0xffffffff size 0x4
  static constexpr int32_t Onerep{ static_cast<int32_t>(0x0) };

  /// @brief Field Prune offset 0xffffffff size 0x4
  static constexpr int32_t Prune{ static_cast<int32_t>(0x27) };

  /// @brief Field Ref offset 0xffffffff size 0x4
  static constexpr int32_t Ref{ static_cast<int32_t>(0xd) };

  /// @brief Field Rtl offset 0xffffffff size 0x4
  static constexpr int32_t Rtl{ static_cast<int32_t>(0x40) };

  /// @brief Field Set offset 0xffffffff size 0x4
  static constexpr int32_t Set{ static_cast<int32_t>(0xb) };

  /// @brief Field Setcount offset 0xffffffff size 0x4
  static constexpr int32_t Setcount{ static_cast<int32_t>(0x1b) };

  /// @brief Field Setjump offset 0xffffffff size 0x4
  static constexpr int32_t Setjump{ static_cast<int32_t>(0x22) };

  /// @brief Field Setlazy offset 0xffffffff size 0x4
  static constexpr int32_t Setlazy{ static_cast<int32_t>(0x8) };

  /// @brief Field Setloop offset 0xffffffff size 0x4
  static constexpr int32_t Setloop{ static_cast<int32_t>(0x5) };

  /// @brief Field Setmark offset 0xffffffff size 0x4
  static constexpr int32_t Setmark{ static_cast<int32_t>(0x1f) };

  /// @brief Field Setrep offset 0xffffffff size 0x4
  static constexpr int32_t Setrep{ static_cast<int32_t>(0x2) };

  /// @brief Field Start offset 0xffffffff size 0x4
  static constexpr int32_t Start{ static_cast<int32_t>(0x13) };

  /// @brief Field Stop offset 0xffffffff size 0x4
  static constexpr int32_t Stop{ static_cast<int32_t>(0x28) };

  /// @brief Field Testref offset 0xffffffff size 0x4
  static constexpr int32_t Testref{ static_cast<int32_t>(0x25) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9204 };

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
