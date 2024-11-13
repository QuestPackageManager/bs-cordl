#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerAppVersionFileManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerAppVersionFileManager)
// Forward declare root types
namespace GlobalNamespace {
class ServerAppVersionFileManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ServerAppVersionFileManager);
// Type: ::ServerAppVersionFileManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ServerAppVersionFileManager*
class CORDL_TYPE ServerAppVersionFileManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method BuildFilePath, addr 0x22b18dc, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW BuildFilePath(::StringW directoryPath);

  static inline ::GlobalNamespace::ServerAppVersionFileManager* New_ctor();

  /// @brief Method ReadAppVersion, addr 0x22b194c, size 0x14, virtual false, abstract: false, final false
  static inline ::StringW ReadAppVersion(::StringW directoryPath);

  /// @brief Method WriteAppVersion, addr 0x22b18c0, size 0x1c, virtual false, abstract: false, final false
  static inline void WriteAppVersion(::StringW directoryPath, ::StringW appVersion);

  /// @brief Method .ctor, addr 0x22b1960, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerAppVersionFileManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerAppVersionFileManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerAppVersionFileManager(ServerAppVersionFileManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerAppVersionFileManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerAppVersionFileManager(ServerAppVersionFileManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14929 };

  /// @brief Field kFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString kFileName{ u"app_version.txt" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerAppVersionFileManager, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerAppVersionFileManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerAppVersionFileManager*, "", "ServerAppVersionFileManager");
