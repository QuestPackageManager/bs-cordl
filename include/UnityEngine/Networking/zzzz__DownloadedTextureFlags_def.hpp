#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadedTextureFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadedTextureFlags)
// Forward declare root types
namespace UnityEngine::Networking {
struct DownloadedTextureFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Networking::DownloadedTextureFlags);
// Dependencies
namespace UnityEngine::Networking {
// Is value type: true
// CS Name: UnityEngine.Networking.DownloadedTextureFlags
struct CORDL_TYPE DownloadedTextureFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __DownloadedTextureFlags_Unwrapped
  enum struct __DownloadedTextureFlags_Unwrapped : uint32_t {
    __E_None = static_cast<uint32_t>(0x0u),
    __E_Readable = static_cast<uint32_t>(0x1u),
    __E_MipmapChain = static_cast<uint32_t>(0x2u),
    __E_LinearColorSpace = static_cast<uint32_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DownloadedTextureFlags_Unwrapped() const noexcept {
    return static_cast<__DownloadedTextureFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DownloadedTextureFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr DownloadedTextureFlags(uint32_t value__) noexcept;

  /// @brief Field LinearColorSpace value: U32(4)
  static ::UnityEngine::Networking::DownloadedTextureFlags const LinearColorSpace;

  /// @brief Field MipmapChain value: U32(2)
  static ::UnityEngine::Networking::DownloadedTextureFlags const MipmapChain;

  /// @brief Field None value: U32(0)
  static ::UnityEngine::Networking::DownloadedTextureFlags const None;

  /// @brief Field Readable value: U32(1)
  static ::UnityEngine::Networking::DownloadedTextureFlags const Readable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22941 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Networking::DownloadedTextureFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::DownloadedTextureFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Networking
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadedTextureFlags, "UnityEngine.Networking", "DownloadedTextureFlags");
