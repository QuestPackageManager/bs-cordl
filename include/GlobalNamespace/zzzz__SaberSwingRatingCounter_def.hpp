#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberSwingRatingCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SaberSwingRatingCounter)
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
namespace GlobalNamespace {
class ISaberMovementData;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidChangeReceiver;
}
namespace GlobalNamespace {
class ISaberSwingRatingCounterDidFinishReceiver;
}
namespace GlobalNamespace {
template <typename T> class LazyCopyHashSet_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberSwingRatingCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberSwingRatingCounter);
// Dependencies ISaberMovementDataProcessor, ISaberSwingRatingCounter, System.Object, UnityEngine.Plane, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberSwingRatingCounter
class CORDL_TYPE SaberSwingRatingCounter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _afterCutBottomPos, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get__afterCutBottomPos, put = __cordl_internal_set__afterCutBottomPos)) ::UnityEngine::Vector3 _afterCutBottomPos;

  /// @brief Field _afterCutRating, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__afterCutRating, put = __cordl_internal_set__afterCutRating)) float_t _afterCutRating;

  /// @brief Field _afterCutTopPos, offset 0x8c, size 0xc
  __declspec(property(get = __cordl_internal_get__afterCutTopPos, put = __cordl_internal_set__afterCutTopPos)) ::UnityEngine::Vector3 _afterCutTopPos;

  /// @brief Field _beforeCutBottomPos, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get__beforeCutBottomPos, put = __cordl_internal_set__beforeCutBottomPos)) ::UnityEngine::Vector3 _beforeCutBottomPos;

  /// @brief Field _beforeCutRating, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__beforeCutRating, put = __cordl_internal_set__beforeCutRating)) float_t _beforeCutRating;

  /// @brief Field _beforeCutTopPos, offset 0x74, size 0xc
  __declspec(property(get = __cordl_internal_get__beforeCutTopPos, put = __cordl_internal_set__beforeCutTopPos)) ::UnityEngine::Vector3 _beforeCutTopPos;

  /// @brief Field _cutBottomPos, offset 0xbc, size 0xc
  __declspec(property(get = __cordl_internal_get__cutBottomPos, put = __cordl_internal_set__cutBottomPos)) ::UnityEngine::Vector3 _cutBottomPos;

  /// @brief Field _cutPlaneNormal, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get__cutPlaneNormal, put = __cordl_internal_set__cutPlaneNormal)) ::UnityEngine::Vector3 _cutPlaneNormal;

  /// @brief Field _cutTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__cutTime, put = __cordl_internal_set__cutTime)) float_t _cutTime;

  /// @brief Field _cutTopPos, offset 0xb0, size 0xc
  __declspec(property(get = __cordl_internal_get__cutTopPos, put = __cordl_internal_set__cutTopPos)) ::UnityEngine::Vector3 _cutTopPos;

  /// @brief Field _didChangeReceivers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__didChangeReceivers,
                      put = __cordl_internal_set__didChangeReceivers)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* _didChangeReceivers;

  /// @brief Field _didFinishReceivers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__didFinishReceivers,
                      put = __cordl_internal_set__didFinishReceivers)) ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* _didFinishReceivers;

  /// @brief Field _finished, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__finished, put = __cordl_internal_set__finished)) bool _finished;

  /// @brief Field _newPlaneNormal, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get__newPlaneNormal, put = __cordl_internal_set__newPlaneNormal)) ::UnityEngine::Vector3 _newPlaneNormal;

  /// @brief Field _noteForward, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get__noteForward, put = __cordl_internal_set__noteForward)) ::UnityEngine::Vector3 _noteForward;

  /// @brief Field _notePlane, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__notePlane, put = __cordl_internal_set__notePlane)) ::UnityEngine::Plane _notePlane;

  /// @brief Field _notePlaneCenter, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get__notePlaneCenter, put = __cordl_internal_set__notePlaneCenter)) ::UnityEngine::Vector3 _notePlaneCenter;

  /// @brief Field _notePlaneWasCut, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__notePlaneWasCut, put = __cordl_internal_set__notePlaneWasCut)) bool _notePlaneWasCut;

  /// @brief Field _rateAfterCut, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__rateAfterCut, put = __cordl_internal_set__rateAfterCut)) bool _rateAfterCut;

  /// @brief Field _rateBeforeCut, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__rateBeforeCut, put = __cordl_internal_set__rateBeforeCut)) bool _rateBeforeCut;

  /// @brief Field _saberMovementData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__saberMovementData, put = __cordl_internal_set__saberMovementData)) ::GlobalNamespace::ISaberMovementData* _saberMovementData;

  __declspec(property(get = get_afterCutRating)) float_t afterCutRating;

  __declspec(property(get = get_beforeCutRating)) float_t beforeCutRating;

  /// @brief Convert operator to "::GlobalNamespace::ISaberMovementDataProcessor"
  constexpr operator ::GlobalNamespace::ISaberMovementDataProcessor*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISaberSwingRatingCounter"
  constexpr operator ::GlobalNamespace::ISaberSwingRatingCounter*() noexcept;

  /// @brief Method DrawGizmos, addr 0x26b7930, size 0x2b4, virtual false, abstract: false, final false
  inline void DrawGizmos();

  /// @brief Method Finish, addr 0x26b7784, size 0x1ac, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method Init, addr 0x26b6a0c, size 0x418, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::ISaberMovementData* saberMovementData, ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation, bool rateBeforeCut, bool rateAfterCut);

  static inline ::GlobalNamespace::SaberSwingRatingCounter* New_ctor();

  /// @brief Method ProcessNewData, addr 0x26b6e24, size 0x960, virtual true, abstract: false, final true
  inline void ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid);

  /// @brief Method RegisterDidChangeReceiver, addr 0x26b68ac, size 0x58, virtual true, abstract: false, final true
  inline void RegisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);

  /// @brief Method RegisterDidFinishReceiver, addr 0x26b6904, size 0x58, virtual true, abstract: false, final true
  inline void RegisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);

  /// @brief Method UnregisterDidChangeReceiver, addr 0x26b695c, size 0x58, virtual true, abstract: false, final true
  inline void UnregisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);

  /// @brief Method UnregisterDidFinishReceiver, addr 0x26b69b4, size 0x58, virtual true, abstract: false, final true
  inline void UnregisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__afterCutBottomPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__afterCutBottomPos();

  constexpr float_t const& __cordl_internal_get__afterCutRating() const;

  constexpr float_t& __cordl_internal_get__afterCutRating();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__afterCutTopPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__afterCutTopPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__beforeCutBottomPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__beforeCutBottomPos();

  constexpr float_t const& __cordl_internal_get__beforeCutRating() const;

  constexpr float_t& __cordl_internal_get__beforeCutRating();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__beforeCutTopPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__beforeCutTopPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cutBottomPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__cutBottomPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cutPlaneNormal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__cutPlaneNormal();

  constexpr float_t const& __cordl_internal_get__cutTime() const;

  constexpr float_t& __cordl_internal_get__cutTime();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cutTopPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__cutTopPos();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* const& __cordl_internal_get__didChangeReceivers() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>*& __cordl_internal_get__didChangeReceivers();

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* const& __cordl_internal_get__didFinishReceivers() const;

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>*& __cordl_internal_get__didFinishReceivers();

  constexpr bool const& __cordl_internal_get__finished() const;

  constexpr bool& __cordl_internal_get__finished();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__newPlaneNormal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__newPlaneNormal();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__noteForward() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__noteForward();

  constexpr ::UnityEngine::Plane const& __cordl_internal_get__notePlane() const;

  constexpr ::UnityEngine::Plane& __cordl_internal_get__notePlane();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__notePlaneCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__notePlaneCenter();

  constexpr bool const& __cordl_internal_get__notePlaneWasCut() const;

  constexpr bool& __cordl_internal_get__notePlaneWasCut();

  constexpr bool const& __cordl_internal_get__rateAfterCut() const;

  constexpr bool& __cordl_internal_get__rateAfterCut();

  constexpr bool const& __cordl_internal_get__rateBeforeCut() const;

  constexpr bool& __cordl_internal_get__rateBeforeCut();

  constexpr ::GlobalNamespace::ISaberMovementData* const& __cordl_internal_get__saberMovementData() const;

  constexpr ::GlobalNamespace::ISaberMovementData*& __cordl_internal_get__saberMovementData();

  constexpr void __cordl_internal_set__afterCutBottomPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__afterCutRating(float_t value);

  constexpr void __cordl_internal_set__afterCutTopPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__beforeCutBottomPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__beforeCutRating(float_t value);

  constexpr void __cordl_internal_set__beforeCutTopPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__cutBottomPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__cutPlaneNormal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__cutTime(float_t value);

  constexpr void __cordl_internal_set__cutTopPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__didChangeReceivers(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* value);

  constexpr void __cordl_internal_set__didFinishReceivers(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* value);

  constexpr void __cordl_internal_set__finished(bool value);

  constexpr void __cordl_internal_set__newPlaneNormal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__noteForward(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__notePlane(::UnityEngine::Plane value);

  constexpr void __cordl_internal_set__notePlaneCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__notePlaneWasCut(bool value);

  constexpr void __cordl_internal_set__rateAfterCut(bool value);

  constexpr void __cordl_internal_set__rateBeforeCut(bool value);

  constexpr void __cordl_internal_set__saberMovementData(::GlobalNamespace::ISaberMovementData* value);

  /// @brief Method .ctor, addr 0x26b7be4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_afterCutRating, addr 0x26b68a4, size 0x8, virtual true, abstract: false, final true
  inline float_t get_afterCutRating();

  /// @brief Method get_beforeCutRating, addr 0x26b689c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beforeCutRating();

  /// @brief Convert to "::GlobalNamespace::ISaberMovementDataProcessor"
  constexpr ::GlobalNamespace::ISaberMovementDataProcessor* i___GlobalNamespace__ISaberMovementDataProcessor() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISaberSwingRatingCounter"
  constexpr ::GlobalNamespace::ISaberSwingRatingCounter* i___GlobalNamespace__ISaberSwingRatingCounter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberSwingRatingCounter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberSwingRatingCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberSwingRatingCounter(SaberSwingRatingCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberSwingRatingCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberSwingRatingCounter(SaberSwingRatingCounter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12859 };

  /// @brief Field _saberMovementData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ISaberMovementData* ____saberMovementData;

  /// @brief Field _cutPlaneNormal, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____cutPlaneNormal;

  /// @brief Field _cutTime, offset: 0x24, size: 0x4, def value: None
  float_t ____cutTime;

  /// @brief Field _afterCutRating, offset: 0x28, size: 0x4, def value: None
  float_t ____afterCutRating;

  /// @brief Field _beforeCutRating, offset: 0x2c, size: 0x4, def value: None
  float_t ____beforeCutRating;

  /// @brief Field _notePlane, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Plane ____notePlane;

  /// @brief Field _notePlaneWasCut, offset: 0x40, size: 0x1, def value: None
  bool ____notePlaneWasCut;

  /// @brief Field _noteForward, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____noteForward;

  /// @brief Field _rateBeforeCut, offset: 0x50, size: 0x1, def value: None
  bool ____rateBeforeCut;

  /// @brief Field _rateAfterCut, offset: 0x51, size: 0x1, def value: None
  bool ____rateAfterCut;

  /// @brief Field _didChangeReceivers, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* ____didChangeReceivers;

  /// @brief Field _didFinishReceivers, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* ____didFinishReceivers;

  /// @brief Field _notePlaneCenter, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____notePlaneCenter;

  /// @brief Field _beforeCutTopPos, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____beforeCutTopPos;

  /// @brief Field _beforeCutBottomPos, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____beforeCutBottomPos;

  /// @brief Field _afterCutTopPos, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____afterCutTopPos;

  /// @brief Field _afterCutBottomPos, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____afterCutBottomPos;

  /// @brief Field _newPlaneNormal, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____newPlaneNormal;

  /// @brief Field _cutTopPos, offset: 0xb0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____cutTopPos;

  /// @brief Field _cutBottomPos, offset: 0xbc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____cutBottomPos;

  /// @brief Field _finished, offset: 0xc8, size: 0x1, def value: None
  bool ____finished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____saberMovementData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____cutPlaneNormal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____cutTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____afterCutRating) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____beforeCutRating) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____notePlane) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____notePlaneWasCut) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____noteForward) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____rateBeforeCut) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____rateAfterCut) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____didChangeReceivers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____didFinishReceivers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____notePlaneCenter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____beforeCutTopPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____beforeCutBottomPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____afterCutTopPos) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____afterCutBottomPos) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____newPlaneNormal) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____cutTopPos) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____cutBottomPos) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberSwingRatingCounter, ____finished) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberSwingRatingCounter, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberSwingRatingCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberSwingRatingCounter*, "", "SaberSwingRatingCounter");
