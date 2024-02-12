#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Extrapolation)
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class __Extrapolation____c;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class Extrapolation;
}
namespace UnityEngine::Timeline {
class __Extrapolation____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::Extrapolation);
MARK_REF_PTR_T(::UnityEngine::Timeline::__Extrapolation____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13883))
// CS Name: ::Extrapolation::<>c*
class CORDL_TYPE __Extrapolation____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Timeline::__Extrapolation____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* __9__2_0;

  static inline void setStaticF___9(::UnityEngine::Timeline::__Extrapolation____c* value);

  static inline ::UnityEngine::Timeline::__Extrapolation____c* getStaticF___9();

  static inline void setStaticF___9__2_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value);

  static inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* getStaticF___9__2_0();

  static inline ::UnityEngine::Timeline::__Extrapolation____c* New_ctor();

  /// @brief Method .ctor, addr 0x2c6d71c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SortClipsByStartTime>b__2_0, addr 0x2c6d724, size 0x34, virtual false, abstract: false, final false
  inline int32_t _SortClipsByStartTime_b__2_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2);

  // Ctor Parameters [CppParam { name: "", ty: "__Extrapolation____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Extrapolation____c(__Extrapolation____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Extrapolation____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Extrapolation____c(__Extrapolation____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Extrapolation____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__Extrapolation____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::Extrapolation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13884))
// CS Name: ::UnityEngine.Timeline::Extrapolation*
class CORDL_TYPE Extrapolation : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Timeline::__Extrapolation____c;

  /// @brief Field kMinExtrapolationTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kMinExtrapolationTime, put = setStaticF_kMinExtrapolationTime)) double_t kMinExtrapolationTime;

  static inline void setStaticF_kMinExtrapolationTime(double_t value);

  static inline double_t getStaticF_kMinExtrapolationTime();

  /// @brief Method CalculateExtrapolationTimes, addr 0x2c6d0ec, size 0x40c, virtual false, abstract: false, final false
  static inline void CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset* asset);

  /// @brief Method SortClipsByStartTime, addr 0x2c6d4f8, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>
  SortClipsByStartTime(::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> clips);

  // Ctor Parameters [CppParam { name: "", ty: "Extrapolation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extrapolation(Extrapolation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extrapolation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extrapolation(Extrapolation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extrapolation();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::Extrapolation, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::Extrapolation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::Extrapolation*, "UnityEngine.Timeline", "Extrapolation");
NEED_NO_BOX(::UnityEngine::Timeline::__Extrapolation____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__Extrapolation____c*, "UnityEngine.Timeline", "Extrapolation/<>c");
