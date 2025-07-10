#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/Match.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Match)
namespace System::Text::RegularExpressions {
class GroupCollection;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class Match;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::Match);
// Dependencies System.Text.RegularExpressions.Group
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.Match
class CORDL_TYPE Match : public ::System::Text::RegularExpressions::Group {
public:
  // Declarations
  __declspec(property(get = get_Groups)) ::System::Text::RegularExpressions::GroupCollection* Groups;

  /// @brief Field <Empty>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Empty_k__BackingField, put = setStaticF__Empty_k__BackingField)) ::System::Text::RegularExpressions::Match* _Empty_k__BackingField;

  /// @brief Field _balancing, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__balancing, put = __cordl_internal_set__balancing)) bool _balancing;

  /// @brief Field _groupcoll, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__groupcoll, put = __cordl_internal_set__groupcoll)) ::System::Text::RegularExpressions::GroupCollection* _groupcoll;

  /// @brief Field _matchcount, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__matchcount, put = __cordl_internal_set__matchcount)) ::ArrayW<int32_t, ::Array<int32_t>*> _matchcount;

  /// @brief Field _matches, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__matches, put = __cordl_internal_set__matches)) ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>
      _matches;

  /// @brief Field _regex, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__regex, put = __cordl_internal_set__regex)) ::System::Text::RegularExpressions::Regex* _regex;

  /// @brief Field _textbeg, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__textbeg, put = __cordl_internal_set__textbeg)) int32_t _textbeg;

  /// @brief Field _textend, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__textend, put = __cordl_internal_set__textend)) int32_t _textend;

  /// @brief Field _textpos, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__textpos, put = __cordl_internal_set__textpos)) int32_t _textpos;

  /// @brief Field _textstart, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__textstart, put = __cordl_internal_set__textstart)) int32_t _textstart;

  /// @brief Method AddMatch, addr 0x4412310, size 0x1e0, virtual true, abstract: false, final false
  inline void AddMatch(int32_t cap, int32_t start, int32_t len);

  /// @brief Method BalanceMatch, addr 0x44124f0, size 0xd8, virtual true, abstract: false, final false
  inline void BalanceMatch(int32_t cap);

  /// @brief Method GroupToStringImpl, addr 0x4412150, size 0x198, virtual true, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> GroupToStringImpl(int32_t groupnum);

  /// @brief Method IsMatched, addr 0x4412600, size 0x90, virtual true, abstract: false, final false
  inline bool IsMatched(int32_t cap);

  /// @brief Method LastGroupToStringImpl, addr 0x44122e8, size 0x28, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<char16_t> LastGroupToStringImpl();

  /// @brief Method MatchIndex, addr 0x4412690, size 0x8c, virtual true, abstract: false, final false
  inline int32_t MatchIndex(int32_t cap);

  /// @brief Method MatchLength, addr 0x441271c, size 0x8c, virtual true, abstract: false, final false
  inline int32_t MatchLength(int32_t cap);

  static inline ::System::Text::RegularExpressions::Match* New_ctor();

  static inline ::System::Text::RegularExpressions::Match* New_ctor(::System::Text::RegularExpressions::Regex* regex, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos);

  /// @brief Method NextMatch, addr 0x4411e9c, size 0x30, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Match* NextMatch();

  /// @brief Method RemoveMatch, addr 0x44125c8, size 0x38, virtual true, abstract: false, final false
  inline void RemoveMatch(int32_t cap);

  /// @brief Method Reset, addr 0x4411dd0, size 0x64, virtual true, abstract: false, final false
  inline void Reset(::System::Text::RegularExpressions::Regex* regex, ::StringW text, int32_t textbeg, int32_t textend, int32_t textstart);

  /// @brief Method Tidy, addr 0x44127a8, size 0x170, virtual true, abstract: false, final false
  inline void Tidy(int32_t textpos);

  constexpr bool const& __cordl_internal_get__balancing() const;

  constexpr bool& __cordl_internal_get__balancing();

  constexpr ::System::Text::RegularExpressions::GroupCollection* const& __cordl_internal_get__groupcoll() const;

  constexpr ::System::Text::RegularExpressions::GroupCollection*& __cordl_internal_get__groupcoll();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__matchcount() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__matchcount();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __cordl_internal_get__matches() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __cordl_internal_get__matches();

  constexpr ::System::Text::RegularExpressions::Regex* const& __cordl_internal_get__regex() const;

  constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get__regex();

  constexpr int32_t const& __cordl_internal_get__textbeg() const;

  constexpr int32_t& __cordl_internal_get__textbeg();

  constexpr int32_t const& __cordl_internal_get__textend() const;

  constexpr int32_t& __cordl_internal_get__textend();

  constexpr int32_t const& __cordl_internal_get__textpos() const;

  constexpr int32_t& __cordl_internal_get__textpos();

  constexpr int32_t const& __cordl_internal_get__textstart() const;

  constexpr int32_t& __cordl_internal_get__textstart();

  constexpr void __cordl_internal_set__balancing(bool value);

  constexpr void __cordl_internal_set__groupcoll(::System::Text::RegularExpressions::GroupCollection* value);

  constexpr void __cordl_internal_set__matchcount(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__matches(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr void __cordl_internal_set__regex(::System::Text::RegularExpressions::Regex* value);

  constexpr void __cordl_internal_set__textbeg(int32_t value);

  constexpr void __cordl_internal_set__textend(int32_t value);

  constexpr void __cordl_internal_set__textpos(int32_t value);

  constexpr void __cordl_internal_set__textstart(int32_t value);

  /// @brief Method .ctor, addr 0x44129a8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4411c30, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::Regex* regex, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos);

  static inline ::System::Text::RegularExpressions::Match* getStaticF__Empty_k__BackingField();

  /// @brief Method get_Empty, addr 0x4411d78, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Text::RegularExpressions::Match* get_Empty();

  /// @brief Method get_Groups, addr 0x4411e34, size 0x68, virtual true, abstract: false, final false
  inline ::System::Text::RegularExpressions::GroupCollection* get_Groups();

  static inline void setStaticF__Empty_k__BackingField(::System::Text::RegularExpressions::Match* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Match();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Match", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Match(Match&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Match", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Match(Match const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9226 };

  /// @brief Field _groupcoll, offset: 0x40, size: 0x8, def value: None
  ::System::Text::RegularExpressions::GroupCollection* ____groupcoll;

  /// @brief Field _regex, offset: 0x48, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Regex* ____regex;

  /// @brief Field _textbeg, offset: 0x50, size: 0x4, def value: None
  int32_t ____textbeg;

  /// @brief Field _textpos, offset: 0x54, size: 0x4, def value: None
  int32_t ____textpos;

  /// @brief Field _textend, offset: 0x58, size: 0x4, def value: None
  int32_t ____textend;

  /// @brief Field _textstart, offset: 0x5c, size: 0x4, def value: None
  int32_t ____textstart;

  /// @brief Field _matches, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ____matches;

  /// @brief Field _matchcount, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____matchcount;

  /// @brief Field _balancing, offset: 0x70, size: 0x1, def value: None
  bool ____balancing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::Match, ____groupcoll) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Match, ____regex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Match, ____textbeg) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Match, ____textpos) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Match, ____textend) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Match, ____textstart) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Match, ____matches) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Match, ____matchcount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Match, ____balancing) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::Match, 0x78>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::Match);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Match*, "System.Text.RegularExpressions", "Match");
