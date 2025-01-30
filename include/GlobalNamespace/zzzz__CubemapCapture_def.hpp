#pragma once
// IWYU pragma private; include "GlobalNamespace/CubemapCapture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CubemapCapture)
namespace GlobalNamespace {
struct CubemapCapture_ImageType;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct CubemapCapture_ImageType;
}
namespace GlobalNamespace {
class CubemapCapture;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CubemapCapture_ImageType);
MARK_REF_PTR_T(::GlobalNamespace::CubemapCapture);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: CubemapCapture/ImageType
struct CORDL_TYPE CubemapCapture_ImageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CubemapCapture_ImageType_Unwrapped
  enum struct __CubemapCapture_ImageType_Unwrapped : int32_t {
    __E_PNG = static_cast<int32_t>(0x0),
    __E_JPEG = static_cast<int32_t>(0x1),
    __E_TGA = static_cast<int32_t>(0x2),
    __E_EXR = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CubemapCapture_ImageType_Unwrapped() const noexcept {
    return static_cast<__CubemapCapture_ImageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapCapture_ImageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CubemapCapture_ImageType(int32_t value__) noexcept;

  /// @brief Field EXR value: I32(3)
  static ::GlobalNamespace::CubemapCapture_ImageType const EXR;

  /// @brief Field JPEG value: I32(1)
  static ::GlobalNamespace::CubemapCapture_ImageType const JPEG;

  /// @brief Field PNG value: I32(0)
  static ::GlobalNamespace::CubemapCapture_ImageType const PNG;

  /// @brief Field TGA value: I32(2)
  static ::GlobalNamespace::CubemapCapture_ImageType const TGA;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5018 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CubemapCapture_ImageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CubemapCapture_ImageType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies CubemapCapture::ImageType, UnityEngine.InputSystem.Key, UnityEngine.MonoBehaviour, UnityEngine.Texture2D::EXRFlags
namespace GlobalNamespace {
// Is value type: false
// CS Name: CubemapCapture
class CORDL_TYPE CubemapCapture : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ImageType = ::GlobalNamespace::CubemapCapture_ImageType;

  /// @brief Field _camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera)) ::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _cubemapSize, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__cubemapSize, put = __cordl_internal_set__cubemapSize)) int32_t _cubemapSize;

  /// @brief Field _exrFlags, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__exrFlags, put = __cordl_internal_set__exrFlags)) ::UnityEngine::Texture2D_EXRFlags _exrFlags;

  /// @brief Field _faceAngles, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__faceAngles, put = __cordl_internal_set__faceAngles)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _faceAngles;

  /// @brief Field _faces, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__faces, put = __cordl_internal_set__faces)) ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> _faces;

  /// @brief Field _imageType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__imageType, put = __cordl_internal_set__imageType)) ::GlobalNamespace::CubemapCapture_ImageType _imageType;

  /// @brief Field _jpegCompression, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__jpegCompression, put = __cordl_internal_set__jpegCompression)) int32_t _jpegCompression;

  /// @brief Field _saveDirectoryAbsolutePath, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__saveDirectoryAbsolutePath, put = __cordl_internal_set__saveDirectoryAbsolutePath)) ::StringW _saveDirectoryAbsolutePath;

  /// @brief Field _triggerKey, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__triggerKey, put = __cordl_internal_set__triggerKey)) ::UnityEngine::InputSystem::Key _triggerKey;

  /// @brief Method GenerateAndSaveCubemapTexture, addr 0x3b0b630, size 0xb4, virtual false, abstract: false, final false
  inline void GenerateAndSaveCubemapTexture();

  static inline ::GlobalNamespace::CubemapCapture* New_ctor();

  /// @brief Method RenderCubemapTexture, addr 0x3b0b6e4, size 0x4b8, virtual false, abstract: false, final false
  inline void RenderCubemapTexture(::UnityEngine::Cubemap* cubemap);

  /// @brief Method SaveCubemapTexture, addr 0x3b0bb9c, size 0x7c0, virtual false, abstract: false, final false
  inline void SaveCubemapTexture(::UnityEngine::Cubemap* cubemap, ::StringW path);

  /// @brief Method SerializeTextureToByteArray, addr 0x3b0c35c, size 0xfc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeTextureToByteArray(::UnityEngine::Texture2D* texture);

  /// @brief Method Update, addr 0x3b0b5b0, size 0x80, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr int32_t const& __cordl_internal_get__cubemapSize() const;

  constexpr int32_t& __cordl_internal_get__cubemapSize();

  constexpr ::UnityEngine::Texture2D_EXRFlags const& __cordl_internal_get__exrFlags() const;

  constexpr ::UnityEngine::Texture2D_EXRFlags& __cordl_internal_get__exrFlags();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__faceAngles() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__faceAngles();

  constexpr ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> const& __cordl_internal_get__faces() const;

  constexpr ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*>& __cordl_internal_get__faces();

  constexpr ::GlobalNamespace::CubemapCapture_ImageType const& __cordl_internal_get__imageType() const;

  constexpr ::GlobalNamespace::CubemapCapture_ImageType& __cordl_internal_get__imageType();

  constexpr int32_t const& __cordl_internal_get__jpegCompression() const;

  constexpr int32_t& __cordl_internal_get__jpegCompression();

  constexpr ::StringW const& __cordl_internal_get__saveDirectoryAbsolutePath() const;

  constexpr ::StringW& __cordl_internal_get__saveDirectoryAbsolutePath();

  constexpr ::UnityEngine::InputSystem::Key const& __cordl_internal_get__triggerKey() const;

  constexpr ::UnityEngine::InputSystem::Key& __cordl_internal_get__triggerKey();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__cubemapSize(int32_t value);

  constexpr void __cordl_internal_set__exrFlags(::UnityEngine::Texture2D_EXRFlags value);

  constexpr void __cordl_internal_set__faceAngles(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__faces(::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> value);

  constexpr void __cordl_internal_set__imageType(::GlobalNamespace::CubemapCapture_ImageType value);

  constexpr void __cordl_internal_set__jpegCompression(int32_t value);

  constexpr void __cordl_internal_set__saveDirectoryAbsolutePath(::StringW value);

  constexpr void __cordl_internal_set__triggerKey(::UnityEngine::InputSystem::Key value);

  /// @brief Method .ctor, addr 0x3b0c458, size 0x150, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapCapture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CubemapCapture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CubemapCapture(CubemapCapture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CubemapCapture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CubemapCapture(CubemapCapture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5019 };

  /// @brief Field _camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _triggerKey, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Key ____triggerKey;

  /// @brief Field _cubemapSize, offset: 0x2c, size: 0x4, def value: None
  int32_t ____cubemapSize;

  /// @brief Field _saveDirectoryAbsolutePath, offset: 0x30, size: 0x8, def value: None
  ::StringW ____saveDirectoryAbsolutePath;

  /// @brief Field _imageType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::CubemapCapture_ImageType ____imageType;

  /// @brief Field _jpegCompression, offset: 0x3c, size: 0x4, def value: None
  int32_t ____jpegCompression;

  /// @brief Field _exrFlags, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::Texture2D_EXRFlags ____exrFlags;

  /// @brief Field _faces, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> ____faces;

  /// @brief Field _faceAngles, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____faceAngles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____camera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____triggerKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____cubemapSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____saveDirectoryAbsolutePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____imageType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____jpegCompression) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____exrFlags) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____faces) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____faceAngles) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CubemapCapture, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubemapCapture_ImageType, "", "CubemapCapture/ImageType");
NEED_NO_BOX(::GlobalNamespace::CubemapCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubemapCapture*, "", "CubemapCapture");
