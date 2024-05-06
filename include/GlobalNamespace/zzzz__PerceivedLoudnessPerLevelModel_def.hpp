#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerceivedLoudnessPerLevelModel)
namespace GlobalNamespace {
class PerceivedLoudnessSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerceivedLoudnessPerLevelModel);
// Type: ::PerceivedLoudnessPerLevelModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerceivedLoudnessPerLevelModel*
class CORDL_TYPE PerceivedLoudnessPerLevelModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _loudnessLevelPerLevelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__loudnessLevelPerLevelId,
                      put = __cordl_internal_set__loudnessLevelPerLevelId))::System::Collections::Generic::Dictionary_2<::StringW, float_t>* _loudnessLevelPerLevelId;

  /// @brief Method GetLoudnessByLevelId, addr 0x14c9d3c, size 0x7c, virtual false, abstract: false, final false
  inline float_t GetLoudnessByLevelId(::StringW levelId);

  /// @brief Method GetLoudnessByLevelIdOrNull, addr 0x14c9dd0, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<float_t> GetLoudnessByLevelIdOrNull(::StringW levelId);

  /// @brief Method GetLoudnessCorrectionByLevelId, addr 0x14c9d1c, size 0x20, virtual false, abstract: false, final false
  inline float_t GetLoudnessCorrectionByLevelId(::StringW levelId);

  /// @brief Method GetMaxSfxVolumeByLevelId, addr 0x14c9db8, size 0x18, virtual false, abstract: false, final false
  inline float_t GetMaxSfxVolumeByLevelId(::StringW levelId);

  static inline ::GlobalNamespace::PerceivedLoudnessPerLevelModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>* loudnessPerLeveDataList);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& __cordl_internal_get__loudnessLevelPerLevelId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, float_t>*> const& __cordl_internal_get__loudnessLevelPerLevelId() const;

  constexpr void __cordl_internal_set__loudnessLevelPerLevelId(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value);

  /// @brief Method .ctor, addr 0x14c971c, size 0x600, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>* loudnessPerLeveDataList);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerceivedLoudnessPerLevelModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerceivedLoudnessPerLevelModel(PerceivedLoudnessPerLevelModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerceivedLoudnessPerLevelModel(PerceivedLoudnessPerLevelModel const&) = delete;

  /// @brief Field _loudnessLevelPerLevelId, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* ____loudnessLevelPerLevelId;

  /// @brief Field kDefaultLoudness offset 0xffffffff size 0x4
  static constexpr float_t kDefaultLoudness{ -6.0 };

  /// @brief Field kPerceivedLoudnessTarget offset 0xffffffff size 0x4
  static constexpr float_t kPerceivedLoudnessTarget{ -11.0 };

  /// @brief Field kSfxLoudnessTarget offset 0xffffffff size 0x4
  static constexpr float_t kSfxLoudnessTarget{ -10.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerceivedLoudnessPerLevelModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PerceivedLoudnessPerLevelModel, ____loudnessLevelPerLevelId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerceivedLoudnessPerLevelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerceivedLoudnessPerLevelModel*, "", "PerceivedLoudnessPerLevelModel");
