#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICommandLineArgsProvider)
// Forward declare root types
namespace GlobalNamespace {
class ICommandLineArgsProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ICommandLineArgsProvider);
// Type: ::ICommandLineArgsProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5227))
// CS Name: ::ICommandLineArgsProvider*
class CORDL_TYPE ICommandLineArgsProvider {
public:
  // Declarations
  /// @brief Method GetCommandLineArgs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCommandLineArgs();

  // Ctor Parameters [CppParam { name: "", ty: "ICommandLineArgsProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICommandLineArgsProvider(ICommandLineArgsProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICommandLineArgsProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICommandLineArgsProvider(ICommandLineArgsProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICommandLineArgsProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICommandLineArgsProvider*, "", "ICommandLineArgsProvider");
