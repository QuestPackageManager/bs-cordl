#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFaceExpressions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFaceExpressions)
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpression;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpressionsEnumerator;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceRegionConfidence;
}
namespace GlobalNamespace {
class OVRFaceExpressions_WeightProvider;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpression;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceRegionConfidence;
}
namespace GlobalNamespace {
class OVRFaceExpressions;
}
namespace GlobalNamespace {
class OVRFaceExpressions_WeightProvider;
}
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpressionsEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRFaceExpressions_FaceExpression);
MARK_VAL_T(::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence);
MARK_REF_PTR_T(::GlobalNamespace::OVRFaceExpressions);
MARK_REF_PTR_T(::GlobalNamespace::OVRFaceExpressions_WeightProvider);
MARK_VAL_T(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRFaceExpressions/WeightProvider
class CORDL_TYPE OVRFaceExpressions_WeightProvider {
public:
  // Declarations
  /// @brief Method GetWeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression);

  // Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions_WeightProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRFaceExpressions_WeightProvider(OVRFaceExpressions_WeightProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7862 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRFaceExpressions/FaceRegionConfidence
struct CORDL_TYPE OVRFaceExpressions_FaceRegionConfidence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRFaceExpressions_FaceRegionConfidence_Unwrapped
  enum struct __OVRFaceExpressions_FaceRegionConfidence_Unwrapped : int32_t {
    __E_Lower = static_cast<int32_t>(0x0),
    __E_Upper = static_cast<int32_t>(0x1),
    __E_Max = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRFaceExpressions_FaceRegionConfidence_Unwrapped() const noexcept {
    return static_cast<__OVRFaceExpressions_FaceRegionConfidence_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRFaceExpressions_FaceRegionConfidence();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRFaceExpressions_FaceRegionConfidence(int32_t value__) noexcept;

  /// @brief Field Lower value: I32(0)
  static ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence const Lower;

  /// @brief Field Max value: I32(2)
  static ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence const Max;

  /// @brief Field Upper value: I32(1)
  static ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence const Upper;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7863 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRFaceExpressions/FaceExpression
struct CORDL_TYPE OVRFaceExpressions_FaceExpression {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRFaceExpressions_FaceExpression_Unwrapped
  enum struct __OVRFaceExpressions_FaceExpression_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0xffffffff),
    __E_BrowLowererL = static_cast<int32_t>(0x0),
    __E_BrowLowererR = static_cast<int32_t>(0x1),
    __E_CheekPuffL = static_cast<int32_t>(0x2),
    __E_CheekPuffR = static_cast<int32_t>(0x3),
    __E_CheekRaiserL = static_cast<int32_t>(0x4),
    __E_CheekRaiserR = static_cast<int32_t>(0x5),
    __E_CheekSuckL = static_cast<int32_t>(0x6),
    __E_CheekSuckR = static_cast<int32_t>(0x7),
    __E_ChinRaiserB = static_cast<int32_t>(0x8),
    __E_ChinRaiserT = static_cast<int32_t>(0x9),
    __E_DimplerL = static_cast<int32_t>(0xa),
    __E_DimplerR = static_cast<int32_t>(0xb),
    __E_EyesClosedL = static_cast<int32_t>(0xc),
    __E_EyesClosedR = static_cast<int32_t>(0xd),
    __E_EyesLookDownL = static_cast<int32_t>(0xe),
    __E_EyesLookDownR = static_cast<int32_t>(0xf),
    __E_EyesLookLeftL = static_cast<int32_t>(0x10),
    __E_EyesLookLeftR = static_cast<int32_t>(0x11),
    __E_EyesLookRightL = static_cast<int32_t>(0x12),
    __E_EyesLookRightR = static_cast<int32_t>(0x13),
    __E_EyesLookUpL = static_cast<int32_t>(0x14),
    __E_EyesLookUpR = static_cast<int32_t>(0x15),
    __E_InnerBrowRaiserL = static_cast<int32_t>(0x16),
    __E_InnerBrowRaiserR = static_cast<int32_t>(0x17),
    __E_JawDrop = static_cast<int32_t>(0x18),
    __E_JawSidewaysLeft = static_cast<int32_t>(0x19),
    __E_JawSidewaysRight = static_cast<int32_t>(0x1a),
    __E_JawThrust = static_cast<int32_t>(0x1b),
    __E_LidTightenerL = static_cast<int32_t>(0x1c),
    __E_LidTightenerR = static_cast<int32_t>(0x1d),
    __E_LipCornerDepressorL = static_cast<int32_t>(0x1e),
    __E_LipCornerDepressorR = static_cast<int32_t>(0x1f),
    __E_LipCornerPullerL = static_cast<int32_t>(0x20),
    __E_LipCornerPullerR = static_cast<int32_t>(0x21),
    __E_LipFunnelerLB = static_cast<int32_t>(0x22),
    __E_LipFunnelerLT = static_cast<int32_t>(0x23),
    __E_LipFunnelerRB = static_cast<int32_t>(0x24),
    __E_LipFunnelerRT = static_cast<int32_t>(0x25),
    __E_LipPressorL = static_cast<int32_t>(0x26),
    __E_LipPressorR = static_cast<int32_t>(0x27),
    __E_LipPuckerL = static_cast<int32_t>(0x28),
    __E_LipPuckerR = static_cast<int32_t>(0x29),
    __E_LipStretcherL = static_cast<int32_t>(0x2a),
    __E_LipStretcherR = static_cast<int32_t>(0x2b),
    __E_LipSuckLB = static_cast<int32_t>(0x2c),
    __E_LipSuckLT = static_cast<int32_t>(0x2d),
    __E_LipSuckRB = static_cast<int32_t>(0x2e),
    __E_LipSuckRT = static_cast<int32_t>(0x2f),
    __E_LipTightenerL = static_cast<int32_t>(0x30),
    __E_LipTightenerR = static_cast<int32_t>(0x31),
    __E_LipsToward = static_cast<int32_t>(0x32),
    __E_LowerLipDepressorL = static_cast<int32_t>(0x33),
    __E_LowerLipDepressorR = static_cast<int32_t>(0x34),
    __E_MouthLeft = static_cast<int32_t>(0x35),
    __E_MouthRight = static_cast<int32_t>(0x36),
    __E_NoseWrinklerL = static_cast<int32_t>(0x37),
    __E_NoseWrinklerR = static_cast<int32_t>(0x38),
    __E_OuterBrowRaiserL = static_cast<int32_t>(0x39),
    __E_OuterBrowRaiserR = static_cast<int32_t>(0x3a),
    __E_UpperLidRaiserL = static_cast<int32_t>(0x3b),
    __E_UpperLidRaiserR = static_cast<int32_t>(0x3c),
    __E_UpperLipRaiserL = static_cast<int32_t>(0x3d),
    __E_UpperLipRaiserR = static_cast<int32_t>(0x3e),
    __E_Max = static_cast<int32_t>(0x3f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRFaceExpressions_FaceExpression_Unwrapped() const noexcept {
    return static_cast<__OVRFaceExpressions_FaceExpression_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRFaceExpressions_FaceExpression();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRFaceExpressions_FaceExpression(int32_t value__) noexcept;

  /// @brief Field BrowLowererL value: I32(0)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const BrowLowererL;

  /// @brief Field BrowLowererR value: I32(1)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const BrowLowererR;

  /// @brief Field CheekPuffL value: I32(2)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekPuffL;

  /// @brief Field CheekPuffR value: I32(3)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekPuffR;

  /// @brief Field CheekRaiserL value: I32(4)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekRaiserL;

  /// @brief Field CheekRaiserR value: I32(5)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekRaiserR;

  /// @brief Field CheekSuckL value: I32(6)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekSuckL;

  /// @brief Field CheekSuckR value: I32(7)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekSuckR;

  /// @brief Field ChinRaiserB value: I32(8)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const ChinRaiserB;

  /// @brief Field ChinRaiserT value: I32(9)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const ChinRaiserT;

  /// @brief Field DimplerL value: I32(10)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const DimplerL;

  /// @brief Field DimplerR value: I32(11)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const DimplerR;

  /// @brief Field EyesClosedL value: I32(12)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesClosedL;

  /// @brief Field EyesClosedR value: I32(13)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesClosedR;

  /// @brief Field EyesLookDownL value: I32(14)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookDownL;

  /// @brief Field EyesLookDownR value: I32(15)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookDownR;

  /// @brief Field EyesLookLeftL value: I32(16)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookLeftL;

  /// @brief Field EyesLookLeftR value: I32(17)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookLeftR;

  /// @brief Field EyesLookRightL value: I32(18)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookRightL;

  /// @brief Field EyesLookRightR value: I32(19)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookRightR;

  /// @brief Field EyesLookUpL value: I32(20)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookUpL;

  /// @brief Field EyesLookUpR value: I32(21)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookUpR;

  /// @brief Field InnerBrowRaiserL value: I32(22)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const InnerBrowRaiserL;

  /// @brief Field InnerBrowRaiserR value: I32(23)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const InnerBrowRaiserR;

  /// @brief Field Invalid value: I32(-1)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const Invalid;

  /// @brief Field JawDrop value: I32(24)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const JawDrop;

  /// @brief Field JawSidewaysLeft value: I32(25)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const JawSidewaysLeft;

  /// @brief Field JawSidewaysRight value: I32(26)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const JawSidewaysRight;

  /// @brief Field JawThrust value: I32(27)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const JawThrust;

  /// @brief Field LidTightenerL value: I32(28)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LidTightenerL;

  /// @brief Field LidTightenerR value: I32(29)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LidTightenerR;

  /// @brief Field LipCornerDepressorL value: I32(30)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipCornerDepressorL;

  /// @brief Field LipCornerDepressorR value: I32(31)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipCornerDepressorR;

  /// @brief Field LipCornerPullerL value: I32(32)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipCornerPullerL;

  /// @brief Field LipCornerPullerR value: I32(33)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipCornerPullerR;

  /// @brief Field LipFunnelerLB value: I32(34)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipFunnelerLB;

  /// @brief Field LipFunnelerLT value: I32(35)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipFunnelerLT;

  /// @brief Field LipFunnelerRB value: I32(36)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipFunnelerRB;

  /// @brief Field LipFunnelerRT value: I32(37)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipFunnelerRT;

  /// @brief Field LipPressorL value: I32(38)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipPressorL;

  /// @brief Field LipPressorR value: I32(39)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipPressorR;

  /// @brief Field LipPuckerL value: I32(40)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipPuckerL;

  /// @brief Field LipPuckerR value: I32(41)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipPuckerR;

  /// @brief Field LipStretcherL value: I32(42)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipStretcherL;

  /// @brief Field LipStretcherR value: I32(43)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipStretcherR;

  /// @brief Field LipSuckLB value: I32(44)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipSuckLB;

  /// @brief Field LipSuckLT value: I32(45)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipSuckLT;

  /// @brief Field LipSuckRB value: I32(46)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipSuckRB;

  /// @brief Field LipSuckRT value: I32(47)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipSuckRT;

  /// @brief Field LipTightenerL value: I32(48)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipTightenerL;

  /// @brief Field LipTightenerR value: I32(49)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipTightenerR;

  /// @brief Field LipsToward value: I32(50)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipsToward;

  /// @brief Field LowerLipDepressorL value: I32(51)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LowerLipDepressorL;

  /// @brief Field LowerLipDepressorR value: I32(52)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LowerLipDepressorR;

  /// @brief Field Max value: I32(63)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const Max;

  /// @brief Field MouthLeft value: I32(53)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const MouthLeft;

  /// @brief Field MouthRight value: I32(54)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const MouthRight;

  /// @brief Field NoseWrinklerL value: I32(55)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const NoseWrinklerL;

  /// @brief Field NoseWrinklerR value: I32(56)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const NoseWrinklerR;

  /// @brief Field OuterBrowRaiserL value: I32(57)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const OuterBrowRaiserL;

  /// @brief Field OuterBrowRaiserR value: I32(58)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const OuterBrowRaiserR;

  /// @brief Field UpperLidRaiserL value: I32(59)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const UpperLidRaiserL;

  /// @brief Field UpperLidRaiserR value: I32(60)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const UpperLidRaiserR;

  /// @brief Field UpperLipRaiserL value: I32(61)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const UpperLipRaiserL;

  /// @brief Field UpperLipRaiserR value: I32(62)
  static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const UpperLipRaiserR;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7864 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceExpression, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRFaceExpressions_FaceExpression, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRFaceExpressions/FaceExpressionsEnumerator
struct CORDL_TYPE OVRFaceExpressions_FaceExpressionsEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) float_t Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<float_t>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x3faa724, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x3faa668, size 0x1c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x3faa718, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3faa6b8, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x3faa53c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<float_t, ::Array<float_t>*> array);

  /// @brief Method get_Current, addr 0x3faa684, size 0x34, virtual true, abstract: false, final true
  inline float_t get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<float_t>"
  constexpr ::System::Collections::Generic::IEnumerator_1<float_t>* i___System__Collections__Generic__IEnumerator_1_float_t_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRFaceExpressions_FaceExpressionsEnumerator();

  // Ctor Parameters [CppParam { name: "_faceExpressions", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRFaceExpressions_FaceExpressionsEnumerator(::ArrayW<float_t, ::Array<float_t>*> _faceExpressions, int32_t _index, int32_t _count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7865 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _faceExpressions, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> _faceExpressions;

  /// @brief Field _index, offset: 0x8, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _count, offset: 0xc, size: 0x4, def value: None
  int32_t _count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, _faceExpressions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, _index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, _count) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRFaceExpressions::WeightProvider, OVRPermissionsRequester::Permission, OVRPlugin::FaceState, System.Collections.Generic.IEnumerable`1<T>,
// System.Collections.Generic.IReadOnlyCollection`1<T>, System.Collections.IEnumerable, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRFaceExpressions
class CORDL_TYPE OVRFaceExpressions : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using FaceExpression = ::GlobalNamespace::OVRFaceExpressions_FaceExpression;

  using FaceExpressionsEnumerator = ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator;

  using FaceRegionConfidence = ::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence;

  using WeightProvider = ::GlobalNamespace::OVRFaceExpressions_WeightProvider;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_EyeFollowingBlendshapesValid, put = set_EyeFollowingBlendshapesValid)) bool EyeFollowingBlendshapesValid;

  __declspec(property(get = get_FaceTrackingEnabled)) bool FaceTrackingEnabled;

  __declspec(property(get = get_Item)) float_t Item[];

  __declspec(property(get = get_ValidExpressions, put = set_ValidExpressions)) bool ValidExpressions;

  /// @brief Field <EyeFollowingBlendshapesValid>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__EyeFollowingBlendshapesValid_k__BackingField,
                      put = __cordl_internal_set__EyeFollowingBlendshapesValid_k__BackingField)) bool _EyeFollowingBlendshapesValid_k__BackingField;

  /// @brief Field <ValidExpressions>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__ValidExpressions_k__BackingField, put = __cordl_internal_set__ValidExpressions_k__BackingField)) bool _ValidExpressions_k__BackingField;

  /// @brief Field _currentFaceState, offset 0x28, size 0x20
  __declspec(property(get = __cordl_internal_get__currentFaceState, put = __cordl_internal_set__currentFaceState)) ::GlobalNamespace::OVRPlugin_FaceState _currentFaceState;

  /// @brief Field _onPermissionGranted, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__onPermissionGranted, put = __cordl_internal_set__onPermissionGranted)) ::System::Action_1<::StringW>* _onPermissionGranted;

  /// @brief Field _trackingInstanceCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__trackingInstanceCount, put = setStaticF__trackingInstanceCount)) int32_t _trackingInstanceCount;

  /// @brief Convert operator to "::GlobalNamespace::OVRFaceExpressions_WeightProvider"
  constexpr operator ::GlobalNamespace::OVRFaceExpressions_WeightProvider*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<float_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<float_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<float_t>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<float_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Awake, addr 0x3fa9d04, size 0x7c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CheckValidity, addr 0x3faa15c, size 0x5c, virtual false, abstract: false, final false
  inline void CheckValidity();

  /// @brief Method CopyTo, addr 0x3faa274, size 0x244, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<float_t, ::Array<float_t>*> array, int32_t startIndex);

  /// @brief Method GetEnumerator, addr 0x3faa51c, size 0x20, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator GetEnumerator();

  /// @brief Method GetWeight, addr 0x3faa1b8, size 0x4, virtual true, abstract: false, final true
  inline float_t GetWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression);

  static inline ::GlobalNamespace::OVRFaceExpressions* New_ctor();

  /// @brief Method OnDestroy, addr 0x3fa9fb8, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3fa9f30, size 0x88, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3fa9d80, size 0x78, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPermissionGranted, addr 0x3fa9ed0, size 0x60, virtual false, abstract: false, final false
  inline void OnPermissionGranted(::StringW permissionId);

  /// @brief Method StartFaceTracking, addr 0x3fa9df8, size 0xd8, virtual false, abstract: false, final false
  inline bool StartFaceTracking();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator, addr 0x3faa560, size 0x74, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<float_t>* System_Collections_Generic_IEnumerable_System_Single__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3faa5d4, size 0x74, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToArray, addr 0x3faa4b8, size 0x64, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> ToArray();

  /// @brief Method TryGetFaceExpressionWeight, addr 0x3faa1bc, size 0x5c, virtual false, abstract: false, final false
  inline bool TryGetFaceExpressionWeight(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression, ::ByRef<float_t> weight);

  /// @brief Method TryGetWeightConfidence, addr 0x3faa218, size 0x5c, virtual false, abstract: false, final false
  inline bool TryGetWeightConfidence(::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence region, ::ByRef<float_t> weightConfidence);

  /// @brief Method Update, addr 0x3fa9fc4, size 0x9c, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__EyeFollowingBlendshapesValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__EyeFollowingBlendshapesValid_k__BackingField();

  constexpr bool const& __cordl_internal_get__ValidExpressions_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ValidExpressions_k__BackingField();

  constexpr ::GlobalNamespace::OVRPlugin_FaceState const& __cordl_internal_get__currentFaceState() const;

  constexpr ::GlobalNamespace::OVRPlugin_FaceState& __cordl_internal_get__currentFaceState();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__onPermissionGranted() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__onPermissionGranted();

  constexpr void __cordl_internal_set__EyeFollowingBlendshapesValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ValidExpressions_k__BackingField(bool value);

  constexpr void __cordl_internal_set__currentFaceState(::GlobalNamespace::OVRPlugin_FaceState value);

  constexpr void __cordl_internal_set__onPermissionGranted(::System::Action_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x3faa660, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__trackingInstanceCount();

  /// @brief Method get_Count, addr 0x3faa648, size 0x18, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_EyeFollowingBlendshapesValid, addr 0x3fa9cf0, size 0x8, virtual false, abstract: false, final false
  inline bool get_EyeFollowingBlendshapesValid();

  /// @brief Method get_FaceTrackingEnabled, addr 0x3fa9c8c, size 0x50, virtual false, abstract: false, final false
  inline bool get_FaceTrackingEnabled();

  /// @brief Method get_Item, addr 0x3faa060, size 0xfc, virtual false, abstract: false, final false
  inline float_t get_Item(::GlobalNamespace::OVRFaceExpressions_FaceExpression expression);

  /// @brief Method get_ValidExpressions, addr 0x3fa9cdc, size 0x8, virtual false, abstract: false, final false
  inline bool get_ValidExpressions();

  /// @brief Convert to "::GlobalNamespace::OVRFaceExpressions_WeightProvider"
  constexpr ::GlobalNamespace::OVRFaceExpressions_WeightProvider* i___GlobalNamespace__OVRFaceExpressions_WeightProvider() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<float_t>"
  constexpr ::System::Collections::Generic::IEnumerable_1<float_t>* i___System__Collections__Generic__IEnumerable_1_float_t_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<float_t>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<float_t>* i___System__Collections__Generic__IReadOnlyCollection_1_float_t_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF__trackingInstanceCount(int32_t value);

  /// @brief Method set_EyeFollowingBlendshapesValid, addr 0x3fa9cf8, size 0xc, virtual false, abstract: false, final false
  inline void set_EyeFollowingBlendshapesValid(bool value);

  /// @brief Method set_ValidExpressions, addr 0x3fa9ce4, size 0xc, virtual false, abstract: false, final false
  inline void set_ValidExpressions(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRFaceExpressions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRFaceExpressions(OVRFaceExpressions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRFaceExpressions(OVRFaceExpressions const&) = delete;

  /// @brief Field FaceTrackingPermission value: I32(0)
  static ::GlobalNamespace::OVRPermissionsRequester_Permission const FaceTrackingPermission;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7866 };

  /// @brief Field <ValidExpressions>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____ValidExpressions_k__BackingField;

  /// @brief Field <EyeFollowingBlendshapesValid>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____EyeFollowingBlendshapesValid_k__BackingField;

  /// @brief Field _currentFaceState, offset: 0x28, size: 0x20, def value: None
  ::GlobalNamespace::OVRPlugin_FaceState ____currentFaceState;

  /// @brief Field _onPermissionGranted, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ____onPermissionGranted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____ValidExpressions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____EyeFollowingBlendshapesValid_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____currentFaceState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions, ____onPermissionGranted) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRFaceExpressions, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFaceExpressions_FaceExpression, "", "OVRFaceExpressions/FaceExpression");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFaceExpressions_FaceRegionConfidence, "", "OVRFaceExpressions/FaceRegionConfidence");
NEED_NO_BOX(::GlobalNamespace::OVRFaceExpressions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFaceExpressions*, "", "OVRFaceExpressions");
NEED_NO_BOX(::GlobalNamespace::OVRFaceExpressions_WeightProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFaceExpressions_WeightProvider*, "", "OVRFaceExpressions/WeightProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, "", "OVRFaceExpressions/FaceExpressionsEnumerator");
