#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Text.RegularExpressions::Match
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8903))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8906))
// CS Name: ::System.Text.RegularExpressions::Match*
class CORDL_TYPE Match : public ::System::Text::RegularExpressions::Group {
public:
  // Declarations
  /// @brief Field _groupcoll, offset 0x40, size 0x8
  __declspec(property(get = __get__groupcoll, put = __set__groupcoll))::System::Text::RegularExpressions::GroupCollection* _groupcoll;

  /// @brief Field _regex, offset 0x48, size 0x8
  __declspec(property(get = __get__regex, put = __set__regex))::System::Text::RegularExpressions::Regex* _regex;

  /// @brief Field _textbeg, offset 0x50, size 0x4
  __declspec(property(get = __get__textbeg, put = __set__textbeg)) int32_t _textbeg;

  /// @brief Field _textpos, offset 0x54, size 0x4
  __declspec(property(get = __get__textpos, put = __set__textpos)) int32_t _textpos;

  /// @brief Field _textend, offset 0x58, size 0x4
  __declspec(property(get = __get__textend, put = __set__textend)) int32_t _textend;

  /// @brief Field _textstart, offset 0x5c, size 0x4
  __declspec(property(get = __get__textstart, put = __set__textstart)) int32_t _textstart;

  /// @brief Field _matches, offset 0x60, size 0x8
  __declspec(property(get = __get__matches, put = __set__matches))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> _matches;

  /// @brief Field _matchcount, offset 0x68, size 0x8
  __declspec(property(get = __get__matchcount, put = __set__matchcount))::ArrayW<int32_t, ::Array<int32_t>*> _matchcount;

  /// @brief Field _balancing, offset 0x70, size 0x1
  __declspec(property(get = __get__balancing, put = __set__balancing)) bool _balancing;

  /// @brief Field <Empty>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Empty_k__BackingField, put = setStaticF__Empty_k__BackingField))::System::Text::RegularExpressions::Match* _Empty_k__BackingField;

  __declspec(property(get = get_Groups))::System::Text::RegularExpressions::GroupCollection* Groups;

  constexpr ::System::Text::RegularExpressions::GroupCollection*& __get__groupcoll();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::GroupCollection*> const& __get__groupcoll() const;

  constexpr void __set__groupcoll(::System::Text::RegularExpressions::GroupCollection* value);

  constexpr ::System::Text::RegularExpressions::Regex*& __get__regex();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Regex*> const& __get__regex() const;

  constexpr void __set__regex(::System::Text::RegularExpressions::Regex* value);

  constexpr int32_t& __get__textbeg();

  constexpr int32_t const& __get__textbeg() const;

  constexpr void __set__textbeg(int32_t value);

  constexpr int32_t& __get__textpos();

  constexpr int32_t const& __get__textpos() const;

  constexpr void __set__textpos(int32_t value);

  constexpr int32_t& __get__textend();

  constexpr int32_t const& __get__textend() const;

  constexpr void __set__textend(int32_t value);

  constexpr int32_t& __get__textstart();

  constexpr int32_t const& __get__textstart() const;

  constexpr void __set__textstart(int32_t value);

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __get__matches();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __get__matches() const;

  constexpr void __set__matches(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__matchcount();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__matchcount() const;

  constexpr void __set__matchcount(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get__balancing();

  constexpr bool const& __get__balancing() const;

  constexpr void __set__balancing(bool value);

  static inline void setStaticF__Empty_k__BackingField(::System::Text::RegularExpressions::Match* value);

  static inline ::System::Text::RegularExpressions::Match* getStaticF__Empty_k__BackingField();

  static inline ::System::Text::RegularExpressions::Match* New_ctor(::System::Text::RegularExpressions::Regex* regex, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos);

  /// @brief Method .ctor addr 0x294f918 size 0x170 virtual false final false
  inline void _ctor(::System::Text::RegularExpressions::Regex* regex, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos);

  /// @brief Method get_Empty addr 0x294fa88 size 0x58 virtual false final false
  static inline ::System::Text::RegularExpressions::Match* get_Empty();

  /// @brief Method Reset addr 0x294fae0 size 0x64 virtual true final false
  inline void Reset(::System::Text::RegularExpressions::Regex* regex, ::StringW text, int32_t textbeg, int32_t textend, int32_t textstart);

  /// @brief Method get_Groups addr 0x294fb44 size 0x70 virtual true final false
  inline ::System::Text::RegularExpressions::GroupCollection* get_Groups();

  /// @brief Method NextMatch addr 0x294fbb4 size 0x30 virtual false final false
  inline ::System::Text::RegularExpressions::Match* NextMatch();

  /// @brief Method GroupToStringImpl addr 0x294fe74 size 0x198 virtual true final false
  inline ::System::ReadOnlySpan_1<char16_t> GroupToStringImpl(int32_t groupnum);

  /// @brief Method LastGroupToStringImpl addr 0x295000c size 0x28 virtual false final false
  inline ::System::ReadOnlySpan_1<char16_t> LastGroupToStringImpl();

  /// @brief Method AddMatch addr 0x2950034 size 0x224 virtual true final false
  inline void AddMatch(int32_t cap, int32_t start, int32_t len);

  /// @brief Method BalanceMatch addr 0x2950258 size 0xd8 virtual true final false
  inline void BalanceMatch(int32_t cap);

  /// @brief Method RemoveMatch addr 0x2950330 size 0x38 virtual true final false
  inline void RemoveMatch(int32_t cap);

  /// @brief Method IsMatched addr 0x2950368 size 0x90 virtual true final false
  inline bool IsMatched(int32_t cap);

  /// @brief Method MatchIndex addr 0x29503f8 size 0x8c virtual true final false
  inline int32_t MatchIndex(int32_t cap);

  /// @brief Method MatchLength addr 0x2950484 size 0x8c virtual true final false
  inline int32_t MatchLength(int32_t cap);

  /// @brief Method Tidy addr 0x2950510 size 0x164 virtual true final false
  inline void Tidy(int32_t textpos);

  static inline ::System::Text::RegularExpressions::Match* New_ctor();

  /// @brief Method .ctor addr 0x295070c size 0x38 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Match", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Match(Match&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Match", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Match(Match const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Match();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::Match, 0x78>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::Match);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Match*, "System.Text.RegularExpressions", "Match");
