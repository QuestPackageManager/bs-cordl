#pragma once
// IWYU pragma private; include "UnityEngine/Texture2DArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DArray)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct MipmapLimitDescriptor;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture2DArray;
}
// Write type traits
MARK_REF_T(::UnityEngine::Texture2DArray*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Texture2DArray*, "UnityEngine", "Texture2DArray");
// [ExcludeFromPreset]
// [NativeHeader("Runtime/Graphics/Texture2DArray.h")]
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Texture2DArray
class CORDL_TYPE Texture2DArray : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_isReadable)) bool isReadable;

  /// @brief Method Internal_Create, addr 0x6f1abbc, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_Create(/* [Writable] */ ::UnityEngine::Texture2DArray* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount,
                                     ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureColorSpace colorSpace,
                                     ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, bool ignoreMipmapLimit, ::StringW mipmapLimitGroupName);

  /// [FreeFunction("Texture2DArrayScripting::Create")]
  /// @brief Method Internal_CreateImpl, addr 0x6f1a974, size 0x1a0, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl(/* [Writable] */ ::UnityEngine::Texture2DArray* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount,
                                         ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureColorSpace colorSpace,
                                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, bool ignoreMipmapLimit, ::StringW mipmapLimitGroupName);

  /// @brief Method Internal_CreateImpl_Injected, addr 0x6f1ab14, size 0xa8, virtual false, abstract: false, final false
  static inline bool Internal_CreateImpl_Injected(/* [Writable] */ ::UnityEngine::Texture2DArray* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount,
                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureColorSpace colorSpace,
                                                  ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, bool ignoreMipmapLimit,
                                                  ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> mipmapLimitGroupName);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount,
                                                        ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor);

  /// @brief [RequiredByNativeCode]
  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                        ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount,
                                                        ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain,
                                                        /* [DefaultValue("false")] */ bool linear);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain,
                                                        /* [DefaultValue("false")] */ bool linear, /* [DefaultValue("false")] */ bool createUninitialized);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear,
                                                        bool createUninitialized);

  static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear,
                                                        bool createUninitialized, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor);

  /// @brief Method ValidateFormat, addr 0x6f1ad10, size 0x160, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width, int32_t height);

  /// @brief Method ValidateFormat, addr 0x6f1ac30, size 0xe0, virtual false, abstract: false, final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format, int32_t width, int32_t height);

  /// @brief Method ValidateIsNotCrunched, addr 0x6f1b21c, size 0x54, virtual false, abstract: false, final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f1ae70, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f1afa0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f1b058, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor);

  /// [RequiredByNativeCode]
  /// @brief Method .ctor, addr 0x6f1aeec, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f1b03c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f1b0f4, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount, ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f1b618, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor, addr 0x6f1b550, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, /* [DefaultValue("false")] */ bool linear);

  /// @brief Method .ctor, addr 0x6f1b47c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain, /* [DefaultValue("false")] */ bool linear,
                    /* [DefaultValue("false")] */ bool createUninitialized);

  /// @brief Method .ctor, addr 0x6f1b45c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  /// @brief Method .ctor, addr 0x6f1b440, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized);

  /// @brief Method .ctor, addr 0x6f1b270, size 0x1d0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, bool createUninitialized,
                    ::UnityEngine::MipmapLimitDescriptor mipmapLimitDescriptor);

  /// [NativeName("GetAllTextureLayersIdentifier")]
  /// @brief Method get_allSlices, addr 0x6f1a890, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_allSlices();

  /// @brief Method get_isReadable, addr 0x6f1a8b8, size 0x80, virtual true, abstract: false, final false
  inline bool get_isReadable();

  /// @brief Method get_isReadable_Injected, addr 0x6f1a938, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isReadable_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture2DArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture2DArray(Texture2DArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture2DArray(Texture2DArray const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9813 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Texture2DArray) == 0x18, "Size mismatch!");

} // namespace UnityEngine
