#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeDisableParallelForRestrictionAttribute)
// Forward declare root types
namespace Unity::Collections {
class NativeDisableParallelForRestrictionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeDisableParallelForRestrictionAttribute);
// Type: Unity.Collections::NativeDisableParallelForRestrictionAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections {
// Is value type: false
// CS Name: ::Unity.Collections::NativeDisableParallelForRestrictionAttribute*
class CORDL_TYPE NativeDisableParallelForRestrictionAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::NativeDisableParallelForRestrictionAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x31cbd54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeDisableParallelForRestrictionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeDisableParallelForRestrictionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeDisableParallelForRestrictionAttribute(NativeDisableParallelForRestrictionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeDisableParallelForRestrictionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeDisableParallelForRestrictionAttribute(NativeDisableParallelForRestrictionAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeDisableParallelForRestrictionAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeDisableParallelForRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeDisableParallelForRestrictionAttribute*, "Unity.Collections", "NativeDisableParallelForRestrictionAttribute");
