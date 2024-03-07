#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageConversion)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct __Texture2D__EXRFlags;
}
// Forward declare root types
namespace UnityEngine {
class ImageConversion;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ImageConversion);
// Type: UnityEngine::ImageConversion
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ImageConversion*
class CORDL_TYPE ImageConversion : public ::System::Object {
public:
  // Declarations
  /// @brief Method EncodeToEXR, addr 0x2e4e9f8, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToEXR(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToEXR, addr 0x2e4e9b4, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToEXR(::UnityEngine::Texture2D* tex, ::UnityEngine::__Texture2D__EXRFlags flags);

  /// @brief Method EncodeToJPG, addr 0x2e4e974, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToJPG(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToJPG, addr 0x2e4e930, size 0x44, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToJPG(::UnityEngine::Texture2D* tex, int32_t quality);

  /// @brief Method EncodeToPNG, addr 0x2e4e8f4, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToPNG(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToTGA, addr 0x2e4e8b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToTGA(::UnityEngine::Texture2D* tex);

  /// @brief Method LoadImage, addr 0x2e4ea8c, size 0x48, virtual false, abstract: false, final false
  static inline bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method LoadImage, addr 0x2e4ea38, size 0x54, virtual false, abstract: false, final false
  static inline bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, bool markNonReadable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageConversion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageConversion(ImageConversion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageConversion(ImageConversion const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ImageConversion, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ImageConversion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
