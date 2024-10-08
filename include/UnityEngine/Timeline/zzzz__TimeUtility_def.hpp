#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeUtility)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Timeline {
struct StandardFrameRates;
}
namespace UnityEngine::Timeline {
class __TimeUtility____c;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimeUtility;
}
namespace UnityEngine::Timeline {
class __TimeUtility____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimeUtility);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TimeUtility____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::TimeUtility::<>c*
class CORDL_TYPE __TimeUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Timeline::__TimeUtility____c* __9;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0)) ::System::Func_2<char16_t, bool>* __9__19_0;

  /// @brief Field <>9__19_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_1, put = setStaticF___9__19_1)) ::System::Func_2<char16_t, bool>* __9__19_1;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__20_0, put = setStaticF___9__20_0)) ::System::Func_2<char16_t, bool>* __9__20_0;

  static inline ::UnityEngine::Timeline::__TimeUtility____c* New_ctor();

  /// @brief Method <ParseTimeCode>b__19_0, addr 0x47b9760, size 0x58, virtual false, abstract: false, final false
  inline bool _ParseTimeCode_b__19_0(char16_t c);

  /// @brief Method <ParseTimeCode>b__19_1, addr 0x47b97b8, size 0x1c, virtual false, abstract: false, final false
  inline bool _ParseTimeCode_b__19_1(char16_t c);

  /// @brief Method <ParseTimeSeconds>b__20_0, addr 0x47b97d4, size 0x58, virtual false, abstract: false, final false
  inline bool _ParseTimeSeconds_b__20_0(char16_t c);

  /// @brief Method .ctor, addr 0x47b9758, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Timeline::__TimeUtility____c* getStaticF___9();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__19_0();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__19_1();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__20_0();

  static inline void setStaticF___9(::UnityEngine::Timeline::__TimeUtility____c* value);

  static inline void setStaticF___9__19_0(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__19_1(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__20_0(::System::Func_2<char16_t, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeUtility____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimeUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimeUtility____c(__TimeUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimeUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimeUtility____c(__TimeUtility____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15857 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TimeUtility____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Type: UnityEngine.Timeline::TimeUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::TimeUtility*
class CORDL_TYPE TimeUtility : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Timeline::__TimeUtility____c;

  /// @brief Field kFrameRateEpsilon, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kFrameRateEpsilon, put = setStaticF_kFrameRateEpsilon)) double_t kFrameRateEpsilon;

  /// @brief Field kFrameRateRounding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kFrameRateRounding, put = setStaticF_kFrameRateRounding)) double_t kFrameRateRounding;

  /// @brief Field kTimeEpsilon, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kTimeEpsilon, put = setStaticF_kTimeEpsilon)) double_t kTimeEpsilon;

  /// @brief Field k_MaxTimelineDurationInSeconds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_MaxTimelineDurationInSeconds, put = setStaticF_k_MaxTimelineDurationInSeconds)) double_t k_MaxTimelineDurationInSeconds;

  /// @brief Method FromFrames, addr 0x47b7d18, size 0x68, virtual false, abstract: false, final false
  static inline double_t FromFrames(double_t frames, double_t frameRate);

  /// @brief Method FromFrames, addr 0x47b7cac, size 0x6c, virtual false, abstract: false, final false
  static inline double_t FromFrames(int32_t frames, double_t frameRate);

  /// @brief Method GetAnimationClipLength, addr 0x47b900c, size 0x164, virtual false, abstract: false, final false
  static inline double_t GetAnimationClipLength(::UnityEngine::AnimationClip* clip);

  /// @brief Method GetClosestFrameRate, addr 0x47b9170, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::FrameRate GetClosestFrameRate(double_t frameRate);

  /// @brief Method GetEpsilon, addr 0x47b7b9c, size 0xa8, virtual false, abstract: false, final false
  static inline double_t GetEpsilon(double_t time, double_t frameRate);

  /// @brief Method NextFrame, addr 0x47b7fb4, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t NextFrame(double_t time, double_t frameRate);

  /// @brief Method NextFrameTime, addr 0x47b808c, size 0x6c, virtual false, abstract: false, final false
  static inline double_t NextFrameTime(double_t time, double_t frameRate);

  /// @brief Method OnFrameBoundary, addr 0x47b7d80, size 0x74, virtual false, abstract: false, final false
  static inline bool OnFrameBoundary(double_t time, double_t frameRate);

  /// @brief Method OnFrameBoundary, addr 0x47b7df4, size 0x120, virtual false, abstract: false, final false
  static inline bool OnFrameBoundary(double_t time, double_t frameRate, double_t epsilon);

  /// @brief Method ParseTimeCode, addr 0x47b86bc, size 0x508, virtual false, abstract: false, final false
  static inline double_t ParseTimeCode(::StringW timeCode, double_t frameRate, double_t defaultValue);

  /// @brief Method ParseTimeSeconds, addr 0x47b8c94, size 0x378, virtual false, abstract: false, final false
  static inline double_t ParseTimeSeconds(::StringW timeCode, double_t frameRate, double_t defaultValue);

  /// @brief Method PreviousFrame, addr 0x47b7f14, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t PreviousFrame(double_t time, double_t frameRate);

  /// @brief Method PreviousFrameTime, addr 0x47b8020, size 0x6c, virtual false, abstract: false, final false
  static inline double_t PreviousFrameTime(double_t time, double_t frameRate);

  /// @brief Method RemoveChar, addr 0x47b8bc4, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW RemoveChar(::StringW str, ::System::Func_2<char16_t, bool>* charToRemoveFunc);

  /// @brief Method RoundToFrame, addr 0x47b80f8, size 0xdc, virtual false, abstract: false, final false
  static inline double_t RoundToFrame(double_t time, double_t frameRate);

  /// @brief Method TimeAsFrames, addr 0x47b81d4, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW TimeAsFrames(double_t timeValue, double_t frameRate, ::StringW format);

  /// @brief Method TimeAsTimeCode, addr 0x47b82a4, size 0x418, virtual false, abstract: false, final false
  static inline ::StringW TimeAsTimeCode(double_t timeValue, double_t frameRate, ::StringW format);

  /// @brief Method ToExactFrames, addr 0x47b7c44, size 0x68, virtual false, abstract: false, final false
  static inline double_t ToExactFrames(double_t time, double_t frameRate);

  /// @brief Method ToFrameRate, addr 0x47b925c, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::FrameRate ToFrameRate(::UnityEngine::Timeline::StandardFrameRates enumValue);

  /// @brief Method ToFrames, addr 0x47b7a88, size 0x114, virtual false, abstract: false, final false
  static inline int32_t ToFrames(double_t time, double_t frameRate);

  /// @brief Method ToStandardFrameRate, addr 0x47b93fc, size 0x2a8, virtual false, abstract: false, final false
  static inline bool ToStandardFrameRate(::UnityEngine::Playables::FrameRate rate, ByRef<::UnityEngine::Timeline::StandardFrameRates> standard);

  /// @brief Method ValidateFrameRate, addr 0x47b79d4, size 0xb4, virtual false, abstract: false, final false
  static inline void ValidateFrameRate(double_t frameRate);

  static inline double_t getStaticF_kFrameRateEpsilon();

  static inline double_t getStaticF_kFrameRateRounding();

  static inline double_t getStaticF_kTimeEpsilon();

  static inline double_t getStaticF_k_MaxTimelineDurationInSeconds();

  static inline void setStaticF_kFrameRateEpsilon(double_t value);

  static inline void setStaticF_kFrameRateRounding(double_t value);

  static inline void setStaticF_kTimeEpsilon(double_t value);

  static inline void setStaticF_k_MaxTimelineDurationInSeconds(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeUtility(TimeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeUtility(TimeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimeUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimeUtility*, "UnityEngine.Timeline", "TimeUtility");
NEED_NO_BOX(::UnityEngine::Timeline::__TimeUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TimeUtility____c*, "UnityEngine.Timeline", "TimeUtility/<>c");
