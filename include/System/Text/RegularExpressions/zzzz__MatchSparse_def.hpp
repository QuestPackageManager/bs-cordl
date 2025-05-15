#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/MatchSparse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__Match_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchSparse)
namespace System::Collections {
class Hashtable;
}
namespace System::Text::RegularExpressions {
class GroupCollection;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class MatchSparse;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::MatchSparse);
// Dependencies System.Text.RegularExpressions.Match
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.MatchSparse
class CORDL_TYPE MatchSparse : public ::System::Text::RegularExpressions::Match {
public:
  // Declarations
  __declspec(property(get = get_Groups)) ::System::Text::RegularExpressions::GroupCollection* Groups;

  /// @brief Field _caps, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__caps, put = __cordl_internal_set__caps)) ::System::Collections::Hashtable* _caps;

  static inline ::System::Text::RegularExpressions::MatchSparse* New_ctor(::System::Text::RegularExpressions::Regex* regex, ::System::Collections::Hashtable* caps, int32_t capcount, ::StringW text,
                                                                          int32_t begpos, int32_t len, int32_t startpos);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__caps() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__caps();

  constexpr void __cordl_internal_set__caps(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x4412dc0, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::RegularExpressions::Regex* regex, ::System::Collections::Hashtable* caps, int32_t capcount, ::StringW text, int32_t begpos, int32_t len, int32_t startpos);

  /// @brief Method get_Groups, addr 0x4412e70, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Text::RegularExpressions::GroupCollection* get_Groups();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchSparse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MatchSparse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchSparse(MatchSparse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchSparse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchSparse(MatchSparse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9227 };

  /// @brief Field _caps, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____caps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::MatchSparse, ____caps) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::MatchSparse, 0x80>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::MatchSparse);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::MatchSparse*, "System.Text.RegularExpressions", "MatchSparse");
