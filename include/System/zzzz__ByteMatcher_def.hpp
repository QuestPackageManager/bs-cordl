#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System::ByteMatcher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2623))
// CS Name: ::System::ByteMatcher*
class CORDL_TYPE ByteMatcher : public ::System::Object {
public:
  // Declarations
  /// @brief Field map, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_map, put = __cordl_internal_set_map))::System::Collections::Hashtable* map;

  /// @brief Field starts, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_starts, put = __cordl_internal_set_starts))::System::Collections::Hashtable* starts;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_map();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_map() const;

  constexpr void __cordl_internal_set_map(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_starts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_starts() const;

  constexpr void __cordl_internal_set_starts(::System::Collections::Hashtable* value);

  /// @brief Method AddMapping, addr 0x2604f80, size 0x120, virtual false, abstract: false, final false
  inline void AddMapping(::System::TermInfoStrings key, ::ArrayW<uint8_t, ::Array<uint8_t>*> val);

  /// @brief Method Sort, addr 0x26050a0, size 0x4, virtual false, abstract: false, final false
  inline void Sort();

  /// @brief Method StartsWith, addr 0x2601fa4, size 0x88, virtual false, abstract: false, final false
  inline bool StartsWith(int32_t c);

  /// @brief Method Match, addr 0x260202c, size 0x48c, virtual false, abstract: false, final false
  inline ::System::TermInfoStrings Match(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t offset, int32_t length, ByRef<int32_t> used);

  static inline ::System::ByteMatcher* New_ctor();

  /// @brief Method .ctor, addr 0x2604eb8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ByteMatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteMatcher(ByteMatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteMatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteMatcher(ByteMatcher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteMatcher();

public:
  /// @brief Field map, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___map;

  /// @brief Field starts, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___starts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ByteMatcher, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ByteMatcher, ___map) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ByteMatcher, ___starts) == 0x18, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::ByteMatcher);
DEFINE_IL2CPP_ARG_TYPE(::System::ByteMatcher*, "System", "ByteMatcher");
