#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadedTextureParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Networking/zzzz__DownloadedTextureFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadedTextureParams)
namespace UnityEngine::Networking {
struct DownloadedTextureFlags;
}
// Forward declare root types
namespace UnityEngine::Networking {
struct DownloadedTextureParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Networking::DownloadedTextureParams);
// Dependencies UnityEngine.Networking.DownloadedTextureFlags
namespace UnityEngine::Networking {
// Is value type: true
// CS Name: UnityEngine.Networking.DownloadedTextureParams
struct CORDL_TYPE DownloadedTextureParams {
public:
  // Declarations
  __declspec(property(put = set_readable)) bool readable;

  /// @brief Method SetFlags, addr 0x6c5fc78, size 0x1c, virtual false, abstract: false, final false
  inline void SetFlags(::UnityEngine::Networking::DownloadedTextureFlags flgs, bool add);

  /// @brief Method get_Default, addr 0x6c5fc60, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Networking::DownloadedTextureParams get_Default();

  /// @brief Method set_readable, addr 0x6c5fc68, size 0x10, virtual false, abstract: false, final false
  inline void set_readable(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadedTextureParams();

  // Ctor Parameters [CppParam { name: "flags", ty: "::UnityEngine::Networking::DownloadedTextureFlags", modifiers: "", def_value: None }, CppParam { name: "mipmapCount", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr DownloadedTextureParams(::UnityEngine::Networking::DownloadedTextureFlags flags, int32_t mipmapCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22968 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field flags, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Networking::DownloadedTextureFlags flags;

  /// @brief Field mipmapCount, offset: 0x4, size: 0x4, def value: None
  int32_t mipmapCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::DownloadedTextureParams, flags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Networking::DownloadedTextureParams, mipmapCount) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadedTextureParams, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Networking
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadedTextureParams, "UnityEngine.Networking", "DownloadedTextureParams");
