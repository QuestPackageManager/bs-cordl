#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformUserModelUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformUserModelUtils)
// Forward declare root types
namespace GlobalNamespace {
class PlatformUserModelUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformUserModelUtils);
// Type: ::PlatformUserModelUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformUserModelUtils*
class CORDL_TYPE PlatformUserModelUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ValidateXPlatformAccessToken, addr 0x40097d0, size 0x14, virtual false, abstract: false, final false
  static inline bool ValidateXPlatformAccessToken(::StringW token);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformUserModelUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformUserModelUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformUserModelUtils(PlatformUserModelUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformUserModelUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformUserModelUtils(PlatformUserModelUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18635 };

  /// @brief Field kMinimalTokenLength offset 0xffffffff size 0x4
  static constexpr int32_t kMinimalTokenLength{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformUserModelUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformUserModelUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformUserModelUtils*, "", "PlatformUserModelUtils");
