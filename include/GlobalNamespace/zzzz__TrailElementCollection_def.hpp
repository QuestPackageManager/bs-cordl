#pragma once
// IWYU pragma private; include "GlobalNamespace/TrailElementCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrailElementCollection)
namespace GlobalNamespace {
class TrailElement;
}
namespace GlobalNamespace {
struct __TrailElementCollection__InterpolationState;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TrailElementCollection;
}
namespace GlobalNamespace {
struct __TrailElementCollection__InterpolationState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrailElementCollection);
MARK_VAL_T(::GlobalNamespace::__TrailElementCollection__InterpolationState);
// Type: ::InterpolationState
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TrailElementCollection::InterpolationState
struct CORDL_TYPE __TrailElementCollection__InterpolationState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrailElementCollection__InterpolationState();

  // Ctor Parameters [CppParam { name: "segmentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "segmentLerp", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __TrailElementCollection__InterpolationState(int32_t segmentIndex, float_t segmentLerp) noexcept;

  /// @brief Field segmentIndex, offset: 0x0, size: 0x4, def value: None
  int32_t segmentIndex;

  /// @brief Field segmentLerp, offset: 0x4, size: 0x4, def value: None
  float_t segmentLerp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18773 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TrailElementCollection__InterpolationState, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrailElementCollection__InterpolationState, segmentIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__TrailElementCollection__InterpolationState, segmentLerp) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrailElementCollection
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TrailElementCollection*
class CORDL_TYPE TrailElementCollection : public ::System::Object {
public:
  // Declarations
  using InterpolationState = ::GlobalNamespace::__TrailElementCollection__InterpolationState;

  /// @brief Field _capacity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__capacity, put = __cordl_internal_set__capacity)) int32_t _capacity;

  /// @brief Field _headIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__headIndex, put = __cordl_internal_set__headIndex)) int32_t _headIndex;

  /// @brief Field _snapshots, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__snapshots, put = __cordl_internal_set__snapshots)) ::ArrayW<::GlobalNamespace::TrailElement*, ::Array<::GlobalNamespace::TrailElement*>*> _snapshots;

  /// @brief Field _totalDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__totalDistance, put = __cordl_internal_set__totalDistance)) float_t _totalDistance;

  /// @brief Method GetElement, addr 0x40267f8, size 0x44, virtual false, abstract: false, final false
  inline ::GlobalNamespace::TrailElement* GetElement(int32_t index);

  /// @brief Method InitSnapshots, addr 0x4024cf4, size 0x90, virtual false, abstract: false, final false
  inline void InitSnapshots(::UnityEngine::Vector3 defaultStartPosition, ::UnityEngine::Vector3 defaultEndPosition, float_t time);

  /// @brief Method Interpolate, addr 0x402613c, size 0x294, virtual false, abstract: false, final false
  inline void Interpolate(float_t t, ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState> lerpState, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> normal,
                          ByRef<float_t> time);

  /// @brief Method MoveTailToHead, addr 0x4025210, size 0x9c, virtual false, abstract: false, final false
  inline void MoveTailToHead();

  static inline ::GlobalNamespace::TrailElementCollection* New_ctor(int32_t capacity, ::UnityEngine::Vector3 defaultStartPosition, ::UnityEngine::Vector3 defaultEndPosition, float_t time);

  /// @brief Method SetHeadData, addr 0x402515c, size 0xb4, virtual false, abstract: false, final false
  inline void SetHeadData(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t time);

  /// @brief Method UpdateDistances, addr 0x40252ac, size 0x7c, virtual false, abstract: false, final false
  inline void UpdateDistances();

  /// @brief Method UpdateLerpState, addr 0x40266e0, size 0x118, virtual false, abstract: false, final false
  inline void UpdateLerpState(float_t t, ByRef<::GlobalNamespace::__TrailElementCollection__InterpolationState> interpolationState);

  constexpr int32_t const& __cordl_internal_get__capacity() const;

  constexpr int32_t& __cordl_internal_get__capacity();

  constexpr int32_t const& __cordl_internal_get__headIndex() const;

  constexpr int32_t& __cordl_internal_get__headIndex();

  constexpr ::ArrayW<::GlobalNamespace::TrailElement*, ::Array<::GlobalNamespace::TrailElement*>*> const& __cordl_internal_get__snapshots() const;

  constexpr ::ArrayW<::GlobalNamespace::TrailElement*, ::Array<::GlobalNamespace::TrailElement*>*>& __cordl_internal_get__snapshots();

  constexpr float_t const& __cordl_internal_get__totalDistance() const;

  constexpr float_t& __cordl_internal_get__totalDistance();

  constexpr void __cordl_internal_set__capacity(int32_t value);

  constexpr void __cordl_internal_set__headIndex(int32_t value);

  constexpr void __cordl_internal_set__snapshots(::ArrayW<::GlobalNamespace::TrailElement*, ::Array<::GlobalNamespace::TrailElement*>*> value);

  constexpr void __cordl_internal_set__totalDistance(float_t value);

  /// @brief Method .ctor, addr 0x4024944, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::UnityEngine::Vector3 defaultStartPosition, ::UnityEngine::Vector3 defaultEndPosition, float_t time);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrailElementCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrailElementCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrailElementCollection(TrailElementCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrailElementCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrailElementCollection(TrailElementCollection const&) = delete;

  /// @brief Field _capacity, offset: 0x10, size: 0x4, def value: None
  int32_t ____capacity;

  /// @brief Field _snapshots, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::TrailElement*, ::Array<::GlobalNamespace::TrailElement*>*> ____snapshots;

  /// @brief Field _headIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____headIndex;

  /// @brief Field _totalDistance, offset: 0x24, size: 0x4, def value: None
  float_t ____totalDistance;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18774 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrailElementCollection, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailElementCollection, ____capacity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailElementCollection, ____snapshots) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailElementCollection, ____headIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrailElementCollection, ____totalDistance) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrailElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailElementCollection*, "", "TrailElementCollection");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TrailElementCollection__InterpolationState, "", "TrailElementCollection/InterpolationState");
