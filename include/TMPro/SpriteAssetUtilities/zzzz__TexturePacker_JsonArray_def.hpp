#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TexturePacker_JsonArray)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__Frame;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__Meta;
}
namespace TMPro::SpriteAssetUtilities {
class __TexturePacker_JsonArray__SpriteDataObject;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__SpriteFrame;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__SpriteSize;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro::SpriteAssetUtilities {
class TexturePacker_JsonArray;
}
namespace TMPro::SpriteAssetUtilities {
class __TexturePacker_JsonArray__SpriteDataObject;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__Frame;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__Meta;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__SpriteFrame;
}
namespace TMPro::SpriteAssetUtilities {
struct __TexturePacker_JsonArray__SpriteSize;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray);
MARK_REF_PTR_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize);
// Type: ::SpriteFrame
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// CS Name: ::TexturePacker_JsonArray::SpriteFrame
struct CORDL_TYPE __TexturePacker_JsonArray__SpriteFrame {
public:
  // Declarations
  /// @brief Method ToString, addr 0x33bbbd0, size 0x278, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TexturePacker_JsonArray__SpriteFrame();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __TexturePacker_JsonArray__SpriteFrame(float_t x, float_t y, float_t w, float_t h) noexcept;

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field w, offset: 0x8, size: 0x4, def value: None
  float_t w;

  /// @brief Field h, offset: 0xc, size: 0x4, def value: None
  float_t h;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame, 0x10>, "Size mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame, w) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame, h) == 0xc, "Offset mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Type: ::SpriteSize
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// CS Name: ::TexturePacker_JsonArray::SpriteSize
struct CORDL_TYPE __TexturePacker_JsonArray__SpriteSize {
public:
  // Declarations
  /// @brief Method ToString, addr 0x33bbe48, size 0xac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TexturePacker_JsonArray__SpriteSize();

  // Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __TexturePacker_JsonArray__SpriteSize(float_t w, float_t h) noexcept;

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  float_t w;

  /// @brief Field h, offset: 0x4, size: 0x4, def value: None
  float_t h;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize, 0x8>, "Size mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize, h) == 0x4, "Offset mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Type: ::Frame
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// CS Name: ::TexturePacker_JsonArray::Frame
struct CORDL_TYPE __TexturePacker_JsonArray__Frame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TexturePacker_JsonArray__Frame();

  // Ctor Parameters [CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "frame", ty:
  // "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame", modifiers: "", def_value: None }, CppParam { name: "rotated", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "trimmed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "spriteSourceSize", ty: "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame", modifiers: "",
  // def_value: None }, CppParam { name: "sourceSize", ty: "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize", modifiers: "", def_value: None }, CppParam { name: "pivot", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr __TexturePacker_JsonArray__Frame(::StringW filename, ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame frame, bool rotated, bool trimmed,
                                             ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame spriteSourceSize,
                                             ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize sourceSize, ::UnityEngine::Vector2 pivot) noexcept;

  /// @brief Field filename, offset: 0x0, size: 0x8, def value: None
  ::StringW filename;

  /// @brief Field frame, offset: 0x8, size: 0x10, def value: None
  ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame frame;

  /// @brief Field rotated, offset: 0x18, size: 0x1, def value: None
  bool rotated;

  /// @brief Field trimmed, offset: 0x19, size: 0x1, def value: None
  bool trimmed;

  /// @brief Field spriteSourceSize, offset: 0x1c, size: 0x10, def value: None
  ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame spriteSourceSize;

  /// @brief Field sourceSize, offset: 0x2c, size: 0x8, def value: None
  ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize sourceSize;

  /// @brief Field pivot, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 pivot;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, 0x40>, "Size mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, filename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, frame) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, rotated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, trimmed) == 0x19, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, spriteSourceSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, sourceSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, pivot) == 0x34, "Offset mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Type: ::Meta
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// CS Name: ::TexturePacker_JsonArray::Meta
struct CORDL_TYPE __TexturePacker_JsonArray__Meta {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TexturePacker_JsonArray__Meta();

  // Ctor Parameters [CppParam { name: "app", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "image", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "size", ty:
  // "::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "smartupdate", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __TexturePacker_JsonArray__Meta(::StringW app, ::StringW version, ::StringW image, ::StringW format, ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize size,
                                            float_t scale, ::StringW smartupdate) noexcept;

  /// @brief Field app, offset: 0x0, size: 0x8, def value: None
  ::StringW app;

  /// @brief Field version, offset: 0x8, size: 0x8, def value: None
  ::StringW version;

  /// @brief Field image, offset: 0x10, size: 0x8, def value: None
  ::StringW image;

  /// @brief Field format, offset: 0x18, size: 0x8, def value: None
  ::StringW format;

  /// @brief Field size, offset: 0x20, size: 0x8, def value: None
  ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize size;

  /// @brief Field scale, offset: 0x28, size: 0x4, def value: None
  float_t scale;

  /// @brief Field smartupdate, offset: 0x30, size: 0x8, def value: None
  ::StringW smartupdate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, 0x38>, "Size mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, app) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, version) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, image) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, smartupdate) == 0x30, "Offset mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Type: ::SpriteDataObject
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// CS Name: ::TexturePacker_JsonArray::SpriteDataObject*
class CORDL_TYPE __TexturePacker_JsonArray__SpriteDataObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field frames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_frames,
                      put = __cordl_internal_set_frames))::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>* frames;

  /// @brief Field meta, offset 0x18, size 0x38
  __declspec(property(get = __cordl_internal_get_meta, put = __cordl_internal_set_meta))::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta meta;

  static inline ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>*& __cordl_internal_get_frames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>*> const& __cordl_internal_get_frames() const;

  constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta const& __cordl_internal_get_meta() const;

  constexpr ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta& __cordl_internal_get_meta();

  constexpr void __cordl_internal_set_frames(::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>* value);

  constexpr void __cordl_internal_set_meta(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta value);

  /// @brief Method .ctor, addr 0x33bbef4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TexturePacker_JsonArray__SpriteDataObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TexturePacker_JsonArray__SpriteDataObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TexturePacker_JsonArray__SpriteDataObject(__TexturePacker_JsonArray__SpriteDataObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TexturePacker_JsonArray__SpriteDataObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TexturePacker_JsonArray__SpriteDataObject(__TexturePacker_JsonArray__SpriteDataObject const&) = delete;

  /// @brief Field frames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame>* ___frames;

  /// @brief Field meta, offset: 0x18, size: 0x38, def value: None
  ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta ___meta;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject, 0x50>, "Size mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject, ___frames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject, ___meta) == 0x18, "Offset mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Type: TMPro.SpriteAssetUtilities::TexturePacker_JsonArray
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// CS Name: ::TMPro.SpriteAssetUtilities::TexturePacker_JsonArray*
class CORDL_TYPE TexturePacker_JsonArray : public ::System::Object {
public:
  // Declarations
  using Frame = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame;

  using Meta = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta;

  using SpriteDataObject = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject;

  using SpriteFrame = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame;

  using SpriteSize = ::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize;

  static inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray* New_ctor();

  /// @brief Method .ctor, addr 0x33bbbc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TexturePacker_JsonArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TexturePacker_JsonArray(TexturePacker_JsonArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TexturePacker_JsonArray(TexturePacker_JsonArray const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray, 0x10>, "Size mismatch!");

} // namespace TMPro::SpriteAssetUtilities
NEED_NO_BOX(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray");
NEED_NO_BOX(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteDataObject*, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteDataObject");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Frame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Frame");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__Meta, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Meta");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteFrame");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::__TexturePacker_JsonArray__SpriteSize, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteSize");
