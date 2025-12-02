#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughColorLut.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughColorLut)
namespace GlobalNamespace {
struct ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob;
}
namespace GlobalNamespace {
struct ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings;
}
namespace GlobalNamespace {
struct OVRPassthroughColorLut_ColorChannels;
}
namespace GlobalNamespace {
class OVRPassthroughColorLut_ColorLutTextureConverter;
}
namespace GlobalNamespace {
struct OVRPassthroughColorLut_CreateState;
}
namespace GlobalNamespace {
struct OVRPassthroughColorLut_WriteColorsAsBytesJob;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughColorLutData;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPassthroughColorLut_ColorChannels;
}
namespace GlobalNamespace {
struct OVRPassthroughColorLut_CreateState;
}
namespace GlobalNamespace {
class OVRPassthroughColorLut;
}
namespace GlobalNamespace {
class OVRPassthroughColorLut_ColorLutTextureConverter;
}
namespace GlobalNamespace {
struct ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob;
}
namespace GlobalNamespace {
struct ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings;
}
namespace GlobalNamespace {
struct OVRPassthroughColorLut_WriteColorsAsBytesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels);
MARK_VAL_T(::GlobalNamespace::OVRPassthroughColorLut_CreateState);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughColorLut);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter);
MARK_VAL_T(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob);
MARK_VAL_T(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings);
MARK_VAL_T(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughColorLut/ColorChannels
struct CORDL_TYPE OVRPassthroughColorLut_ColorChannels {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRPassthroughColorLut_ColorChannels_Unwrapped
  enum struct __OVRPassthroughColorLut_ColorChannels_Unwrapped : int32_t {
    __E_Rgb = static_cast<int32_t>(0x1),
    __E_Rgba = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRPassthroughColorLut_ColorChannels_Unwrapped() const noexcept {
    return static_cast<__OVRPassthroughColorLut_ColorChannels_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughColorLut_ColorChannels();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRPassthroughColorLut_ColorChannels(int32_t value__) noexcept;

  /// @brief Field Rgb value: I32(1)
  static ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels const Rgb;

  /// @brief Field Rgba value: I32(2)
  static ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels const Rgba;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughColorLut_ColorChannels, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughColorLut/WriteColorsAsBytesJob
struct CORDL_TYPE OVRPassthroughColorLut_WriteColorsAsBytesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x5d04c90, size 0x9c, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughColorLut_WriteColorsAsBytesJob();

  // Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "source", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: None }, CppParam { name: "channelCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRPassthroughColorLut_WriteColorsAsBytesJob(::Unity::Collections::NativeArray_1<uint8_t> target, ::Unity::Collections::NativeArray_1<::UnityEngine::Color> source,
                                                         int32_t channelCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7982 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field target, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> target;

  /// @brief Field source, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Color> source;

  /// @brief Field channelCount, offset: 0x20, size: 0x4, def value: None
  int32_t channelCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob, source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob, channelCount) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughColorLut/ColorLutTextureConverter/TextureSettings
struct CORDL_TYPE ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings {
public:
  // Declarations
  __declspec(property(get = get_ChannelCount)) int32_t ChannelCount;

  __declspec(property(get = get_FlipY)) bool FlipY;

  __declspec(property(get = get_Height)) int32_t Height;

  __declspec(property(get = get_Resolution)) int32_t Resolution;

  __declspec(property(get = get_SlicesPerRow)) int32_t SlicesPerRow;

  __declspec(property(get = get_Width)) int32_t Width;

  /// @brief Method .ctor, addr 0x5d04fe4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t resolution, int32_t slicesPerRow, int32_t channelCount, bool flipY);

  /// @brief Method get_ChannelCount, addr 0x5d050ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ChannelCount();

  /// @brief Method get_FlipY, addr 0x5d050b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_FlipY();

  /// @brief Method get_Height, addr 0x5d05094, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Height();

  /// @brief Method get_Resolution, addr 0x5d0509c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Resolution();

  /// @brief Method get_SlicesPerRow, addr 0x5d050a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SlicesPerRow();

  /// @brief Method get_Width, addr 0x5d0508c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Width();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings();

  // Ctor Parameters [CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_Resolution_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_SlicesPerRow_k__BackingField", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_ChannelCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_FlipY_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings(int32_t _Width_k__BackingField, int32_t _Height_k__BackingField, int32_t _Resolution_k__BackingField,
                                                                            int32_t _SlicesPerRow_k__BackingField, int32_t _ChannelCount_k__BackingField, bool _FlipY_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7984 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <Width>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _Width_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _Height_k__BackingField;

  /// @brief Field <Resolution>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _Resolution_k__BackingField;

  /// @brief Field <SlicesPerRow>k__BackingField, offset: 0xc, size: 0x4, def value: None
  int32_t _SlicesPerRow_k__BackingField;

  /// @brief Field <ChannelCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t _ChannelCount_k__BackingField;

  /// @brief Field <FlipY>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool _FlipY_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _Width_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _Height_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _Resolution_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _SlicesPerRow_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _ChannelCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, _FlipY_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPassthroughColorLut::ColorLutTextureConverter::TextureSettings, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughColorLut/ColorLutTextureConverter/MapColorValuesJob
struct CORDL_TYPE ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x5d04ff8, size 0x94, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob();

  // Ctor Parameters [CppParam { name: "settings", ty: "::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings", modifiers: "", def_value: None }, CppParam { name:
  // "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "",
  // def_value: None }]
  constexpr ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings settings,
                                                                              ::Unity::Collections::NativeArray_1<uint8_t> target, ::Unity::Collections::NativeArray_1<uint8_t> source) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7983 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field settings, offset: 0x0, size: 0x18, def value: None
  ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings settings;

  /// @brief Field target, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> target;

  /// @brief Field source, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> source;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob, settings) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob, target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob, source) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughColorLut/ColorLutTextureConverter
class CORDL_TYPE OVRPassthroughColorLut_ColorLutTextureConverter : public ::System::Object {
public:
  // Declarations
  using MapColorValuesJob = ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob;

  using TextureSettings = ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings;

  /// @brief Method GetTextureSettings, addr 0x5d04d2c, size 0xf4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings GetTextureSettings(::UnityEngine::Texture2D* lut, int32_t channelCount, bool flipY);

  /// @brief Method MapColorValues, addr 0x5d04e20, size 0x1c4, virtual false, abstract: false, final false
  static inline void MapColorValues(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings settings, ::Unity::Collections::NativeArray_1<uint8_t> source,
                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> target);

  /// @brief Method TextureToColorByteMap, addr 0x5d041ec, size 0xc0, virtual false, abstract: false, final false
  static inline void TextureToColorByteMap(::UnityEngine::Texture2D* lut, int32_t channelCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> target, bool flipY);

  /// @brief Method TryGetTextureLayout, addr 0x5d046d4, size 0x228, virtual false, abstract: false, final false
  static inline bool TryGetTextureLayout(int32_t width, int32_t height, ::ByRef<int32_t> resolution, ::ByRef<int32_t> slicesPerRow, ::ByRef<::StringW> errorMessage);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughColorLut_ColorLutTextureConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut_ColorLutTextureConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughColorLut_ColorLutTextureConverter(OVRPassthroughColorLut_ColorLutTextureConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut_ColorLutTextureConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughColorLut_ColorLutTextureConverter(OVRPassthroughColorLut_ColorLutTextureConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7985 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughColorLut/CreateState
struct CORDL_TYPE OVRPassthroughColorLut_CreateState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRPassthroughColorLut_CreateState_Unwrapped
  enum struct __OVRPassthroughColorLut_CreateState_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_Pending = static_cast<int32_t>(0x1),
    __E_Created = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRPassthroughColorLut_CreateState_Unwrapped() const noexcept {
    return static_cast<__OVRPassthroughColorLut_CreateState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughColorLut_CreateState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRPassthroughColorLut_CreateState(int32_t value__) noexcept;

  /// @brief Field Created value: I32(2)
  static ::GlobalNamespace::OVRPassthroughColorLut_CreateState const Created;

  /// @brief Field Invalid value: I32(0)
  static ::GlobalNamespace::OVRPassthroughColorLut_CreateState const Invalid;

  /// @brief Field Pending value: I32(1)
  static ::GlobalNamespace::OVRPassthroughColorLut_CreateState const Pending;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7986 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut_CreateState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughColorLut_CreateState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPassthroughColorLut::ColorChannels, OVRPassthroughColorLut::CreateState, OVRPlugin::PassthroughColorLutData, System.Object, System.Runtime.InteropServices.GCHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPassthroughColorLut
class CORDL_TYPE OVRPassthroughColorLut : public ::System::Object {
public:
  // Declarations
  using ColorChannels = ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels;

  using ColorLutTextureConverter = ::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter;

  using CreateState = ::GlobalNamespace::OVRPassthroughColorLut_CreateState;

  using WriteColorsAsBytesJob = ::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob;

  __declspec(property(get = get_Channels, put = set_Channels)) ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels Channels;

  __declspec(property(get = get_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_Resolution, put = set_Resolution)) uint32_t Resolution;

  /// @brief Field <Channels>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__Channels_k__BackingField,
                      put = __cordl_internal_set__Channels_k__BackingField)) ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels _Channels_k__BackingField;

  /// @brief Field <Resolution>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Resolution_k__BackingField, put = __cordl_internal_set__Resolution_k__BackingField)) uint32_t _Resolution_k__BackingField;

  /// @brief Field _allocHandle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__allocHandle, put = __cordl_internal_set__allocHandle)) ::System::Runtime::InteropServices::GCHandle _allocHandle;

  /// @brief Field _channelCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__channelCount, put = __cordl_internal_set__channelCount)) int32_t _channelCount;

  /// @brief Field _colorBytes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBytes, put = __cordl_internal_set__colorBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _colorBytes;

  /// @brief Field _colorLutHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorLutHandle, put = __cordl_internal_set__colorLutHandle)) uint64_t _colorLutHandle;

  /// @brief Field _createState, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__createState, put = __cordl_internal_set__createState)) ::GlobalNamespace::OVRPassthroughColorLut_CreateState _createState;

  /// @brief Field _locker, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__locker, put = __cordl_internal_set__locker)) ::System::Object* _locker;

  /// @brief Field _lutData, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__lutData, put = __cordl_internal_set__lutData)) ::GlobalNamespace::OVRPlugin_PassthroughColorLutData _lutData;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ChannelsToCount, addr 0x5d04a6c, size 0x10, virtual false, abstract: false, final false
  static inline int32_t ChannelsToCount(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  /// @brief Method Create, addr 0x5d03538, size 0x190, virtual false, abstract: false, final false
  inline void Create(::GlobalNamespace::OVRPlugin_PassthroughColorLutData lutData);

  /// @brief Method CreateLutData, addr 0x5d04bb4, size 0x98, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutData(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> colorBytes);

  /// @brief Method CreateLutDataFromArray, addr 0x5d03768, size 0x4c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutDataFromArray(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method CreateLutDataFromArray, addr 0x5d03854, size 0x4c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutDataFromArray(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors);

  /// @brief Method CreateLutDataFromArray, addr 0x5d03a0c, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutDataFromArray(::ArrayW<uint8_t, ::Array<uint8_t>*> colors);

  /// @brief Method CreateLutDataFromTexture, addr 0x5d034e0, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_PassthroughColorLutData CreateLutDataFromTexture(::UnityEngine::Texture2D* lut, bool flipY);

  /// @brief Method Destroy, addr 0x5d04428, size 0x114, virtual false, abstract: false, final false
  inline void Destroy();

  /// @brief Method Dispose, addr 0x5d042ac, size 0x17c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x5d04c4c, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FreeAllocHandle, addr 0x5d0453c, size 0x14, virtual false, abstract: false, final false
  inline void FreeAllocHandle();

  /// @brief Method GetArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t GetArraySize(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method GetChannelsForTextureFormat, addr 0x5d0320c, size 0x98, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels GetChannelsForTextureFormat(::UnityEngine::TextureFormat format);

  /// @brief Method GetResolutionFromSize, addr 0x5d048fc, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t GetResolutionFromSize(int32_t size);

  /// @brief Method GetTextureSize, addr 0x5d0312c, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t GetTextureSize(::UnityEngine::Texture2D* texture);

  /// @brief Method GetTextureSizeFromByteArray, addr 0x5d038fc, size 0x110, virtual false, abstract: false, final false
  static inline int32_t GetTextureSizeFromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  /// @brief Method InternalCreate, addr 0x5d04a90, size 0xec, virtual false, abstract: false, final false
  inline void InternalCreate();

  /// @brief Method IsPowerOfTwo, addr 0x5d04a7c, size 0x14, virtual false, abstract: false, final false
  static inline bool IsPowerOfTwo(uint32_t x);

  /// @brief Method IsResolutionAccepted, addr 0x5d049b0, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsResolutionAccepted(uint32_t resolution, int32_t size, ::ByRef<::StringW> errorMessage);

  /// @brief Method IsTextureSupported, addr 0x5d04550, size 0x184, virtual false, abstract: false, final false
  static inline bool IsTextureSupported(::UnityEngine::Texture2D* texture, ::ByRef<::StringW> errorMessage);

  /// @brief Method IsValidLutUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsValidLutUpdate(::ArrayW<T, ::Array<T>*> colorArray, int32_t elementByteSize);

  /// @brief Method IsValidUpdateResolution, addr 0x5d040a8, size 0x144, virtual false, abstract: false, final false
  inline bool IsValidUpdateResolution(int32_t lutSize, int32_t elementByteSize);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> initialColorLut,
                                                                    ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> initialColorLut,
                                                                    ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::UnityEngine::Texture2D* initialLutTexture, bool flipY);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(int32_t size, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  /// @brief Method Recreate, addr 0x5d04b9c, size 0x18, virtual false, abstract: false, final false
  inline void Recreate();

  /// @brief Method RefreshIfInitialized, addr 0x5d04b7c, size 0x20, virtual false, abstract: false, final false
  inline void RefreshIfInitialized(bool isInitialized);

  /// @brief Method UpdateFrom, addr 0x5d03a64, size 0xc8, virtual false, abstract: false, final false
  inline void UpdateFrom(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method UpdateFrom, addr 0x5d03d8c, size 0xc8, virtual false, abstract: false, final false
  inline void UpdateFrom(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors);

  /// @brief Method UpdateFrom, addr 0x5d03f18, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateFrom(::ArrayW<uint8_t, ::Array<uint8_t>*> colors);

  /// @brief Method UpdateFrom, addr 0x5d03fec, size 0xbc, virtual false, abstract: false, final false
  inline void UpdateFrom(::UnityEngine::Texture2D* lutTexture, bool flipY);

  /// @brief Method WriteColorsAsBytes, addr 0x5d03b2c, size 0x260, virtual false, abstract: false, final false
  inline void WriteColorsAsBytes(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::ArrayW<uint8_t, ::Array<uint8_t>*> target);

  /// @brief Method WriteColorsAsBytes, addr 0x5d03e54, size 0xc4, virtual false, abstract: false, final false
  inline void WriteColorsAsBytes(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, ::ArrayW<uint8_t, ::Array<uint8_t>*> target);

  constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels const& __cordl_internal_get__Channels_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels& __cordl_internal_get__Channels_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__Resolution_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__Resolution_k__BackingField();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__allocHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__allocHandle();

  constexpr int32_t const& __cordl_internal_get__channelCount() const;

  constexpr int32_t& __cordl_internal_get__channelCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__colorBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__colorBytes();

  constexpr uint64_t const& __cordl_internal_get__colorLutHandle() const;

  constexpr uint64_t& __cordl_internal_get__colorLutHandle();

  constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState const& __cordl_internal_get__createState() const;

  constexpr ::GlobalNamespace::OVRPassthroughColorLut_CreateState& __cordl_internal_get__createState();

  constexpr ::System::Object* const& __cordl_internal_get__locker() const;

  constexpr ::System::Object*& __cordl_internal_get__locker();

  constexpr ::GlobalNamespace::OVRPlugin_PassthroughColorLutData const& __cordl_internal_get__lutData() const;

  constexpr ::GlobalNamespace::OVRPlugin_PassthroughColorLutData& __cordl_internal_get__lutData();

  constexpr void __cordl_internal_set__Channels_k__BackingField(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels value);

  constexpr void __cordl_internal_set__Resolution_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__allocHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr void __cordl_internal_set__channelCount(int32_t value);

  constexpr void __cordl_internal_set__colorBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__colorLutHandle(uint64_t value);

  constexpr void __cordl_internal_set__createState(::GlobalNamespace::OVRPassthroughColorLut_CreateState value);

  constexpr void __cordl_internal_set__locker(::System::Object* value);

  constexpr void __cordl_internal_set__lutData(::GlobalNamespace::OVRPlugin_PassthroughColorLutData value);

  /// @brief Method .ctor, addr 0x5d036c8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  /// @brief Method .ctor, addr 0x5d037b4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  /// @brief Method .ctor, addr 0x5d038a0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> initialColorLut, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  /// @brief Method .ctor, addr 0x5d03098, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture2D* initialLutTexture, bool flipY);

  /// @brief Method .ctor, addr 0x5d032a4, size 0x23c, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels channels);

  /// @brief Method get_Channels, addr 0x5d03068, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels get_Channels();

  /// @brief Method get_IsInitialized, addr 0x5d03078, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method get_IsValid, addr 0x5d03088, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsValid();

  /// @brief Method get_Resolution, addr 0x5d03058, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Resolution();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Channels, addr 0x5d03070, size 0x8, virtual false, abstract: false, final false
  inline void set_Channels(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels value);

  /// @brief Method set_Resolution, addr 0x5d03060, size 0x8, virtual false, abstract: false, final false
  inline void set_Resolution(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughColorLut();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughColorLut(OVRPassthroughColorLut&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughColorLut(OVRPassthroughColorLut const&) = delete;

  /// @brief Field RecomendedBatchSize offset 0xffffffff size 0x4
  static constexpr int32_t RecomendedBatchSize{ static_cast<int32_t>(0x80) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7987 };

  /// @brief Field <Resolution>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t ____Resolution_k__BackingField;

  /// @brief Field <Channels>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::OVRPassthroughColorLut_ColorChannels ____Channels_k__BackingField;

  /// @brief Field _colorLutHandle, offset: 0x18, size: 0x8, def value: None
  uint64_t ____colorLutHandle;

  /// @brief Field _allocHandle, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ____allocHandle;

  /// @brief Field _lutData, offset: 0x28, size: 0x10, def value: None
  ::GlobalNamespace::OVRPlugin_PassthroughColorLutData ____lutData;

  /// @brief Field _channelCount, offset: 0x38, size: 0x4, def value: None
  int32_t ____channelCount;

  /// @brief Field _colorBytes, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____colorBytes;

  /// @brief Field _locker, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____locker;

  /// @brief Field _createState, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::OVRPassthroughColorLut_CreateState ____createState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____Resolution_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____Channels_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____colorLutHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____allocHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____lutData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____channelCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____colorBytes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____locker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____createState) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughColorLut, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughColorLut_ColorChannels, "", "OVRPassthroughColorLut/ColorChannels");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughColorLut_CreateState, "", "OVRPassthroughColorLut/CreateState");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughColorLut);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughColorLut*, "", "OVRPassthroughColorLut");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughColorLut_ColorLutTextureConverter*, "", "OVRPassthroughColorLut/ColorLutTextureConverter");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_MapColorValuesJob, "", "OVRPassthroughColorLut/ColorLutTextureConverter/MapColorValuesJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorLutTextureConverter_OVRPassthroughColorLut_TextureSettings, "", "OVRPassthroughColorLut/ColorLutTextureConverter/TextureSettings");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughColorLut_WriteColorsAsBytesJob, "", "OVRPassthroughColorLut/WriteColorsAsBytesJob");
