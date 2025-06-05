#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberMovementData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBladeMovementData_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaberMovementData)
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
namespace GlobalNamespace {
class ISaberMovementDataProcessor;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberMovementData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberMovementData);
// Dependencies IBladeMovementData, ISaberMovementData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberMovementData
class CORDL_TYPE SaberMovementData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bladeSpeed, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__bladeSpeed, put = __cordl_internal_set__bladeSpeed)) float_t _bladeSpeed;

  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::ArrayW<::GlobalNamespace::BladeMovementDataElement, ::Array<::GlobalNamespace::BladeMovementDataElement>*>
      _data;

  /// @brief Field _dataProcessors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dataProcessors,
                      put = __cordl_internal_set__dataProcessors)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>* _dataProcessors;

  /// @brief Field _nextAddIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__nextAddIndex, put = __cordl_internal_set__nextAddIndex)) int32_t _nextAddIndex;

  /// @brief Field _validCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__validCount, put = __cordl_internal_set__validCount)) int32_t _validCount;

  __declspec(property(get = get_bladeSpeed)) float_t bladeSpeed;

  __declspec(property(get = get_lastAddedData)) ::GlobalNamespace::BladeMovementDataElement lastAddedData;

  __declspec(property(get = get_prevAddedData)) ::GlobalNamespace::BladeMovementDataElement prevAddedData;

  /// @brief Convert operator to "::GlobalNamespace::IBladeMovementData"
  constexpr operator ::GlobalNamespace::IBladeMovementData*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISaberMovementData"
  constexpr operator ::GlobalNamespace::ISaberMovementData*() noexcept;

  /// @brief Method AddDataProcessor, addr 0x26b1668, size 0x58, virtual true, abstract: false, final true
  inline void AddDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);

  /// @brief Method AddNewData, addr 0x26b1898, size 0x4c8, virtual false, abstract: false, final false
  inline void AddNewData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, float_t time);

  /// @brief Method ComputeAdditionalData, addr 0x26b1d60, size 0x22c, virtual false, abstract: false, final false
  inline void ComputeAdditionalData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, int32_t idxOffset, ::ByRef<::UnityEngine::Vector3> segmentNormal, ::ByRef<float_t> segmentAngle);

  /// @brief Method ComputeCutPlaneNormal, addr 0x26b20c8, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ComputeCutPlaneNormal();

  /// @brief Method ComputePlaneNormal, addr 0x26b1f8c, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ComputePlaneNormal(::UnityEngine::Vector3 tp0, ::UnityEngine::Vector3 bp0, ::UnityEngine::Vector3 tp1, ::UnityEngine::Vector3 bp1);

  /// @brief Method ComputeSwingRating, addr 0x26b240c, size 0xc, virtual true, abstract: false, final true
  inline float_t ComputeSwingRating();

  /// @brief Method ComputeSwingRating, addr 0x26b2168, size 0x2a4, virtual false, abstract: false, final false
  inline float_t ComputeSwingRating(bool overrideSegmenAngle, float_t overrideValue);

  /// @brief Method ComputeSwingRating, addr 0x26b2160, size 0x8, virtual true, abstract: false, final true
  inline float_t ComputeSwingRating(float_t overrideSegmentAngle);

  static inline ::GlobalNamespace::SaberMovementData* New_ctor();

  /// @brief Method RemoveDataProcessor, addr 0x26b16c0, size 0x58, virtual true, abstract: false, final true
  inline void RemoveDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);

  /// @brief Method RequestLastDataProcessing, addr 0x26b1718, size 0x180, virtual true, abstract: false, final true
  inline void RequestLastDataProcessing(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);

  constexpr float_t const& __cordl_internal_get__bladeSpeed() const;

  constexpr float_t& __cordl_internal_get__bladeSpeed();

  constexpr ::ArrayW<::GlobalNamespace::BladeMovementDataElement, ::Array<::GlobalNamespace::BladeMovementDataElement>*> const& __cordl_internal_get__data() const;

  constexpr ::ArrayW<::GlobalNamespace::BladeMovementDataElement, ::Array<::GlobalNamespace::BladeMovementDataElement>*>& __cordl_internal_get__data();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>* const& __cordl_internal_get__dataProcessors() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>*& __cordl_internal_get__dataProcessors();

  constexpr int32_t const& __cordl_internal_get__nextAddIndex() const;

  constexpr int32_t& __cordl_internal_get__nextAddIndex();

  constexpr int32_t const& __cordl_internal_get__validCount() const;

  constexpr int32_t& __cordl_internal_get__validCount();

  constexpr void __cordl_internal_set__bladeSpeed(float_t value);

  constexpr void __cordl_internal_set__data(::ArrayW<::GlobalNamespace::BladeMovementDataElement, ::Array<::GlobalNamespace::BladeMovementDataElement>*> value);

  constexpr void __cordl_internal_set__dataProcessors(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>* value);

  constexpr void __cordl_internal_set__nextAddIndex(int32_t value);

  constexpr void __cordl_internal_set__validCount(int32_t value);

  /// @brief Method .ctor, addr 0x26b15c0, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bladeSpeed, addr 0x26b1500, size 0x8, virtual true, abstract: false, final true
  inline float_t get_bladeSpeed();

  /// @brief Method get_lastAddedData, addr 0x26b1508, size 0x5c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BladeMovementDataElement get_lastAddedData();

  /// @brief Method get_prevAddedData, addr 0x26b1564, size 0x5c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BladeMovementDataElement get_prevAddedData();

  /// @brief Convert to "::GlobalNamespace::IBladeMovementData"
  constexpr ::GlobalNamespace::IBladeMovementData* i___GlobalNamespace__IBladeMovementData() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISaberMovementData"
  constexpr ::GlobalNamespace::ISaberMovementData* i___GlobalNamespace__ISaberMovementData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberMovementData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberMovementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberMovementData(SaberMovementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberMovementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberMovementData(SaberMovementData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12857 };

  /// @brief Field kOutOfRangeBladeSpeed offset 0xffffffff size 0x4
  static constexpr float_t kOutOfRangeBladeSpeed{ static_cast<float_t>(100.0f) };

  /// @brief Field kSmoothDownBladeSpeedCoef offset 0xffffffff size 0x4
  static constexpr float_t kSmoothDownBladeSpeedCoef{ static_cast<float_t>(2.0f) };

  /// @brief Field kSmoothUpBladeSpeedCoef offset 0xffffffff size 0x4
  static constexpr float_t kSmoothUpBladeSpeedCoef{ static_cast<float_t>(24.0f) };

  /// @brief Field _data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BladeMovementDataElement, ::Array<::GlobalNamespace::BladeMovementDataElement>*> ____data;

  /// @brief Field _dataProcessors, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>* ____dataProcessors;

  /// @brief Field _nextAddIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____nextAddIndex;

  /// @brief Field _validCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____validCount;

  /// @brief Field _bladeSpeed, offset: 0x28, size: 0x4, def value: None
  float_t ____bladeSpeed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberMovementData, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberMovementData, ____dataProcessors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberMovementData, ____nextAddIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberMovementData, ____validCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberMovementData, ____bladeSpeed) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberMovementData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberMovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberMovementData*, "", "SaberMovementData");
