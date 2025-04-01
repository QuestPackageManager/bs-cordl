#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Metadata/SoapParameterAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
CORDL_MODULE_EXPORT(SoapParameterAttribute)
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapParameterAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Metadata::SoapParameterAttribute);
// Dependencies System.Runtime.Remoting.Metadata.SoapAttribute
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// CS Name: System.Runtime.Remoting.Metadata.SoapParameterAttribute
class CORDL_TYPE SoapParameterAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::Metadata::SoapParameterAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3ce0eec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapParameterAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoapParameterAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapParameterAttribute(SoapParameterAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapParameterAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapParameterAttribute(SoapParameterAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3140 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Metadata::SoapParameterAttribute, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Metadata
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapParameterAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapParameterAttribute*, "System.Runtime.Remoting.Metadata", "SoapParameterAttribute");
