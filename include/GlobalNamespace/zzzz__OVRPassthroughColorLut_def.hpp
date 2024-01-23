#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPassthroughColorLut)
namespace GlobalNamespace {
struct __OVRPassthroughColorLut__ColorChannels;
}
namespace GlobalNamespace {
class __OVRPassthroughColorLut__ColorLutTextureConverter;
}
namespace GlobalNamespace {
struct __OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob;
}
namespace GlobalNamespace {
struct __OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings;
}
namespace GlobalNamespace {
struct __OVRPassthroughColorLut__WriteColorsAsBytesJob;
}
namespace GlobalNamespace {
struct __OVRPlugin__PassthroughColorLutData;
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
struct __OVRPassthroughColorLut__ColorChannels;
}
namespace GlobalNamespace {
class OVRPassthroughColorLut;
}
namespace GlobalNamespace {
class __OVRPassthroughColorLut__ColorLutTextureConverter;
}
namespace GlobalNamespace {
struct __OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob;
}
namespace GlobalNamespace {
struct __OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings;
}
namespace GlobalNamespace {
struct __OVRPassthroughColorLut__WriteColorsAsBytesJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels);
MARK_REF_PTR_T(::GlobalNamespace::OVRPassthroughColorLut);
MARK_REF_PTR_T(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings);
MARK_VAL_T(::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob);
// Type: ::ColorChannels
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8189))
// CS Name: ::OVRPassthroughColorLut::ColorChannels
struct CORDL_TYPE __OVRPassthroughColorLut__ColorChannels {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRPassthroughColorLut__ColorChannels_Unwrapped
  enum struct ____OVRPassthroughColorLut__ColorChannels_Unwrapped : int32_t {
    __E_Rgb = static_cast<int32_t>(0x1),
    __E_Rgba = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRPassthroughColorLut__ColorChannels_Unwrapped() const noexcept {
    return static_cast<____OVRPassthroughColorLut__ColorChannels_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughColorLut__ColorChannels(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughColorLut__ColorChannels();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Rgb value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels const Rgb;

  /// @brief Field Rgba value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels const Rgba;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::WriteColorsAsBytesJob
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9999)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 293
// }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 741 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(8190)) CS Name:
// ::OVRPassthroughColorLut::WriteColorsAsBytesJob
struct CORDL_TYPE __OVRPassthroughColorLut__WriteColorsAsBytesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  /// @brief Method Execute, addr 0x27c759c, size 0x130, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  // Ctor Parameters [CppParam { name: "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "source", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: None }, CppParam { name: "channelCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughColorLut__WriteColorsAsBytesJob(::Unity::Collections::NativeArray_1<uint8_t> target, ::Unity::Collections::NativeArray_1<::UnityEngine::Color> source,
                                                            int32_t channelCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughColorLut__WriteColorsAsBytesJob();

  /// @brief Field target, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> target;

  /// @brief Field source, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Color> source;

  /// @brief Field channelCount, offset: 0x20, size: 0x4, def value: None
  int32_t channelCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob, source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob, channelCount) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TextureSettings
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8192))
// CS Name: ::OVRPassthroughColorLut::ColorLutTextureConverter::TextureSettings
struct CORDL_TYPE __OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings {
public:
  // Declarations
  __declspec(property(get = get_Width)) int32_t Width;

  __declspec(property(get = get_Height)) int32_t Height;

  __declspec(property(get = get_Resolution)) int32_t Resolution;

  __declspec(property(get = get_SlicesPerRow)) int32_t SlicesPerRow;

  __declspec(property(get = get_ChannelCount)) int32_t ChannelCount;

  __declspec(property(get = get_FlipY)) bool FlipY;

  /// @brief Method get_Width, addr 0x27c7a2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Width();

  /// @brief Method get_Height, addr 0x27c7a34, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Height();

  /// @brief Method get_Resolution, addr 0x27c7a3c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Resolution();

  /// @brief Method get_SlicesPerRow, addr 0x27c7a44, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SlicesPerRow();

  /// @brief Method get_ChannelCount, addr 0x27c7a4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ChannelCount();

  /// @brief Method get_FlipY, addr 0x27c7a54, size 0x8, virtual false, abstract: false, final false
  inline bool get_FlipY();

  /// @brief Method .ctor, addr 0x27c7974, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t resolution, int32_t slicesPerRow, int32_t channelCount, bool flipY);

  // Ctor Parameters [CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_Resolution_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_SlicesPerRow_k__BackingField", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_ChannelCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_FlipY_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings(int32_t _Width_k__BackingField, int32_t _Height_k__BackingField, int32_t _Resolution_k__BackingField,
                                                                                int32_t _SlicesPerRow_k__BackingField, int32_t _ChannelCount_k__BackingField, bool _FlipY_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, _Width_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, _Height_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, _Resolution_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, _SlicesPerRow_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, _ChannelCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, _FlipY_k__BackingField) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapColorValuesJob
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8192)), TypeDefinitionIndex(TypeDefinitionIndex(9999)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9999), inst: 741
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(8191)) CS Name: ::OVRPassthroughColorLut::ColorLutTextureConverter::MapColorValuesJob
struct CORDL_TYPE __OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  /// @brief Method Execute, addr 0x27c798c, size 0xa0, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  // Ctor Parameters [CppParam { name: "settings", ty: "::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings", modifiers: "", def_value: None }, CppParam { name:
  // "target", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "",
  // def_value: None }]
  constexpr __OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings settings,
                                                                                  ::Unity::Collections::NativeArray_1<uint8_t> target, ::Unity::Collections::NativeArray_1<uint8_t> source) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob();

  /// @brief Field settings, offset: 0x0, size: 0x18, def value: None
  ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings settings;

  /// @brief Field target, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> target;

  /// @brief Field source, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> source;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob, settings) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob, target) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob, source) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorLutTextureConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8193))
// CS Name: ::OVRPassthroughColorLut::ColorLutTextureConverter*
class CORDL_TYPE __OVRPassthroughColorLut__ColorLutTextureConverter : public ::System::Object {
public:
  // Declarations
  using TextureSettings = ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings;

  using MapColorValuesJob = ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob;

  /// @brief Method TextureToColorByteMap, addr 0x27c6cd8, size 0xb4, virtual false, abstract: false, final false
  static inline void TextureToColorByteMap(::UnityEngine::Texture2D* lut, int32_t channelCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> target, bool flipY);

  /// @brief Method MapColorValues, addr 0x27c77d0, size 0x1a4, virtual false, abstract: false, final false
  static inline void MapColorValues(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings settings, ::Unity::Collections::NativeArray_1<uint8_t> source,
                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> target);

  /// @brief Method GetTextureSettings, addr 0x27c76cc, size 0x104, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings GetTextureSettings(::UnityEngine::Texture2D* lut, int32_t channelCount, bool flipY);

  /// @brief Method TryGetTextureLayout, addr 0x27c7090, size 0x23c, virtual false, abstract: false, final false
  static inline bool TryGetTextureLayout(int32_t width, int32_t height, ByRef<int32_t> resolution, ByRef<int32_t> slicesPerRow, ByRef<::StringW> errorMessage);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughColorLut__ColorLutTextureConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPassthroughColorLut__ColorLutTextureConverter(__OVRPassthroughColorLut__ColorLutTextureConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPassthroughColorLut__ColorLutTextureConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPassthroughColorLut__ColorLutTextureConverter(__OVRPassthroughColorLut__ColorLutTextureConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPassthroughColorLut__ColorLutTextureConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRPassthroughColorLut
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3336)), TypeDefinitionIndex(TypeDefinitionIndex(7830)),
// TypeDefinitionIndex(TypeDefinitionIndex(8189))] Self: TypeDefinitionIndex(TypeDefinitionIndex(8194)) CS Name: ::OVRPassthroughColorLut*
class CORDL_TYPE OVRPassthroughColorLut : public ::System::Object {
public:
  // Declarations
  using ColorLutTextureConverter = ::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter;

  using WriteColorsAsBytesJob = ::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob;

  using ColorChannels = ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels;

  /// @brief Field <Resolution>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Resolution_k__BackingField, put = __cordl_internal_set__Resolution_k__BackingField)) uint32_t _Resolution_k__BackingField;

  /// @brief Field <Channels>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__Channels_k__BackingField,
                      put = __cordl_internal_set__Channels_k__BackingField))::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels _Channels_k__BackingField;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInitialized_k__BackingField, put = __cordl_internal_set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field _colorLutHandle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorLutHandle, put = __cordl_internal_set__colorLutHandle)) uint64_t _colorLutHandle;

  /// @brief Field _allocHandle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__allocHandle, put = __cordl_internal_set__allocHandle))::System::Runtime::InteropServices::GCHandle _allocHandle;

  /// @brief Field _lutData, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__lutData, put = __cordl_internal_set__lutData))::GlobalNamespace::__OVRPlugin__PassthroughColorLutData _lutData;

  /// @brief Field _channelCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__channelCount, put = __cordl_internal_set__channelCount)) int32_t _channelCount;

  /// @brief Field _colorBytes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBytes, put = __cordl_internal_set__colorBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> _colorBytes;

  /// @brief Field _locker, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__locker, put = __cordl_internal_set__locker))::System::Object* _locker;

  __declspec(property(get = get_Resolution, put = set_Resolution)) uint32_t Resolution;

  __declspec(property(get = get_Channels, put = set_Channels))::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels Channels;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr uint32_t& __cordl_internal_get__Resolution_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__Resolution_k__BackingField() const;

  constexpr void __cordl_internal_set__Resolution_k__BackingField(uint32_t value);

  constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels& __cordl_internal_get__Channels_k__BackingField();

  constexpr ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels const& __cordl_internal_get__Channels_k__BackingField() const;

  constexpr void __cordl_internal_set__Channels_k__BackingField(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels value);

  constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

  constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool value);

  constexpr uint64_t& __cordl_internal_get__colorLutHandle();

  constexpr uint64_t const& __cordl_internal_get__colorLutHandle() const;

  constexpr void __cordl_internal_set__colorLutHandle(uint64_t value);

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__allocHandle();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__allocHandle() const;

  constexpr void __cordl_internal_set__allocHandle(::System::Runtime::InteropServices::GCHandle value);

  constexpr ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData& __cordl_internal_get__lutData();

  constexpr ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData const& __cordl_internal_get__lutData() const;

  constexpr void __cordl_internal_set__lutData(::GlobalNamespace::__OVRPlugin__PassthroughColorLutData value);

  constexpr int32_t& __cordl_internal_get__channelCount();

  constexpr int32_t const& __cordl_internal_get__channelCount() const;

  constexpr void __cordl_internal_set__channelCount(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__colorBytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__colorBytes() const;

  constexpr void __cordl_internal_set__colorBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Object*& __cordl_internal_get__locker();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__locker() const;

  constexpr void __cordl_internal_set__locker(::System::Object* value);

  /// @brief Method get_Resolution, addr 0x27c5b6c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_Resolution();

  /// @brief Method set_Resolution, addr 0x27c5b74, size 0x8, virtual false, abstract: false, final false
  inline void set_Resolution(uint32_t value);

  /// @brief Method get_Channels, addr 0x27c5b7c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels get_Channels();

  /// @brief Method set_Channels, addr 0x27c5b84, size 0x8, virtual false, abstract: false, final false
  inline void set_Channels(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels value);

  /// @brief Method get_IsInitialized, addr 0x27c5b8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method set_IsInitialized, addr 0x27c5b94, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInitialized(bool value);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::UnityEngine::Texture2D* initialLutTexture, bool flipY);

  /// @brief Method .ctor, addr 0x27c5ba0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Texture2D* initialLutTexture, bool flipY);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> initialColorLut,
                                                                    ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  /// @brief Method .ctor, addr 0x27c6160, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> initialColorLut,
                                                                    ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  /// @brief Method .ctor, addr 0x27c6248, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  /// @brief Method .ctor, addr 0x27c6330, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  /// @brief Method UpdateFrom, addr 0x27c64fc, size 0xc0, virtual false, abstract: false, final false
  inline void UpdateFrom(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method UpdateFrom, addr 0x27c67fc, size 0xc0, virtual false, abstract: false, final false
  inline void UpdateFrom(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors);

  /// @brief Method UpdateFrom, addr 0x27c6a38, size 0xcc, virtual false, abstract: false, final false
  inline void UpdateFrom(::ArrayW<uint8_t, ::Array<uint8_t>*> colors);

  /// @brief Method UpdateFrom, addr 0x27c6b04, size 0xb8, virtual false, abstract: false, final false
  inline void UpdateFrom(::UnityEngine::Texture2D* lutTexture, bool flipY);

  /// @brief Method Dispose, addr 0x27c6d8c, size 0x44, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method IsTextureSupported, addr 0x27c6ee4, size 0x1ac, virtual false, abstract: false, final false
  static inline bool IsTextureSupported(::UnityEngine::Texture2D* texture, ByRef<::StringW> errorMessage);

  static inline ::GlobalNamespace::OVRPassthroughColorLut* New_ctor(int32_t size, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  /// @brief Method .ctor, addr 0x27c5db4, size 0x264, virtual false, abstract: false, final false
  inline void _ctor(int32_t size, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  /// @brief Method IsValidUpdateResolution, addr 0x27c6bbc, size 0x11c, virtual false, abstract: false, final false
  inline bool IsValidUpdateResolution(int32_t lutSize, int32_t elementByteSize);

  /// @brief Method IsValidLutUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsValidLutUpdate(::ArrayW<T, ::Array<T>*> colorArray, int32_t elementByteSize);

  /// @brief Method GetChannelsForTextureFormat, addr 0x27c5d14, size 0xa0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels GetChannelsForTextureFormat(::UnityEngine::TextureFormat format);

  /// @brief Method GetTextureSizeFromByteArray, addr 0x27c638c, size 0x118, virtual false, abstract: false, final false
  static inline int32_t GetTextureSizeFromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> initialColorLut, ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  /// @brief Method GetTextureSize, addr 0x27c5c34, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t GetTextureSize(::UnityEngine::Texture2D* texture);

  /// @brief Method GetArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t GetArraySize(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method ChannelsToCount, addr 0x27c7444, size 0x10, virtual false, abstract: false, final false
  static inline int32_t ChannelsToCount(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels channels);

  /// @brief Method IsResolutionAccepted, addr 0x27c7380, size 0xc4, virtual false, abstract: false, final false
  static inline bool IsResolutionAccepted(uint32_t resolution, int32_t size, ByRef<::StringW> errorMessage);

  /// @brief Method IsPowerOfTwo, addr 0x27c7454, size 0x20, virtual false, abstract: false, final false
  static inline bool IsPowerOfTwo(uint32_t x);

  /// @brief Method Create, addr 0x27c6070, size 0xf0, virtual false, abstract: false, final false
  inline void Create(::GlobalNamespace::__OVRPlugin__PassthroughColorLutData lutData);

  /// @brief Method GetResolutionFromSize, addr 0x27c72cc, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t GetResolutionFromSize(int32_t size);

  /// @brief Method CreateLutData, addr 0x27c7474, size 0x94, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData CreateLutData(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> colorBytes);

  /// @brief Method CreateLutDataFromTexture, addr 0x27c6018, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData CreateLutDataFromTexture(::UnityEngine::Texture2D* lut, bool flipY);

  /// @brief Method CreateLutDataFromArray, addr 0x27c61fc, size 0x4c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData CreateLutDataFromArray(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors);

  /// @brief Method CreateLutDataFromArray, addr 0x27c62e4, size 0x4c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData CreateLutDataFromArray(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors);

  /// @brief Method CreateLutDataFromArray, addr 0x27c64a4, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData CreateLutDataFromArray(::ArrayW<uint8_t, ::Array<uint8_t>*> colors);

  /// @brief Method WriteColorsAsBytes, addr 0x27c65bc, size 0x240, virtual false, abstract: false, final false
  inline void WriteColorsAsBytes(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, ::ArrayW<uint8_t, ::Array<uint8_t>*> target);

  /// @brief Method WriteColorsAsBytes, addr 0x27c68bc, size 0x17c, virtual false, abstract: false, final false
  inline void WriteColorsAsBytes(::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> colors, ::ArrayW<uint8_t, ::Array<uint8_t>*> target);

  /// @brief Method Finalize, addr 0x27c7508, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Destroy, addr 0x27c6dd0, size 0x114, virtual false, abstract: false, final false
  inline void Destroy();

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPassthroughColorLut(OVRPassthroughColorLut&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPassthroughColorLut", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPassthroughColorLut(OVRPassthroughColorLut const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPassthroughColorLut();

public:
  /// @brief Field <Resolution>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t ____Resolution_k__BackingField;

  /// @brief Field <Channels>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels ____Channels_k__BackingField;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  /// @brief Field _colorLutHandle, offset: 0x20, size: 0x8, def value: None
  uint64_t ____colorLutHandle;

  /// @brief Field _allocHandle, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ____allocHandle;

  /// @brief Field _lutData, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::__OVRPlugin__PassthroughColorLutData ____lutData;

  /// @brief Field _channelCount, offset: 0x40, size: 0x4, def value: None
  int32_t ____channelCount;

  /// @brief Field _colorBytes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____colorBytes;

  /// @brief Field _locker, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ____locker;

  /// @brief Field RecomendedBatchSize offset 0xffffffff size 0x4
  static constexpr int32_t RecomendedBatchSize{ static_cast<int32_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPassthroughColorLut, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____Resolution_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____Channels_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____IsInitialized_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____colorLutHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____allocHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____lutData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____channelCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____colorBytes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughColorLut, ____locker) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughColorLut__ColorChannels, "", "OVRPassthroughColorLut/ColorChannels");
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughColorLut);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughColorLut*, "", "OVRPassthroughColorLut");
NEED_NO_BOX(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter*, "", "OVRPassthroughColorLut/ColorLutTextureConverter");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob, "", "OVRPassthroughColorLut/ColorLutTextureConverter/MapColorValuesJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__TextureSettings, "", "OVRPassthroughColorLut/ColorLutTextureConverter/TextureSettings");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob, "", "OVRPassthroughColorLut/WriteColorsAsBytesJob");
