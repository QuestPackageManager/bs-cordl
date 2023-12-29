#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageConversion)
namespace UnityEngine {
struct __Texture2D__EXRFlags;
}
namespace UnityEngine {
class Texture2D;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15997))
// CS Name: ::UnityEngine::ImageConversion*
class CORDL_TYPE ImageConversion : public ::System::Object {
public:
  // Declarations
  /// @brief Method EncodeToTGA addr 0x2b92c5c size 0x3c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToTGA(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToPNG addr 0x2b92c98 size 0x3c virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToPNG(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToJPG addr 0x2b92cd4 size 0x44 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToJPG(::UnityEngine::Texture2D* tex, int32_t quality);

  /// @brief Method EncodeToJPG addr 0x2b92d18 size 0x40 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToJPG(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToEXR addr 0x2b92d58 size 0x44 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToEXR(::UnityEngine::Texture2D* tex, ::UnityEngine::__Texture2D__EXRFlags flags);

  /// @brief Method EncodeToEXR addr 0x2b92d9c size 0x40 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToEXR(::UnityEngine::Texture2D* tex);

  /// @brief Method LoadImage addr 0x2b92ddc size 0x54 virtual false final false
  static inline bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, bool markNonReadable);

  /// @brief Method LoadImage addr 0x2b92e30 size 0x48 virtual false final false
  static inline bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  // Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageConversion(ImageConversion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageConversion(ImageConversion const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageConversion();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ImageConversion, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ImageConversion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
