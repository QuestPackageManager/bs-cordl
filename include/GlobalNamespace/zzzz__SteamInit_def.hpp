#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasePlatformInit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SteamInit)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamInit);
// Type: ::SteamInit
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SteamInit*
class CORDL_TYPE SteamInit : public ::GlobalNamespace::BasePlatformInit {
public:
  // Declarations
  /// @brief Method GetAppVersionAsync, addr 0x26e7404, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAppVersionAsync();

  /// @brief Method InitializeInternalAsync, addr 0x26e739c, size 0x68, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* InitializeInternalAsync();

  static inline ::GlobalNamespace::SteamInit* New_ctor();

  /// @brief Method .ctor, addr 0x26e748c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamInit(SteamInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamInit(SteamInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17885 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamInit, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamInit*, "", "SteamInit");
