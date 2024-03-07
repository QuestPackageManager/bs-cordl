#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CubemapCapture_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CubemapCapture)
namespace GlobalNamespace {
struct __CubemapCapture__ImageType;
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
struct __CubemapCapture__ImageType;
}
namespace GlobalNamespace {
class CubemapCapture;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__CubemapCapture__ImageType);
MARK_REF_PTR_T(::GlobalNamespace::CubemapCapture);
// Type: ::ImageType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CubemapCapture::ImageType
struct CORDL_TYPE __CubemapCapture__ImageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CubemapCapture__ImageType_Unwrapped
  enum struct ____CubemapCapture__ImageType_Unwrapped : int32_t {
    __E_PNG = static_cast<int32_t>(0x0),
    __E_JPEG = static_cast<int32_t>(0x1),
    __E_TGA = static_cast<int32_t>(0x2),
    __E_EXR = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CubemapCapture__ImageType_Unwrapped() const noexcept {
    return static_cast<____CubemapCapture__ImageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CubemapCapture__ImageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CubemapCapture__ImageType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field EXR value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__CubemapCapture__ImageType const EXR;

  /// @brief Field JPEG value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__CubemapCapture__ImageType const JPEG;

  /// @brief Field PNG value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__CubemapCapture__ImageType const PNG;

  /// @brief Field TGA value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__CubemapCapture__ImageType const TGA;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CubemapCapture__ImageType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CubemapCapture__ImageType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CubemapCapture
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CubemapCapture*
class CORDL_TYPE CubemapCapture : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ImageType = ::GlobalNamespace::__CubemapCapture__ImageType;

  /// @brief Field _camera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _cubemapSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__cubemapSize, put = __cordl_internal_set__cubemapSize)) int32_t _cubemapSize;

  /// @brief Field _exrFlags, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__exrFlags, put = __cordl_internal_set__exrFlags))::UnityEngine::__Texture2D__EXRFlags _exrFlags;

  /// @brief Field _faceAngles, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__faceAngles, put = __cordl_internal_set__faceAngles))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> _faceAngles;

  /// @brief Field _faces, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__faces, put = __cordl_internal_set__faces))::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> _faces;

  /// @brief Field _imageType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__imageType, put = __cordl_internal_set__imageType))::GlobalNamespace::__CubemapCapture__ImageType _imageType;

  /// @brief Field _jpegCompression, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__jpegCompression, put = __cordl_internal_set__jpegCompression)) int32_t _jpegCompression;

  /// @brief Field _saveDirectoryAbsolutePath, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__saveDirectoryAbsolutePath, put = __cordl_internal_set__saveDirectoryAbsolutePath))::StringW _saveDirectoryAbsolutePath;

  /// @brief Field _triggerKey, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__triggerKey, put = __cordl_internal_set__triggerKey))::UnityEngine::InputSystem::Key _triggerKey;

  /// @brief Method GenerateAndSaveCubemapTexture, addr 0x244e54c, size 0xbc, virtual false, abstract: false, final false
  inline void GenerateAndSaveCubemapTexture();

  static inline ::GlobalNamespace::CubemapCapture* New_ctor();

  /// @brief Method RenderCubemapTexture, addr 0x244e608, size 0x4d4, virtual false, abstract: false, final false
  inline void RenderCubemapTexture(::UnityEngine::Cubemap* cubemap);

  /// @brief Method SaveCubemapTexture, addr 0x244eadc, size 0x7d0, virtual false, abstract: false, final false
  inline void SaveCubemapTexture(::UnityEngine::Cubemap* cubemap, ::StringW path);

  /// @brief Method SerializeTextureToByteArray, addr 0x244f2ac, size 0xf4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeTextureToByteArray(::UnityEngine::Texture2D* texture);

  /// @brief Method Update, addr 0x244e4cc, size 0x80, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr int32_t const& __cordl_internal_get__cubemapSize() const;

  constexpr int32_t& __cordl_internal_get__cubemapSize();

  constexpr ::UnityEngine::__Texture2D__EXRFlags const& __cordl_internal_get__exrFlags() const;

  constexpr ::UnityEngine::__Texture2D__EXRFlags& __cordl_internal_get__exrFlags();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get__faceAngles() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get__faceAngles();

  constexpr ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> const& __cordl_internal_get__faces() const;

  constexpr ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*>& __cordl_internal_get__faces();

  constexpr ::GlobalNamespace::__CubemapCapture__ImageType const& __cordl_internal_get__imageType() const;

  constexpr ::GlobalNamespace::__CubemapCapture__ImageType& __cordl_internal_get__imageType();

  constexpr int32_t const& __cordl_internal_get__jpegCompression() const;

  constexpr int32_t& __cordl_internal_get__jpegCompression();

  constexpr ::StringW const& __cordl_internal_get__saveDirectoryAbsolutePath() const;

  constexpr ::StringW& __cordl_internal_get__saveDirectoryAbsolutePath();

  constexpr ::UnityEngine::InputSystem::Key const& __cordl_internal_get__triggerKey() const;

  constexpr ::UnityEngine::InputSystem::Key& __cordl_internal_get__triggerKey();

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__cubemapSize(int32_t value);

  constexpr void __cordl_internal_set__exrFlags(::UnityEngine::__Texture2D__EXRFlags value);

  constexpr void __cordl_internal_set__faceAngles(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set__faces(::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> value);

  constexpr void __cordl_internal_set__imageType(::GlobalNamespace::__CubemapCapture__ImageType value);

  constexpr void __cordl_internal_set__jpegCompression(int32_t value);

  constexpr void __cordl_internal_set__saveDirectoryAbsolutePath(::StringW value);

  constexpr void __cordl_internal_set__triggerKey(::UnityEngine::InputSystem::Key value);

  /// @brief Method .ctor, addr 0x244f3a0, size 0x150, virtual false, abstract: false, final false
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

  /// @brief Field _camera, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _triggerKey, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Key ____triggerKey;

  /// @brief Field _cubemapSize, offset: 0x24, size: 0x4, def value: None
  int32_t ____cubemapSize;

  /// @brief Field _saveDirectoryAbsolutePath, offset: 0x28, size: 0x8, def value: None
  ::StringW ____saveDirectoryAbsolutePath;

  /// @brief Field _imageType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__CubemapCapture__ImageType ____imageType;

  /// @brief Field _jpegCompression, offset: 0x34, size: 0x4, def value: None
  int32_t ____jpegCompression;

  /// @brief Field _exrFlags, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::__Texture2D__EXRFlags ____exrFlags;

  /// @brief Field _faces, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::CubemapFace, ::Array<::UnityEngine::CubemapFace>*> ____faces;

  /// @brief Field _faceAngles, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ____faceAngles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CubemapCapture, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____triggerKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____cubemapSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____saveDirectoryAbsolutePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____imageType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____jpegCompression) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____exrFlags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____faces) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubemapCapture, ____faceAngles) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CubemapCapture__ImageType, "", "CubemapCapture/ImageType");
NEED_NO_BOX(::GlobalNamespace::CubemapCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubemapCapture*, "", "CubemapCapture");
