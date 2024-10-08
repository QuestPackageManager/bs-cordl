#pragma once
// IWYU pragma private; include "System/Runtime/Versioning/TargetFrameworkAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TargetFrameworkAttribute)
// Forward declare root types
namespace System::Runtime::Versioning {
class TargetFrameworkAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Versioning::TargetFrameworkAttribute);
// Type: System.Runtime.Versioning::TargetFrameworkAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Versioning {
// Is value type: false
// CS Name: ::System.Runtime.Versioning::TargetFrameworkAttribute*
class CORDL_TYPE TargetFrameworkAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_FrameworkDisplayName)) ::StringW FrameworkDisplayName;

  /// @brief Field _frameworkDisplayName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__frameworkDisplayName, put = __cordl_internal_set__frameworkDisplayName)) ::StringW _frameworkDisplayName;

  /// @brief Field _frameworkName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__frameworkName, put = __cordl_internal_set__frameworkName)) ::StringW _frameworkName;

  static inline ::System::Runtime::Versioning::TargetFrameworkAttribute* New_ctor(::StringW frameworkName);

  constexpr ::StringW const& __cordl_internal_get__frameworkDisplayName() const;

  constexpr ::StringW& __cordl_internal_get__frameworkDisplayName();

  constexpr ::StringW const& __cordl_internal_get__frameworkName() const;

  constexpr ::StringW& __cordl_internal_get__frameworkName();

  constexpr void __cordl_internal_set__frameworkDisplayName(::StringW value);

  constexpr void __cordl_internal_set__frameworkName(::StringW value);

  /// @brief Method .ctor, addr 0x3c7d7f0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW frameworkName);

  /// @brief Method set_FrameworkDisplayName, addr 0x3c7d864, size 0x8, virtual false, abstract: false, final false
  inline void set_FrameworkDisplayName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TargetFrameworkAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TargetFrameworkAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TargetFrameworkAttribute(TargetFrameworkAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TargetFrameworkAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TargetFrameworkAttribute(TargetFrameworkAttribute const&) = delete;

  /// @brief Field _frameworkName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____frameworkName;

  /// @brief Field _frameworkDisplayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____frameworkDisplayName;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3191 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Versioning::TargetFrameworkAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Versioning::TargetFrameworkAttribute, ____frameworkName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Versioning::TargetFrameworkAttribute, ____frameworkDisplayName) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Versioning
NEED_NO_BOX(::System::Runtime::Versioning::TargetFrameworkAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Versioning::TargetFrameworkAttribute*, "System.Runtime.Versioning", "TargetFrameworkAttribute");
