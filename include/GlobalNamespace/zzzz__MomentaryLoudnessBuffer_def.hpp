#pragma once
// IWYU pragma private; include "GlobalNamespace/MomentaryLoudnessBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MomentaryLoudnessBuffer)
// Forward declare root types
namespace GlobalNamespace {
class MomentaryLoudnessBuffer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MomentaryLoudnessBuffer);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MomentaryLoudnessBuffer
class CORDL_TYPE MomentaryLoudnessBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer)) ::ArrayW<float_t, ::Array<float_t>*> _buffer;

  /// @brief Field _readingInterval, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__readingInterval, put = __cordl_internal_set__readingInterval)) int32_t _readingInterval;

  __declspec(property(get = get_buffer)) ::ArrayW<float_t, ::Array<float_t>*> buffer;

  __declspec(property(get = get_isNextReadingIntervalReady)) bool isNextReadingIntervalReady;

  /// @brief Field nextDataIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_nextDataIndex, put = __cordl_internal_set_nextDataIndex)) int32_t nextDataIndex;

  /// @brief Method AddSample, addr 0x3ad2ff8, size 0x44, virtual false, abstract: false, final false
  inline void AddSample(float_t data);

  static inline ::GlobalNamespace::MomentaryLoudnessBuffer* New_ctor(int32_t numChannels, int32_t sampleFrequency, float_t momentaryWindowDuration, int32_t readingsPerBuffer);

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__buffer();

  constexpr int32_t const& __cordl_internal_get__readingInterval() const;

  constexpr int32_t& __cordl_internal_get__readingInterval();

  constexpr int32_t const& __cordl_internal_get_nextDataIndex() const;

  constexpr int32_t& __cordl_internal_get_nextDataIndex();

  constexpr void __cordl_internal_set__buffer(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__readingInterval(int32_t value);

  constexpr void __cordl_internal_set_nextDataIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3ad2f3c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(int32_t numChannels, int32_t sampleFrequency, float_t momentaryWindowDuration, int32_t readingsPerBuffer);

  /// @brief Method get_buffer, addr 0x3ad6c1c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_buffer();

  /// @brief Method get_isNextReadingIntervalReady, addr 0x3ad303c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_isNextReadingIntervalReady();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MomentaryLoudnessBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MomentaryLoudnessBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MomentaryLoudnessBuffer(MomentaryLoudnessBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MomentaryLoudnessBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MomentaryLoudnessBuffer(MomentaryLoudnessBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4015 };

  /// @brief Field nextDataIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___nextDataIndex;

  /// @brief Field _buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____buffer;

  /// @brief Field _readingInterval, offset: 0x20, size: 0x4, def value: None
  int32_t ____readingInterval;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MomentaryLoudnessBuffer, ___nextDataIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MomentaryLoudnessBuffer, ____buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MomentaryLoudnessBuffer, ____readingInterval) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MomentaryLoudnessBuffer, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MomentaryLoudnessBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MomentaryLoudnessBuffer*, "", "MomentaryLoudnessBuffer");
