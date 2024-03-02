#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaberClashChecker)
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberClashChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberClashChecker);
// Type: ::SaberClashChecker
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SaberClashChecker*
class CORDL_TYPE SaberClashChecker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _clashingPoint, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get__clashingPoint, put = __cordl_internal_set__clashingPoint))::UnityEngine::Vector3 _clashingPoint;

  /// @brief Field _leftSaber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftSaber, put = __cordl_internal_set__leftSaber))::UnityW<::GlobalNamespace::Saber> _leftSaber;

  /// @brief Field _prevGetFrameNum, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__prevGetFrameNum, put = __cordl_internal_set__prevGetFrameNum)) int32_t _prevGetFrameNum;

  /// @brief Field _rightSaber, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rightSaber, put = __cordl_internal_set__rightSaber))::UnityW<::GlobalNamespace::Saber> _rightSaber;

  /// @brief Field _sabersAreClashing, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__sabersAreClashing, put = __cordl_internal_set__sabersAreClashing)) bool _sabersAreClashing;

  /// @brief Method AreSabersClashing, addr 0x249186c, size 0x164, virtual false, abstract: false, final false
  inline bool AreSabersClashing(ByRef<::UnityEngine::Vector3> clashingPoint);

  /// @brief Method Init, addr 0x2491850, size 0x1c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::SaberManager* saberManager);

  static inline ::GlobalNamespace::SaberClashChecker* New_ctor();

  /// @brief Method SegmentToSegmentDist, addr 0x24919d0, size 0x268, virtual false, abstract: false, final false
  inline float_t SegmentToSegmentDist(::UnityEngine::Vector3 fromA, ::UnityEngine::Vector3 toA, ::UnityEngine::Vector3 fromB, ::UnityEngine::Vector3 toB, ByRef<::UnityEngine::Vector3> inbetweenPoint);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__clashingPoint() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__clashingPoint();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__leftSaber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__leftSaber();

  constexpr int32_t const& __cordl_internal_get__prevGetFrameNum() const;

  constexpr int32_t& __cordl_internal_get__prevGetFrameNum();

  constexpr ::UnityW<::GlobalNamespace::Saber> const& __cordl_internal_get__rightSaber() const;

  constexpr ::UnityW<::GlobalNamespace::Saber>& __cordl_internal_get__rightSaber();

  constexpr bool const& __cordl_internal_get__sabersAreClashing() const;

  constexpr bool& __cordl_internal_get__sabersAreClashing();

  constexpr void __cordl_internal_set__clashingPoint(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__leftSaber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__prevGetFrameNum(int32_t value);

  constexpr void __cordl_internal_set__rightSaber(::UnityW<::GlobalNamespace::Saber> value);

  constexpr void __cordl_internal_set__sabersAreClashing(bool value);

  /// @brief Method .ctor, addr 0x2491c38, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberClashChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberClashChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberClashChecker(SaberClashChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberClashChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberClashChecker(SaberClashChecker const&) = delete;

  /// @brief Field _sabersAreClashing, offset: 0x10, size: 0x1, def value: None
  bool ____sabersAreClashing;

  /// @brief Field _clashingPoint, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____clashingPoint;

  /// @brief Field _leftSaber, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____leftSaber;

  /// @brief Field _rightSaber, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Saber> ____rightSaber;

  /// @brief Field _prevGetFrameNum, offset: 0x30, size: 0x4, def value: None
  int32_t ____prevGetFrameNum;

  /// @brief Field kIgnoredTime offset 0xffffffff size 0x4
  static constexpr float_t kIgnoredTime{ 0.1 };

  /// @brief Field kMinDistanceToClash offset 0xffffffff size 0x4
  static constexpr float_t kMinDistanceToClash{ 0.08 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberClashChecker, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashChecker, ____sabersAreClashing) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashChecker, ____clashingPoint) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashChecker, ____leftSaber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashChecker, ____rightSaber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SaberClashChecker, ____prevGetFrameNum) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberClashChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberClashChecker*, "", "SaberClashChecker");
