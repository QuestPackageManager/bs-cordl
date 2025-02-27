#pragma once
// IWYU pragma private; include "Microsoft/CSharp/CodeDomProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CodeDomProvider)
// Forward declare root types
namespace Microsoft::CSharp {
class CodeDomProvider;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::CSharp::CodeDomProvider);
// Dependencies System.Object
namespace Microsoft::CSharp {
// Is value type: false
// CS Name: Microsoft.CSharp.CodeDomProvider
class CORDL_TYPE CodeDomProvider : public ::System::Object {
public:
  // Declarations
  static inline ::Microsoft::CSharp::CodeDomProvider* New_ctor();

  /// @brief Method .ctor, addr 0x4243104, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CodeDomProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CodeDomProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CodeDomProvider(CodeDomProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CodeDomProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CodeDomProvider(CodeDomProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7149 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::CSharp::CodeDomProvider, 0x10>, "Size mismatch!");

} // namespace Microsoft::CSharp
NEED_NO_BOX(::Microsoft::CSharp::CodeDomProvider);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::CSharp::CodeDomProvider*, "Microsoft.CSharp", "CodeDomProvider");
