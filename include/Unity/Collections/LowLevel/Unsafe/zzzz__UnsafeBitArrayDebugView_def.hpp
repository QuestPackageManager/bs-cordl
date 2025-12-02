#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeBitArrayDebugView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeBitArray_def.hpp"
CORDL_MODULE_EXPORT(UnsafeBitArrayDebugView)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeBitArray;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeBitArrayDebugView;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView);
// Dependencies System.Object, Unity.Collections.LowLevel.Unsafe.UnsafeBitArray
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeBitArrayDebugView
class CORDL_TYPE UnsafeBitArrayDebugView : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Bits)) ::ArrayW<bool, ::Array<bool>*> Bits;

  /// @brief Field Data, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data)) ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray Data;

  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView* New_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray data);

  constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray const& __cordl_internal_get_Data() const;

  constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray& __cordl_internal_get_Data();

  constexpr void __cordl_internal_set_Data(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray value);

  /// @brief Method .ctor, addr 0x62b093c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray data);

  /// @brief Method get_Bits, addr 0x62b0950, size 0xa0, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_Bits();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeBitArrayDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeBitArrayDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeBitArrayDebugView(UnsafeBitArrayDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeBitArrayDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeBitArrayDebugView(UnsafeBitArrayDebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15717 };

  /// @brief Field Data, offset: 0x10, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray ___Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView, ___Data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView, 0x28>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*, "Unity.Collections.LowLevel.Unsafe", "UnsafeBitArrayDebugView");
