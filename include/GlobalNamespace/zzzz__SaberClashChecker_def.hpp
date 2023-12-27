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
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class Saber;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5294))
// CS Name: ::SaberClashChecker*
class CORDL_TYPE SaberClashChecker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _sabersAreClashing, offset 0x10, size 0x1
  __declspec(property(get = __get__sabersAreClashing, put = __set__sabersAreClashing)) bool _sabersAreClashing;

  /// @brief Field _clashingPoint, offset 0x14, size 0xc
  __declspec(property(get = __get__clashingPoint, put = __set__clashingPoint))::UnityEngine::Vector3 _clashingPoint;

  /// @brief Field _leftSaber, offset 0x20, size 0x8
  __declspec(property(get = __get__leftSaber, put = __set__leftSaber))::GlobalNamespace::Saber* _leftSaber;

  /// @brief Field _rightSaber, offset 0x28, size 0x8
  __declspec(property(get = __get__rightSaber, put = __set__rightSaber))::GlobalNamespace::Saber* _rightSaber;

  /// @brief Field _prevGetFrameNum, offset 0x30, size 0x4
  __declspec(property(get = __get__prevGetFrameNum, put = __set__prevGetFrameNum)) int32_t _prevGetFrameNum;

  constexpr bool& __get__sabersAreClashing();

  constexpr bool const& __get__sabersAreClashing() const;

  constexpr void __set__sabersAreClashing(bool value);

  constexpr ::UnityEngine::Vector3& __get__clashingPoint();

  constexpr ::UnityEngine::Vector3 const& __get__clashingPoint() const;

  constexpr void __set__clashingPoint(::UnityEngine::Vector3 value);

  constexpr ::GlobalNamespace::Saber*& __get__leftSaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__leftSaber() const;

  constexpr void __set__leftSaber(::GlobalNamespace::Saber* value);

  constexpr ::GlobalNamespace::Saber*& __get__rightSaber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> const& __get__rightSaber() const;

  constexpr void __set__rightSaber(::GlobalNamespace::Saber* value);

  constexpr int32_t& __get__prevGetFrameNum();

  constexpr int32_t const& __get__prevGetFrameNum() const;

  constexpr void __set__prevGetFrameNum(int32_t value);

  /// @brief Method Init addr 0x2263c04 size 0x1c virtual false final false
  inline void Init(::GlobalNamespace::SaberManager* saberManager);

  /// @brief Method AreSabersClashing addr 0x225f95c size 0x164 virtual false final false
  inline bool AreSabersClashing(ByRef<::UnityEngine::Vector3> clashingPoint);

  /// @brief Method SegmentToSegmentDist addr 0x2263c20 size 0x268 virtual false final false
  inline float_t SegmentToSegmentDist(::UnityEngine::Vector3 fromA, ::UnityEngine::Vector3 toA, ::UnityEngine::Vector3 fromB, ::UnityEngine::Vector3 toB, ByRef<::UnityEngine::Vector3> inbetweenPoint);

  static inline ::GlobalNamespace::SaberClashChecker* New_ctor();

  /// @brief Method .ctor addr 0x2263e88 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaberClashChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberClashChecker(SaberClashChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberClashChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberClashChecker(SaberClashChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberClashChecker();

public:
  /// @brief Field _sabersAreClashing, offset: 0x10, size: 0x1, def value: None
  bool ____sabersAreClashing;

  /// @brief Field _clashingPoint, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____clashingPoint;

  /// @brief Field _leftSaber, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____leftSaber;

  /// @brief Field _rightSaber, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::Saber* ____rightSaber;

  /// @brief Field _prevGetFrameNum, offset: 0x30, size: 0x4, def value: None
  int32_t ____prevGetFrameNum;

  /// @brief Field kMinDistanceToClash offset 0xffffffff size 0x4
  static constexpr float_t kMinDistanceToClash{ 0.08 };

  /// @brief Field kIgnoredTime offset 0xffffffff size 0x4
  static constexpr float_t kIgnoredTime{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberClashChecker, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberClashChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberClashChecker*, "", "SaberClashChecker");
