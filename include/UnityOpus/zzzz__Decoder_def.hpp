#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityOpus/zzzz__NumChannels_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Decoder)
namespace System {
class IDisposable;
}
namespace UnityOpus {
struct NumChannels;
}
namespace UnityOpus {
struct SamplingFrequency;
}
// Forward declare root types
namespace UnityOpus {
class Decoder;
}
// Write type traits
MARK_REF_PTR_T(::UnityOpus::Decoder);
// Type: UnityOpus::Decoder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityOpus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(16215))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16212))
// CS Name: ::UnityOpus::Decoder*
class CORDL_TYPE Decoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field decoder, offset 0x10, size 0x8
  __declspec(property(get = __get_decoder, put = __set_decoder)) void* decoder;

  /// @brief Field channels, offset 0x18, size 0x4
  __declspec(property(get = __get_channels, put = __set_channels))::UnityOpus::NumChannels channels;

  /// @brief Field softclipMem, offset 0x20, size 0x8
  __declspec(property(get = __get_softclipMem, put = __set_softclipMem))::ArrayW<float_t, ::Array<float_t>*> softclipMem;

  /// @brief Field disposedValue, offset 0x28, size 0x1
  __declspec(property(get = __get_disposedValue, put = __set_disposedValue)) bool disposedValue;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr void*& __get_decoder();

  constexpr void* const& __get_decoder() const;

  constexpr void __set_decoder(void* value);

  constexpr ::UnityOpus::NumChannels& __get_channels();

  constexpr ::UnityOpus::NumChannels const& __get_channels() const;

  constexpr void __set_channels(::UnityOpus::NumChannels value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_softclipMem();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_softclipMem() const;

  constexpr void __set_softclipMem(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr bool& __get_disposedValue();

  constexpr bool const& __get_disposedValue() const;

  constexpr void __set_disposedValue(bool value);

  static inline ::UnityOpus::Decoder* New_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels);

  /// @brief Method .ctor, addr 0x21f70e0, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels);

  /// @brief Method Decode, addr 0x21f72c8, size 0xcc, virtual false, abstract: false, final false
  inline int32_t Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t dataLength, ::ArrayW<float_t, ::Array<float_t>*> pcm, int32_t decodeFec);

  /// @brief Method Dispose, addr 0x21f7504, size 0x84, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x21f7604, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Dispose, addr 0x21f76a4, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Decoder(Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Decoder(Decoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Decoder();

public:
  /// @brief Field decoder, offset: 0x10, size: 0x8, def value: None
  void* ___decoder;

  /// @brief Field channels, offset: 0x18, size: 0x4, def value: None
  ::UnityOpus::NumChannels ___channels;

  /// @brief Field softclipMem, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___softclipMem;

  /// @brief Field disposedValue, offset: 0x28, size: 0x1, def value: None
  bool ___disposedValue;

  /// @brief Field maximumPacketDuration offset 0xffffffff size 0x4
  static constexpr int32_t maximumPacketDuration{ static_cast<int32_t>(0x1680) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::Decoder, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityOpus::Decoder, ___decoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityOpus::Decoder, ___channels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityOpus::Decoder, ___softclipMem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityOpus::Decoder, ___disposedValue) == 0x28, "Offset mismatch!");

} // namespace UnityOpus
NEED_NO_BOX(::UnityOpus::Decoder);
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::Decoder*, "UnityOpus", "Decoder");
