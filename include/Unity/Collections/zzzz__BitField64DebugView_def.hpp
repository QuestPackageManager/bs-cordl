#pragma once
// IWYU pragma private; include "Unity/Collections/BitField64DebugView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__BitField64_def.hpp"
CORDL_MODULE_EXPORT(BitField64DebugView)
namespace Unity::Collections {
struct BitField64;
}
// Forward declare root types
namespace Unity::Collections {
class BitField64DebugView;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::BitField64DebugView);
// Dependencies System.Object, Unity.Collections.BitField64
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.BitField64DebugView
class CORDL_TYPE BitField64DebugView : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Bits)) ::ArrayW<bool, ::Array<bool>*> Bits;

  /// @brief Field Data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data)) ::Unity::Collections::BitField64 Data;

  static inline ::Unity::Collections::BitField64DebugView* New_ctor(::Unity::Collections::BitField64 data);

  constexpr ::Unity::Collections::BitField64 const& __cordl_internal_get_Data() const;

  constexpr ::Unity::Collections::BitField64& __cordl_internal_get_Data();

  constexpr void __cordl_internal_set_Data(::Unity::Collections::BitField64 value);

  /// @brief Method .ctor, addr 0x628dbfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::BitField64 data);

  /// @brief Method get_Bits, addr 0x628dc04, size 0x8c, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_Bits();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitField64DebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitField64DebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitField64DebugView(BitField64DebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitField64DebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitField64DebugView(BitField64DebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15510 };

  /// @brief Field Data, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::BitField64 ___Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::BitField64DebugView, ___Data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::BitField64DebugView, 0x18>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::BitField64DebugView);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::BitField64DebugView*, "Unity.Collections", "BitField64DebugView");
