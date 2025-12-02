#pragma once
// IWYU pragma private; include "Unity/Collections/BitField32DebugView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__BitField32_def.hpp"
CORDL_MODULE_EXPORT(BitField32DebugView)
namespace Unity::Collections {
struct BitField32;
}
// Forward declare root types
namespace Unity::Collections {
class BitField32DebugView;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::BitField32DebugView);
// Dependencies System.Object, Unity.Collections.BitField32
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.BitField32DebugView
class CORDL_TYPE BitField32DebugView : public ::System::Object {
public:
  // Declarations
  /// @brief Field BitField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_BitField, put = __cordl_internal_set_BitField)) ::Unity::Collections::BitField32 BitField;

  __declspec(property(get = get_Bits)) ::ArrayW<bool, ::Array<bool>*> Bits;

  static inline ::Unity::Collections::BitField32DebugView* New_ctor(::Unity::Collections::BitField32 bitfield);

  constexpr ::Unity::Collections::BitField32 const& __cordl_internal_get_BitField() const;

  constexpr ::Unity::Collections::BitField32& __cordl_internal_get_BitField();

  constexpr void __cordl_internal_set_BitField(::Unity::Collections::BitField32 value);

  /// @brief Method .ctor, addr 0x628d908, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::BitField32 bitfield);

  /// @brief Method get_Bits, addr 0x628d910, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_Bits();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitField32DebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitField32DebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitField32DebugView(BitField32DebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitField32DebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitField32DebugView(BitField32DebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15508 };

  /// @brief Field BitField, offset: 0x10, size: 0x4, def value: None
  ::Unity::Collections::BitField32 ___BitField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::BitField32DebugView, ___BitField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::BitField32DebugView, 0x18>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::BitField32DebugView);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::BitField32DebugView*, "Unity.Collections", "BitField32DebugView");
