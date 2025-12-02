#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRKtxTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRKtxTexture)
namespace GlobalNamespace {
struct OVRTextureData;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRKtxTexture;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRKtxTexture);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRKtxTexture
class CORDL_TYPE OVRKtxTexture : public ::System::Object {
public:
  // Declarations
  /// @brief Method Load, addr 0x5c4d794, size 0x264, virtual false, abstract: false, final false
  static inline bool Load(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<::GlobalNamespace::OVRTextureData> ktxData);

  static inline ::GlobalNamespace::OVRKtxTexture* New_ctor();

  /// @brief Method .ctor, addr 0x5c4d9f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRKtxTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRKtxTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRKtxTexture(OVRKtxTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRKtxTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRKtxTexture(OVRKtxTexture const&) = delete;

  /// @brief Field KTX_TTF_ASTC_4x4_RGBA offset 0xffffffff size 0x4
  static constexpr uint32_t KTX_TTF_ASTC_4x4_RGBA{ static_cast<uint32_t>(0xau) };

  /// @brief Field KTX_TTF_BC7_RGBA offset 0xffffffff size 0x4
  static constexpr uint32_t KTX_TTF_BC7_RGBA{ static_cast<uint32_t>(0x6u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7202 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRKtxTexture, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRKtxTexture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRKtxTexture*, "", "OVRKtxTexture");
