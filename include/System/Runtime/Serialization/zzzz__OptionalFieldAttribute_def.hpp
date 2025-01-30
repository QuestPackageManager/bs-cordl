#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/OptionalFieldAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OptionalFieldAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class OptionalFieldAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::OptionalFieldAttribute);
// Dependencies System.Attribute
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.OptionalFieldAttribute
class CORDL_TYPE OptionalFieldAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_VersionAdded)) int32_t VersionAdded;

  /// @brief Field versionAdded, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_versionAdded, put = __cordl_internal_set_versionAdded)) int32_t versionAdded;

  static inline ::System::Runtime::Serialization::OptionalFieldAttribute* New_ctor();

  constexpr int32_t const& __cordl_internal_get_versionAdded() const;

  constexpr int32_t& __cordl_internal_get_versionAdded();

  constexpr void __cordl_internal_set_versionAdded(int32_t value);

  /// @brief Method .ctor, addr 0x3cfe9f8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_VersionAdded, addr 0x3cfea08, size 0x70, virtual false, abstract: false, final false
  inline void set_VersionAdded(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalFieldAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OptionalFieldAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionalFieldAttribute(OptionalFieldAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionalFieldAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionalFieldAttribute(OptionalFieldAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3228 };

  /// @brief Field versionAdded, offset: 0x10, size: 0x4, def value: None
  int32_t ___versionAdded;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::OptionalFieldAttribute, ___versionAdded) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::OptionalFieldAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::OptionalFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OptionalFieldAttribute*, "System.Runtime.Serialization", "OptionalFieldAttribute");
