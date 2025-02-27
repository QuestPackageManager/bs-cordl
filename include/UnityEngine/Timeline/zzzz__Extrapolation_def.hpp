#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/Extrapolation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Extrapolation)
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::Timeline {
class Extrapolation___c;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class Extrapolation;
}
namespace UnityEngine::Timeline {
class Extrapolation___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::Extrapolation);
MARK_REF_PTR_T(::UnityEngine::Timeline::Extrapolation___c);
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.Extrapolation/<>c
class CORDL_TYPE Extrapolation___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Timeline::Extrapolation___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* __9__2_0;

  static inline ::UnityEngine::Timeline::Extrapolation___c* New_ctor();

  /// @brief Method <SortClipsByStartTime>b__2_0, addr 0x483a5dc, size 0x30, virtual false, abstract: false, final false
  inline int32_t _SortClipsByStartTime_b__2_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2);

  /// @brief Method .ctor, addr 0x483a5d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Timeline::Extrapolation___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::UnityEngine::Timeline::Extrapolation___c* value);

  static inline void setStaticF___9__2_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extrapolation___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extrapolation___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extrapolation___c(Extrapolation___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extrapolation___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extrapolation___c(Extrapolation___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::Extrapolation___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.Extrapolation
class CORDL_TYPE Extrapolation : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Timeline::Extrapolation___c;

  /// @brief Field kMinExtrapolationTime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kMinExtrapolationTime, put = setStaticF_kMinExtrapolationTime)) double_t kMinExtrapolationTime;

  /// @brief Method CalculateExtrapolationTimes, addr 0x4839fa4, size 0x418, virtual false, abstract: false, final false
  static inline void CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset* asset);

  /// @brief Method SortClipsByStartTime, addr 0x483a3bc, size 0x138, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>
  SortClipsByStartTime(::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> clips);

  static inline double_t getStaticF_kMinExtrapolationTime();

  static inline void setStaticF_kMinExtrapolationTime(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extrapolation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extrapolation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extrapolation(Extrapolation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extrapolation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extrapolation(Extrapolation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::Extrapolation, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::Extrapolation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::Extrapolation*, "UnityEngine.Timeline", "Extrapolation");
NEED_NO_BOX(::UnityEngine::Timeline::Extrapolation___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::Extrapolation___c*, "UnityEngine.Timeline", "Extrapolation/<>c");
