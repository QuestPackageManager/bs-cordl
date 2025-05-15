#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/NativeContainerIsReadOnlyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeContainerIsReadOnlyAttribute)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerIsReadOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute);
// Dependencies System.Attribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeContainerIsReadOnlyAttribute
class CORDL_TYPE NativeContainerIsReadOnlyAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4861e14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeContainerIsReadOnlyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsReadOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeContainerIsReadOnlyAttribute(NativeContainerIsReadOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsReadOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeContainerIsReadOnlyAttribute(NativeContainerIsReadOnlyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute*, "Unity.Collections.LowLevel.Unsafe", "NativeContainerIsReadOnlyAttribute");
