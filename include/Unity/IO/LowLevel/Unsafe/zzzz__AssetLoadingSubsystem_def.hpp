#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/AssetLoadingSubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssetLoadingSubsystem)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct AssetLoadingSubsystem;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem);
// Dependencies
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.IO.LowLevel.Unsafe.AssetLoadingSubsystem
struct CORDL_TYPE AssetLoadingSubsystem {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AssetLoadingSubsystem_Unwrapped
  enum struct __AssetLoadingSubsystem_Unwrapped : int32_t {
    __E_Other = static_cast<int32_t>(0x0),
    __E_Texture = static_cast<int32_t>(0x1),
    __E_VirtualTexture = static_cast<int32_t>(0x2),
    __E_Mesh = static_cast<int32_t>(0x3),
    __E_Audio = static_cast<int32_t>(0x4),
    __E_Scripts = static_cast<int32_t>(0x5),
    __E_EntitiesScene = static_cast<int32_t>(0x6),
    __E_EntitiesStreamBinaryReader = static_cast<int32_t>(0x7),
    __E_FileInfo = static_cast<int32_t>(0x8),
    __E_ContentLoading = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AssetLoadingSubsystem_Unwrapped() const noexcept {
    return static_cast<__AssetLoadingSubsystem_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetLoadingSubsystem();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AssetLoadingSubsystem(int32_t value__) noexcept;

  /// @brief Field Audio value: I32(4)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Audio;

  /// @brief Field ContentLoading value: I32(9)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const ContentLoading;

  /// @brief Field EntitiesScene value: I32(6)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const EntitiesScene;

  /// @brief Field EntitiesStreamBinaryReader value: I32(7)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const EntitiesStreamBinaryReader;

  /// @brief Field FileInfo value: I32(8)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const FileInfo;

  /// @brief Field Mesh value: I32(3)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Mesh;

  /// @brief Field Other value: I32(0)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Other;

  /// @brief Field Scripts value: I32(5)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Scripts;

  /// @brief Field Texture value: I32(1)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Texture;

  /// @brief Field VirtualTexture value: I32(2)
  static ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const VirtualTexture;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10582 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, 0x4>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, "Unity.IO.LowLevel.Unsafe", "AssetLoadingSubsystem");
