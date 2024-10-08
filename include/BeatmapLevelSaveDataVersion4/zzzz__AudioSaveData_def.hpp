#pragma once
// IWYU pragma private; include "BeatmapLevelSaveDataVersion4/AudioSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSaveData)
namespace BeatmapLevelSaveDataVersion4 {
class BpmData;
}
namespace BeatmapLevelSaveDataVersion4 {
struct LufsData;
}
// Forward declare root types
namespace BeatmapLevelSaveDataVersion4 {
class AudioSaveData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapLevelSaveDataVersion4::AudioSaveData);
// Type: BeatmapLevelSaveDataVersion4::AudioSaveData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapLevelSaveDataVersion4 {
// Is value type: false
// CS Name: ::BeatmapLevelSaveDataVersion4::AudioSaveData*
class CORDL_TYPE AudioSaveData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bpmData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bpmData, put = __cordl_internal_set_bpmData)) ::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*, ::Array<::BeatmapLevelSaveDataVersion4::BpmData*>*>
      bpmData;

  /// @brief Field lufsData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_lufsData, put = __cordl_internal_set_lufsData)) ::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData, ::Array<::BeatmapLevelSaveDataVersion4::LufsData>*>
      lufsData;

  /// @brief Field songChecksum, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_songChecksum, put = __cordl_internal_set_songChecksum)) ::StringW songChecksum;

  /// @brief Field songFrequency, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_songFrequency, put = __cordl_internal_set_songFrequency)) int32_t songFrequency;

  /// @brief Field songSampleCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_songSampleCount, put = __cordl_internal_set_songSampleCount)) int32_t songSampleCount;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::StringW version;

  static inline ::BeatmapLevelSaveDataVersion4::AudioSaveData* New_ctor();

  constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*, ::Array<::BeatmapLevelSaveDataVersion4::BpmData*>*> const& __cordl_internal_get_bpmData() const;

  constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*, ::Array<::BeatmapLevelSaveDataVersion4::BpmData*>*>& __cordl_internal_get_bpmData();

  constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData, ::Array<::BeatmapLevelSaveDataVersion4::LufsData>*> const& __cordl_internal_get_lufsData() const;

  constexpr ::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData, ::Array<::BeatmapLevelSaveDataVersion4::LufsData>*>& __cordl_internal_get_lufsData();

  constexpr ::StringW const& __cordl_internal_get_songChecksum() const;

  constexpr ::StringW& __cordl_internal_get_songChecksum();

  constexpr int32_t const& __cordl_internal_get_songFrequency() const;

  constexpr int32_t& __cordl_internal_get_songFrequency();

  constexpr int32_t const& __cordl_internal_get_songSampleCount() const;

  constexpr int32_t& __cordl_internal_get_songSampleCount();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_bpmData(::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*, ::Array<::BeatmapLevelSaveDataVersion4::BpmData*>*> value);

  constexpr void __cordl_internal_set_lufsData(::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData, ::Array<::BeatmapLevelSaveDataVersion4::LufsData>*> value);

  constexpr void __cordl_internal_set_songChecksum(::StringW value);

  constexpr void __cordl_internal_set_songFrequency(int32_t value);

  constexpr void __cordl_internal_set_songSampleCount(int32_t value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x26c9bac, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioSaveData(AudioSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioSaveData(AudioSaveData const&) = delete;

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field songChecksum, offset: 0x18, size: 0x8, def value: None
  ::StringW ___songChecksum;

  /// @brief Field songSampleCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___songSampleCount;

  /// @brief Field songFrequency, offset: 0x24, size: 0x4, def value: None
  int32_t ___songFrequency;

  /// @brief Field bpmData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::BeatmapLevelSaveDataVersion4::BpmData*, ::Array<::BeatmapLevelSaveDataVersion4::BpmData*>*> ___bpmData;

  /// @brief Field lufsData, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::BeatmapLevelSaveDataVersion4::LufsData, ::Array<::BeatmapLevelSaveDataVersion4::LufsData>*> ___lufsData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13423 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"4.0.0" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapLevelSaveDataVersion4::AudioSaveData, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::AudioSaveData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::AudioSaveData, ___songChecksum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::AudioSaveData, ___songSampleCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::AudioSaveData, ___songFrequency) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::AudioSaveData, ___bpmData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapLevelSaveDataVersion4::AudioSaveData, ___lufsData) == 0x30, "Offset mismatch!");

} // namespace BeatmapLevelSaveDataVersion4
NEED_NO_BOX(::BeatmapLevelSaveDataVersion4::AudioSaveData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapLevelSaveDataVersion4::AudioSaveData*, "BeatmapLevelSaveDataVersion4", "AudioSaveData");
