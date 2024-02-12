#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentCommandLineArgsProvider)
namespace GlobalNamespace {
class ICommandLineArgsProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentCommandLineArgsProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentCommandLineArgsProvider);
// Type: ::EnvironmentCommandLineArgsProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5226))
// CS Name: ::EnvironmentCommandLineArgsProvider*
class CORDL_TYPE EnvironmentCommandLineArgsProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::ICommandLineArgsProvider"
  constexpr operator ::GlobalNamespace::ICommandLineArgsProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ICommandLineArgsProvider"
  constexpr ::GlobalNamespace::ICommandLineArgsProvider* i___GlobalNamespace__ICommandLineArgsProvider() noexcept;

  /// @brief Method GetCommandLineArgs, addr 0x2332e8c, size 0x8, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCommandLineArgs();

  static inline ::GlobalNamespace::EnvironmentCommandLineArgsProvider* New_ctor();

  /// @brief Method .ctor, addr 0x2332f14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentCommandLineArgsProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentCommandLineArgsProvider(EnvironmentCommandLineArgsProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentCommandLineArgsProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentCommandLineArgsProvider(EnvironmentCommandLineArgsProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentCommandLineArgsProvider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentCommandLineArgsProvider, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentCommandLineArgsProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentCommandLineArgsProvider*, "", "EnvironmentCommandLineArgsProvider");
