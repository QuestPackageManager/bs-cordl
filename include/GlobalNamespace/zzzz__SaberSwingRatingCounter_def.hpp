#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SaberSwingRatingCounter)
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
namespace GlobalNamespace {
class ISaberMovementDataProcessor;
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
class ISaberSwingRatingCounter;
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
// Type: ::SaberSwingRatingCounter
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 201, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10163))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4196))
// CS Name: ::SaberSwingRatingCounter*
class CORDL_TYPE SaberSwingRatingCounter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _saberMovementData, offset 0x10, size 0x8
  __declspec(property(get = __get__saberMovementData, put = __set__saberMovementData))::GlobalNamespace::ISaberMovementData* _saberMovementData;

  /// @brief Field _cutPlaneNormal, offset 0x18, size 0xc
  __declspec(property(get = __get__cutPlaneNormal, put = __set__cutPlaneNormal))::UnityEngine::Vector3 _cutPlaneNormal;

  /// @brief Field _cutTime, offset 0x24, size 0x4
  __declspec(property(get = __get__cutTime, put = __set__cutTime)) float_t _cutTime;

  /// @brief Field _afterCutRating, offset 0x28, size 0x4
  __declspec(property(get = __get__afterCutRating, put = __set__afterCutRating)) float_t _afterCutRating;

  /// @brief Field _beforeCutRating, offset 0x2c, size 0x4
  __declspec(property(get = __get__beforeCutRating, put = __set__beforeCutRating)) float_t _beforeCutRating;

  /// @brief Field _notePlane, offset 0x30, size 0x10
  __declspec(property(get = __get__notePlane, put = __set__notePlane))::UnityEngine::Plane _notePlane;

  /// @brief Field _notePlaneWasCut, offset 0x40, size 0x1
  __declspec(property(get = __get__notePlaneWasCut, put = __set__notePlaneWasCut)) bool _notePlaneWasCut;

  /// @brief Field _noteForward, offset 0x44, size 0xc
  __declspec(property(get = __get__noteForward, put = __set__noteForward))::UnityEngine::Vector3 _noteForward;

  /// @brief Field _rateBeforeCut, offset 0x50, size 0x1
  __declspec(property(get = __get__rateBeforeCut, put = __set__rateBeforeCut)) bool _rateBeforeCut;

  /// @brief Field _rateAfterCut, offset 0x51, size 0x1
  __declspec(property(get = __get__rateAfterCut, put = __set__rateAfterCut)) bool _rateAfterCut;

  /// @brief Field _didChangeReceivers, offset 0x58, size 0x8
  __declspec(property(get = __get__didChangeReceivers,
                      put = __set__didChangeReceivers))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* _didChangeReceivers;

  /// @brief Field _didFinishReceivers, offset 0x60, size 0x8
  __declspec(property(get = __get__didFinishReceivers,
                      put = __set__didFinishReceivers))::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* _didFinishReceivers;

  /// @brief Field _notePlaneCenter, offset 0x68, size 0xc
  __declspec(property(get = __get__notePlaneCenter, put = __set__notePlaneCenter))::UnityEngine::Vector3 _notePlaneCenter;

  /// @brief Field _beforeCutTopPos, offset 0x74, size 0xc
  __declspec(property(get = __get__beforeCutTopPos, put = __set__beforeCutTopPos))::UnityEngine::Vector3 _beforeCutTopPos;

  /// @brief Field _beforeCutBottomPos, offset 0x80, size 0xc
  __declspec(property(get = __get__beforeCutBottomPos, put = __set__beforeCutBottomPos))::UnityEngine::Vector3 _beforeCutBottomPos;

  /// @brief Field _afterCutTopPos, offset 0x8c, size 0xc
  __declspec(property(get = __get__afterCutTopPos, put = __set__afterCutTopPos))::UnityEngine::Vector3 _afterCutTopPos;

  /// @brief Field _afterCutBottomPos, offset 0x98, size 0xc
  __declspec(property(get = __get__afterCutBottomPos, put = __set__afterCutBottomPos))::UnityEngine::Vector3 _afterCutBottomPos;

  /// @brief Field _newPlaneNormal, offset 0xa4, size 0xc
  __declspec(property(get = __get__newPlaneNormal, put = __set__newPlaneNormal))::UnityEngine::Vector3 _newPlaneNormal;

  /// @brief Field _cutTopPos, offset 0xb0, size 0xc
  __declspec(property(get = __get__cutTopPos, put = __set__cutTopPos))::UnityEngine::Vector3 _cutTopPos;

  /// @brief Field _cutBottomPos, offset 0xbc, size 0xc
  __declspec(property(get = __get__cutBottomPos, put = __set__cutBottomPos))::UnityEngine::Vector3 _cutBottomPos;

  /// @brief Field _finished, offset 0xc8, size 0x1
  __declspec(property(get = __get__finished, put = __set__finished)) bool _finished;

  __declspec(property(get = get_beforeCutRating)) float_t beforeCutRating;

  __declspec(property(get = get_afterCutRating)) float_t afterCutRating;

  /// @brief Convert operator to "::GlobalNamespace::ISaberSwingRatingCounter"
  constexpr operator ::GlobalNamespace::ISaberSwingRatingCounter*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISaberSwingRatingCounter"
  constexpr ::GlobalNamespace::ISaberSwingRatingCounter* i___GlobalNamespace__ISaberSwingRatingCounter() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ISaberMovementDataProcessor"
  constexpr operator ::GlobalNamespace::ISaberMovementDataProcessor*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ISaberMovementDataProcessor"
  constexpr ::GlobalNamespace::ISaberMovementDataProcessor* i___GlobalNamespace__ISaberMovementDataProcessor() noexcept;

  constexpr ::GlobalNamespace::ISaberMovementData*& __get__saberMovementData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaberMovementData*> const& __get__saberMovementData() const;

  constexpr void __set__saberMovementData(::GlobalNamespace::ISaberMovementData* value);

  constexpr ::UnityEngine::Vector3& __get__cutPlaneNormal();

  constexpr ::UnityEngine::Vector3 const& __get__cutPlaneNormal() const;

  constexpr void __set__cutPlaneNormal(::UnityEngine::Vector3 value);

  constexpr float_t& __get__cutTime();

  constexpr float_t const& __get__cutTime() const;

  constexpr void __set__cutTime(float_t value);

  constexpr float_t& __get__afterCutRating();

  constexpr float_t const& __get__afterCutRating() const;

  constexpr void __set__afterCutRating(float_t value);

  constexpr float_t& __get__beforeCutRating();

  constexpr float_t const& __get__beforeCutRating() const;

  constexpr void __set__beforeCutRating(float_t value);

  constexpr ::UnityEngine::Plane& __get__notePlane();

  constexpr ::UnityEngine::Plane const& __get__notePlane() const;

  constexpr void __set__notePlane(::UnityEngine::Plane value);

  constexpr bool& __get__notePlaneWasCut();

  constexpr bool const& __get__notePlaneWasCut() const;

  constexpr void __set__notePlaneWasCut(bool value);

  constexpr ::UnityEngine::Vector3& __get__noteForward();

  constexpr ::UnityEngine::Vector3 const& __get__noteForward() const;

  constexpr void __set__noteForward(::UnityEngine::Vector3 value);

  constexpr bool& __get__rateBeforeCut();

  constexpr bool const& __get__rateBeforeCut() const;

  constexpr void __set__rateBeforeCut(bool value);

  constexpr bool& __get__rateAfterCut();

  constexpr bool const& __get__rateAfterCut() const;

  constexpr void __set__rateAfterCut(bool value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>*& __get__didChangeReceivers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>*> const& __get__didChangeReceivers() const;

  constexpr void __set__didChangeReceivers(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>* value);

  constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>*& __get__didFinishReceivers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>*> const& __get__didFinishReceivers() const;

  constexpr void __set__didFinishReceivers(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>* value);

  constexpr ::UnityEngine::Vector3& __get__notePlaneCenter();

  constexpr ::UnityEngine::Vector3 const& __get__notePlaneCenter() const;

  constexpr void __set__notePlaneCenter(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__beforeCutTopPos();

  constexpr ::UnityEngine::Vector3 const& __get__beforeCutTopPos() const;

  constexpr void __set__beforeCutTopPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__beforeCutBottomPos();

  constexpr ::UnityEngine::Vector3 const& __get__beforeCutBottomPos() const;

  constexpr void __set__beforeCutBottomPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__afterCutTopPos();

  constexpr ::UnityEngine::Vector3 const& __get__afterCutTopPos() const;

  constexpr void __set__afterCutTopPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__afterCutBottomPos();

  constexpr ::UnityEngine::Vector3 const& __get__afterCutBottomPos() const;

  constexpr void __set__afterCutBottomPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__newPlaneNormal();

  constexpr ::UnityEngine::Vector3 const& __get__newPlaneNormal() const;

  constexpr void __set__newPlaneNormal(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__cutTopPos();

  constexpr ::UnityEngine::Vector3 const& __get__cutTopPos() const;

  constexpr void __set__cutTopPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__cutBottomPos();

  constexpr ::UnityEngine::Vector3 const& __get__cutBottomPos() const;

  constexpr void __set__cutBottomPos(::UnityEngine::Vector3 value);

  constexpr bool& __get__finished();

  constexpr bool const& __get__finished() const;

  constexpr void __set__finished(bool value);

  /// @brief Method get_beforeCutRating, addr 0x23248bc, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beforeCutRating();

  /// @brief Method get_afterCutRating, addr 0x23248c4, size 0x8, virtual true, abstract: false, final true
  inline float_t get_afterCutRating();

  /// @brief Method RegisterDidChangeReceiver, addr 0x23248cc, size 0x58, virtual true, abstract: false, final true
  inline void RegisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);

  /// @brief Method RegisterDidFinishReceiver, addr 0x2324924, size 0x58, virtual true, abstract: false, final true
  inline void RegisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);

  /// @brief Method UnregisterDidChangeReceiver, addr 0x232497c, size 0x58, virtual true, abstract: false, final true
  inline void UnregisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver);

  /// @brief Method UnregisterDidFinishReceiver, addr 0x23249d4, size 0x58, virtual true, abstract: false, final true
  inline void UnregisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver);

  /// @brief Method Init, addr 0x2324a2c, size 0x364, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::ISaberMovementData* saberMovementData, ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation, bool rateBeforeCut, bool rateAfterCut);

  /// @brief Method ProcessNewData, addr 0x2324d90, size 0x780, virtual true, abstract: false, final true
  inline void ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid);

  /// @brief Method Finish, addr 0x2325510, size 0x1ac, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method DrawGizmos, addr 0x23256bc, size 0x384, virtual false, abstract: false, final false
  inline void DrawGizmos();

  static inline ::GlobalNamespace::SaberSwingRatingCounter* New_ctor();

  /// @brief Method .ctor, addr 0x2325a40, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberSwingRatingCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberSwingRatingCounter(SaberSwingRatingCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberSwingRatingCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberSwingRatingCounter(SaberSwingRatingCounter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberSwingRatingCounter();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberSwingRatingCounter, 0xd0>, "Size mismatch!");

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberSwingRatingCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberSwingRatingCounter*, "", "SaberSwingRatingCounter");
