#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInstaller)
// Forward declare root types
namespace Zenject {
class IInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IInstaller);
// Type: Zenject::IInstaller
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::IInstaller*
class CORDL_TYPE IInstaller {
public:
  // Declarations
  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  /// @brief Method InstallBindings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InstallBindings();

  /// @brief Method get_IsEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEnabled();

  // Ctor Parameters [CppParam { name: "", ty: "IInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInstaller(IInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInstaller(IInstaller const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IInstaller*, "Zenject", "IInstaller");
