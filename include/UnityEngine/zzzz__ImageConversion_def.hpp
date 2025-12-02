#pragma once
// IWYU pragma private; include "UnityEngine/ImageConversion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageConversion)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Texture2D_EXRFlags;
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
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ImageConversion
class CORDL_TYPE ImageConversion : public ::System::Object {
public:
  // Declarations
  /// @brief Method EncodeToEXR, addr 0x6909028, size 0x160, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToEXR(::UnityEngine::Texture2D* tex, ::UnityEngine::Texture2D_EXRFlags flags);

  /// @brief Method EncodeToEXR_Injected, addr 0x6909188, size 0x54, virtual false, abstract: false, final false
  static inline void EncodeToEXR_Injected(::System::IntPtr tex, ::UnityEngine::Texture2D_EXRFlags flags, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method EncodeToJPG, addr 0x6909020, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToJPG(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToJPG, addr 0x6908e6c, size 0x160, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToJPG(::UnityEngine::Texture2D* tex, int32_t quality);

  /// @brief Method EncodeToJPG_Injected, addr 0x6908fcc, size 0x54, virtual false, abstract: false, final false
  static inline void EncodeToJPG_Injected(::System::IntPtr tex, int32_t quality, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method EncodeToPNG, addr 0x6908cdc, size 0x14c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToPNG(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToPNG_Injected, addr 0x6908e28, size 0x44, virtual false, abstract: false, final false
  static inline void EncodeToPNG_Injected(::System::IntPtr tex, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method EncodeToTGA, addr 0x6908b4c, size 0x14c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodeToTGA(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToTGA_Injected, addr 0x6908c98, size 0x44, virtual false, abstract: false, final false
  static inline void EncodeToTGA_Injected(::System::IntPtr tex, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method LoadImage, addr 0x6909364, size 0x8, virtual false, abstract: false, final false
  static inline bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method LoadImage, addr 0x69091dc, size 0x134, virtual false, abstract: false, final false
  static inline bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, bool markNonReadable);

  /// @brief Method LoadImage_Injected, addr 0x6909310, size 0x54, virtual false, abstract: false, final false
  static inline bool LoadImage_Injected(::System::IntPtr tex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> data, bool markNonReadable);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ImageConversion, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ImageConversion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
