#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TexturePacker_JsonArray)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro::SpriteAssetUtilities {
struct TexturePacker_JsonArray_Frame;
}
namespace TMPro::SpriteAssetUtilities {
struct TexturePacker_JsonArray_Meta;
}
namespace TMPro::SpriteAssetUtilities {
class TexturePacker_JsonArray_SpriteDataObject;
}
namespace TMPro::SpriteAssetUtilities {
struct TexturePacker_JsonArray_SpriteFrame;
}
namespace TMPro::SpriteAssetUtilities {
struct TexturePacker_JsonArray_SpriteSize;
}
// Forward declare root types
namespace TMPro::SpriteAssetUtilities {
class TexturePacker_JsonArray;
}
namespace TMPro::SpriteAssetUtilities {
class TexturePacker_JsonArray_SpriteDataObject;
}
namespace TMPro::SpriteAssetUtilities {
struct TexturePacker_JsonArray_Frame;
}
namespace TMPro::SpriteAssetUtilities {
struct TexturePacker_JsonArray_Meta;
}
namespace TMPro::SpriteAssetUtilities {
struct TexturePacker_JsonArray_SpriteFrame;
}
namespace TMPro::SpriteAssetUtilities {
struct TexturePacker_JsonArray_SpriteSize;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray);
MARK_REF_PTR_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame);
MARK_VAL_T(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize);
// Dependencies
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame
struct CORDL_TYPE TexturePacker_JsonArray_SpriteFrame {
public:
  // Declarations
  /// @brief Method ToString, addr 0x48193d0, size 0x188, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TexturePacker_JsonArray_SpriteFrame();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TexturePacker_JsonArray_SpriteFrame(float_t x, float_t y, float_t w, float_t h) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14583 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field w, offset: 0x8, size: 0x4, def value: None
  float_t w;

  /// @brief Field h, offset: 0xc, size: 0x4, def value: None
  float_t h;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame, w) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame, h) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame, 0x10>, "Size mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Dependencies
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize
struct CORDL_TYPE TexturePacker_JsonArray_SpriteSize {
public:
  // Declarations
  /// @brief Method ToString, addr 0x4819558, size 0xac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TexturePacker_JsonArray_SpriteSize();

  // Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TexturePacker_JsonArray_SpriteSize(float_t w, float_t h) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14584 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  float_t w;

  /// @brief Field h, offset: 0x4, size: 0x4, def value: None
  float_t h;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize, h) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize, 0x8>, "Size mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Dependencies TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::SpriteFrame, TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::SpriteSize, UnityEngine.Vector2
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct CORDL_TYPE TexturePacker_JsonArray_Frame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TexturePacker_JsonArray_Frame();

  // Ctor Parameters [CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "frame", ty:
  // "::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame", modifiers: "", def_value: None }, CppParam { name: "rotated", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "trimmed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "spriteSourceSize", ty: "::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame", modifiers: "", def_value:
  // None }, CppParam { name: "sourceSize", ty: "::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize", modifiers: "", def_value: None }, CppParam { name: "pivot", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr TexturePacker_JsonArray_Frame(::StringW filename, ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame frame, bool rotated, bool trimmed,
                                          ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame spriteSourceSize,
                                          ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize sourceSize, ::UnityEngine::Vector2 pivot) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field filename, offset: 0x0, size: 0x8, def value: None
  ::StringW filename;

  /// @brief Field frame, offset: 0x8, size: 0x10, def value: None
  ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame frame;

  /// @brief Field rotated, offset: 0x18, size: 0x1, def value: None
  bool rotated;

  /// @brief Field trimmed, offset: 0x19, size: 0x1, def value: None
  bool trimmed;

  /// @brief Field spriteSourceSize, offset: 0x1c, size: 0x10, def value: None
  ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame spriteSourceSize;

  /// @brief Field sourceSize, offset: 0x2c, size: 0x8, def value: None
  ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize sourceSize;

  /// @brief Field pivot, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 pivot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame, filename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame, frame) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame, rotated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame, trimmed) == 0x19, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame, spriteSourceSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame, sourceSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame, pivot) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame, 0x40>, "Size mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Dependencies TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::SpriteSize
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Meta
struct CORDL_TYPE TexturePacker_JsonArray_Meta {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TexturePacker_JsonArray_Meta();

  // Ctor Parameters [CppParam { name: "app", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "image", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "size", ty:
  // "::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "smartupdate", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr TexturePacker_JsonArray_Meta(::StringW app, ::StringW version, ::StringW image, ::StringW format, ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize size, float_t scale,
                                         ::StringW smartupdate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field app, offset: 0x0, size: 0x8, def value: None
  ::StringW app;

  /// @brief Field version, offset: 0x8, size: 0x8, def value: None
  ::StringW version;

  /// @brief Field image, offset: 0x10, size: 0x8, def value: None
  ::StringW image;

  /// @brief Field format, offset: 0x18, size: 0x8, def value: None
  ::StringW format;

  /// @brief Field size, offset: 0x20, size: 0x8, def value: None
  ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize size;

  /// @brief Field scale, offset: 0x28, size: 0x4, def value: None
  float_t scale;

  /// @brief Field smartupdate, offset: 0x30, size: 0x8, def value: None
  ::StringW smartupdate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta, app) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta, version) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta, image) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta, format) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta, size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta, scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta, smartupdate) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta, 0x38>, "Size mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Dependencies System.Object, TMPro.SpriteAssetUtilities.TexturePacker_JsonArray::Meta
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteDataObject
class CORDL_TYPE TexturePacker_JsonArray_SpriteDataObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field frames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_frames,
                      put = __cordl_internal_set_frames)) ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>* frames;

  /// @brief Field meta, offset 0x18, size 0x38
  __declspec(property(get = __cordl_internal_get_meta, put = __cordl_internal_set_meta)) ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta meta;

  static inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>* const& __cordl_internal_get_frames() const;

  constexpr ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>*& __cordl_internal_get_frames();

  constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta const& __cordl_internal_get_meta() const;

  constexpr ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta& __cordl_internal_get_meta();

  constexpr void __cordl_internal_set_frames(::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>* value);

  constexpr void __cordl_internal_set_meta(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta value);

  /// @brief Method .ctor, addr 0x4819604, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TexturePacker_JsonArray_SpriteDataObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray_SpriteDataObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TexturePacker_JsonArray_SpriteDataObject(TexturePacker_JsonArray_SpriteDataObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TexturePacker_JsonArray_SpriteDataObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TexturePacker_JsonArray_SpriteDataObject(TexturePacker_JsonArray_SpriteDataObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14587 };

  /// @brief Field frames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>* ___frames;

  /// @brief Field meta, offset: 0x18, size: 0x38, def value: None
  ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta ___meta;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject, ___frames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject, ___meta) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject, 0x50>, "Size mismatch!");

} // namespace TMPro::SpriteAssetUtilities
// Dependencies System.Object
namespace TMPro::SpriteAssetUtilities {
// Is value type: false
// CS Name: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray
class CORDL_TYPE TexturePacker_JsonArray : public ::System::Object {
public:
  // Declarations
  using Frame = ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame;

  using Meta = ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta;

  using SpriteDataObject = ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject;

  using SpriteFrame = ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame;

  using SpriteSize = ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize;

  static inline ::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray* New_ctor();

  /// @brief Method .ctor, addr 0x48193c8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray, 0x10>, "Size mismatch!");

} // namespace TMPro::SpriteAssetUtilities
NEED_NO_BOX(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray*, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray");
NEED_NO_BOX(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteDataObject*, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteDataObject");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Frame");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/Meta");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteFrame");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize, "TMPro.SpriteAssetUtilities", "TexturePacker_JsonArray/SpriteSize");
