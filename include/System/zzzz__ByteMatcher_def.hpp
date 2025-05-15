#pragma once
// IWYU pragma private; include "System/ByteMatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteMatcher)
namespace System::Collections {
class Hashtable;
}
namespace System {
struct TermInfoStrings;
}
// Forward declare root types
namespace System {
class ByteMatcher;
}
// Write type traits
MARK_REF_PTR_T(::System::ByteMatcher);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ByteMatcher
class CORDL_TYPE ByteMatcher : public ::System::Object {
public:
  // Declarations
  /// @brief Field map, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_map, put = __cordl_internal_set_map)) ::System::Collections::Hashtable* map;

  /// @brief Field starts, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_starts, put = __cordl_internal_set_starts)) ::System::Collections::Hashtable* starts;

  /// @brief Method AddMapping, addr 0x3e416fc, size 0x120, virtual false, abstract: false, final false
  inline void AddMapping(::System::TermInfoStrings key, ::ArrayW<uint8_t, ::Array<uint8_t>*> val);

  /// @brief Method Match, addr 0x3e3e79c, size 0x48c, virtual false, abstract: false, final false
  inline ::System::TermInfoStrings Match(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t offset, int32_t length, ::ByRef<int32_t> used);

  static inline ::System::ByteMatcher* New_ctor();

  /// @brief Method Sort, addr 0x3e4181c, size 0x4, virtual false, abstract: false, final false
  inline void Sort();

  /// @brief Method StartsWith, addr 0x3e3e714, size 0x88, virtual false, abstract: false, final false
  inline bool StartsWith(int32_t c);

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_map() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_map();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_starts() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_starts();

  constexpr void __cordl_internal_set_map(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_starts(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x3e41640, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteMatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByteMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteMatcher(ByteMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteMatcher(ByteMatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2625 };

  /// @brief Field map, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___map;

  /// @brief Field starts, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___starts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ByteMatcher, ___map) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ByteMatcher, ___starts) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ByteMatcher, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ByteMatcher);
DEFINE_IL2CPP_ARG_TYPE(::System::ByteMatcher*, "System", "ByteMatcher");
