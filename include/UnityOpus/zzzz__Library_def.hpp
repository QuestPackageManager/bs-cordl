#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Library)
namespace UnityOpus {
struct ErrorCode;
}
namespace UnityOpus {
struct NumChannels;
}
namespace UnityOpus {
struct OpusApplication;
}
namespace UnityOpus {
struct OpusSignal;
}
namespace UnityOpus {
struct SamplingFrequency;
}
// Forward declare root types
namespace UnityOpus {
class Library;
}
// Write type traits
MARK_REF_PTR_T(::UnityOpus::Library);
// Type: UnityOpus::Library
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityOpus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16219))
// CS Name: ::UnityOpus::Library*
class CORDL_TYPE Library : public ::System::Object {
public:
  // Declarations
  /// @brief Method OpusEncoderCreate, addr 0x21f7a5c, size 0x9c, virtual false, abstract: false, final false
  static inline void* OpusEncoderCreate(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application,
                                        ByRef<::UnityOpus::ErrorCode> error);

  /// @brief Method OpusEncode, addr 0x21f7e70, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t OpusEncode(void* encoder, ::ArrayW<int16_t, ::Array<int16_t>*> pcm, int32_t frameSize, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxDataBytes);

  /// @brief Method OpusEncodeFloat, addr 0x21f7ba8, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t OpusEncodeFloat(void* encoder, ::ArrayW<float_t, ::Array<float_t>*> pcm, int32_t frameSize, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t maxDataBytes);

  /// @brief Method OpusEncoderDestroy, addr 0x21f7ce8, size 0x7c, virtual false, abstract: false, final false
  static inline void OpusEncoderDestroy(void* encoder);

  /// @brief Method OpusEncoderSetBitrate, addr 0x21f7740, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OpusEncoderSetBitrate(void* encoder, int32_t bitrate);

  /// @brief Method OpusEncoderSetComplexity, addr 0x21f77f4, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OpusEncoderSetComplexity(void* encoder, int32_t complexity);

  /// @brief Method OpusEncoderSetSignal, addr 0x21f78a8, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OpusEncoderSetSignal(void* encoder, ::UnityOpus::OpusSignal signal);

  /// @brief Method OpusDecoderCreate, addr 0x21f7234, size 0x94, virtual false, abstract: false, final false
  static inline void* OpusDecoderCreate(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ByRef<::UnityOpus::ErrorCode> error);

  /// @brief Method OpusDecode, addr 0x21f7f2c, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t OpusDecode(void* decoder, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t len, ::ArrayW<int16_t, ::Array<int16_t>*> pcm, int32_t frameSize, int32_t decodeFec);

  /// @brief Method OpusDecodeFloat, addr 0x21f7394, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t OpusDecodeFloat(void* decoder, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t len, ::ArrayW<float_t, ::Array<float_t>*> pcm, int32_t frameSize, int32_t decodeFec);

  /// @brief Method OpusDecoderDestroy, addr 0x21f7588, size 0x7c, virtual false, abstract: false, final false
  static inline void OpusDecoderDestroy(void* decoder);

  /// @brief Method OpusPcmSoftClip, addr 0x21f7458, size 0xac, virtual false, abstract: false, final false
  static inline void OpusPcmSoftClip(::ArrayW<float_t, ::Array<float_t>*> pcm, int32_t frameSize, ::UnityOpus::NumChannels channels, ::ArrayW<float_t, ::Array<float_t>*> softclipMem);

  static inline ::UnityOpus::Library* New_ctor();

  /// @brief Method .ctor, addr 0x21f7ff0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Library(Library&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Library(Library const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Library();

public:
  /// @brief Field maximumPacketDuration offset 0xffffffff size 0x4
  static constexpr int32_t maximumPacketDuration{ static_cast<int32_t>(0x1680) };

  /// @brief Field dllName offset 0xffffffff size 0x8
  static constexpr ::ConstString dllName{ u"unityopus" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::Library, 0x10>, "Size mismatch!");

} // namespace UnityOpus
NEED_NO_BOX(::UnityOpus::Library);
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::Library*, "UnityOpus", "Library");
