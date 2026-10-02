#pragma once
// IWYU pragma private; include "UnityEngine/ImageConversion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ImageConversion)
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
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
MARK_REF_T(::UnityEngine::ImageConversion*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
// [Extension]
// [NativeHeader("Modules/ImageConversion/ScriptBindings/ImageConversion.bindings.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ImageConversion
class CORDL_TYPE ImageConversion : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// [NativeMethod(Name = "ImageConversionBindings::EncodeToEXR", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method EncodeToEXR, addr 0x6f9bda8, size 0x160, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeToEXR(::UnityEngine::Texture2D* tex, ::UnityEngine::Texture2D_EXRFlags flags);

  /// @brief Method EncodeToEXR_Injected, addr 0x6f9bf08, size 0x54, virtual false, abstract: false, final false
  static inline void EncodeToEXR_Injected(::System::IntPtr tex, ::UnityEngine::Texture2D_EXRFlags flags, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [Extension]
  /// @brief Method EncodeToJPG, addr 0x6f9bda0, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D* tex);

  /// [Extension]
  /// [NativeMethod(Name = "ImageConversionBindings::EncodeToJPG", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method EncodeToJPG, addr 0x6f9bbec, size 0x160, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D* tex, int32_t quality);

  /// @brief Method EncodeToJPG_Injected, addr 0x6f9bd4c, size 0x54, virtual false, abstract: false, final false
  static inline void EncodeToJPG_Injected(::System::IntPtr tex, int32_t quality, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [Extension]
  /// [NativeMethod(Name = "ImageConversionBindings::EncodeToPNG", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method EncodeToPNG, addr 0x6f9ba5c, size 0x14c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeToPNG(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToPNG_Injected, addr 0x6f9bba8, size 0x44, virtual false, abstract: false, final false
  static inline void EncodeToPNG_Injected(::System::IntPtr tex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [Extension]
  /// [NativeMethod(Name = "ImageConversionBindings::EncodeToTGA", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method EncodeToTGA, addr 0x6f9b8cc, size 0x14c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> EncodeToTGA(::UnityEngine::Texture2D* tex);

  /// @brief Method EncodeToTGA_Injected, addr 0x6f9ba18, size 0x44, virtual false, abstract: false, final false
  static inline void EncodeToTGA_Injected(::System::IntPtr tex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [Extension]
  /// @brief Method LoadImage, addr 0x6f9c0c4, size 0x6c, virtual false, abstract: false, final false
  static inline bool LoadImage(::UnityEngine::Texture2D* tex, ::ArrayW<uint8_t> data);

  /// [NativeMethod(Name = "ImageConversionBindings::LoadImage", IsFreeFunction = true)]
  /// [Extension]
  /// @brief Method LoadImage, addr 0x6f9bf5c, size 0x114, virtual false, abstract: false, final false
  static inline bool LoadImage(/* [NotNull] */ ::UnityEngine::Texture2D* tex, ::System::ReadOnlySpan_1<uint8_t> data, bool markNonReadable);

  /// @brief Method LoadImage_Injected, addr 0x6f9c070, size 0x54, virtual false, abstract: false, final false
  static inline bool LoadImage_Injected(::System::IntPtr tex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> data, bool markNonReadable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageConversion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageConversion(ImageConversion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageConversion(ImageConversion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23913 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ImageConversion) == 0x10, "Size mismatch!");

} // namespace UnityEngine
