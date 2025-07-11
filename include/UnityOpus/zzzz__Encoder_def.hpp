#pragma once
// IWYU pragma private; include "UnityOpus/Encoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityOpus/zzzz__NumChannels_def.hpp"
#include "UnityOpus/zzzz__OpusSignal_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Encoder)
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
class Encoder;
}
// Write type traits
MARK_REF_PTR_T(::UnityOpus::Encoder);
// Dependencies System.IDisposable, System.IntPtr, System.Object, UnityOpus.NumChannels, UnityOpus.OpusSignal
namespace UnityOpus {
// Is value type: false
// CS Name: UnityOpus.Encoder
class CORDL_TYPE Encoder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Bitrate, put = set_Bitrate)) int32_t Bitrate;

  __declspec(property(get = get_Complexity, put = set_Complexity)) int32_t Complexity;

  __declspec(property(get = get_Signal, put = set_Signal)) ::UnityOpus::OpusSignal Signal;

  /// @brief Field bitrate, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_bitrate, put = __cordl_internal_set_bitrate)) int32_t bitrate;

  /// @brief Field channels, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_channels, put = __cordl_internal_set_channels)) ::UnityOpus::NumChannels channels;

  /// @brief Field complexity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_complexity, put = __cordl_internal_set_complexity)) int32_t complexity;

  /// @brief Field disposedValue, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_disposedValue, put = __cordl_internal_set_disposedValue)) bool disposedValue;

  /// @brief Field encoder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_encoder, put = __cordl_internal_set_encoder)) ::System::IntPtr encoder;

  /// @brief Field signal, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_signal, put = __cordl_internal_set_signal)) ::UnityOpus::OpusSignal signal;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3aab590, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3aab434, size 0x40, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Encode, addr 0x3aab304, size 0x74, virtual false, abstract: false, final false
  inline int32_t Encode(::ArrayW<float_t, ::Array<float_t>*> pcm, int32_t count, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method Finalize, addr 0x3aab4f0, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::UnityOpus::Encoder* New_ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application);

  constexpr int32_t const& __cordl_internal_get_bitrate() const;

  constexpr int32_t& __cordl_internal_get_bitrate();

  constexpr ::UnityOpus::NumChannels const& __cordl_internal_get_channels() const;

  constexpr ::UnityOpus::NumChannels& __cordl_internal_get_channels();

  constexpr int32_t const& __cordl_internal_get_complexity() const;

  constexpr int32_t& __cordl_internal_get_complexity();

  constexpr bool const& __cordl_internal_get_disposedValue() const;

  constexpr bool& __cordl_internal_get_disposedValue();

  constexpr ::System::IntPtr const& __cordl_internal_get_encoder() const;

  constexpr ::System::IntPtr& __cordl_internal_get_encoder();

  constexpr ::UnityOpus::OpusSignal const& __cordl_internal_get_signal() const;

  constexpr ::UnityOpus::OpusSignal& __cordl_internal_get_signal();

  constexpr void __cordl_internal_set_bitrate(int32_t value);

  constexpr void __cordl_internal_set_channels(::UnityOpus::NumChannels value);

  constexpr void __cordl_internal_set_complexity(int32_t value);

  constexpr void __cordl_internal_set_disposedValue(bool value);

  constexpr void __cordl_internal_set_encoder(::System::IntPtr value);

  constexpr void __cordl_internal_set_signal(::UnityOpus::OpusSignal value);

  /// @brief Method .ctor, addr 0x3aab158, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::UnityOpus::SamplingFrequency samplingFrequency, ::UnityOpus::NumChannels channels, ::UnityOpus::OpusApplication application);

  /// @brief Method get_Bitrate, addr 0x3aaaf3c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Bitrate();

  /// @brief Method get_Complexity, addr 0x3aaaff0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Complexity();

  /// @brief Method get_Signal, addr 0x3aab0a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityOpus::OpusSignal get_Signal();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Bitrate, addr 0x3aaaf44, size 0x28, virtual false, abstract: false, final false
  inline void set_Bitrate(int32_t value);

  /// @brief Method set_Complexity, addr 0x3aaaff8, size 0x28, virtual false, abstract: false, final false
  inline void set_Complexity(int32_t value);

  /// @brief Method set_Signal, addr 0x3aab0ac, size 0x28, virtual false, abstract: false, final false
  inline void set_Signal(::UnityOpus::OpusSignal value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Encoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Encoder(Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Encoder(Encoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19085 };

  /// @brief Field bitrate, offset: 0x10, size: 0x4, def value: None
  int32_t ___bitrate;

  /// @brief Field complexity, offset: 0x14, size: 0x4, def value: None
  int32_t ___complexity;

  /// @brief Field signal, offset: 0x18, size: 0x4, def value: None
  ::UnityOpus::OpusSignal ___signal;

  /// @brief Field encoder, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr ___encoder;

  /// @brief Field channels, offset: 0x28, size: 0x4, def value: None
  ::UnityOpus::NumChannels ___channels;

  /// @brief Field disposedValue, offset: 0x2c, size: 0x1, def value: None
  bool ___disposedValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityOpus::Encoder, ___bitrate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityOpus::Encoder, ___complexity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityOpus::Encoder, ___signal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityOpus::Encoder, ___encoder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityOpus::Encoder, ___channels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityOpus::Encoder, ___disposedValue) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityOpus::Encoder, 0x30>, "Size mismatch!");

} // namespace UnityOpus
NEED_NO_BOX(::UnityOpus::Encoder);
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::Encoder*, "UnityOpus", "Encoder");
