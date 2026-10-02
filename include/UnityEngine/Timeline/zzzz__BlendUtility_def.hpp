#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/BlendUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BlendUtility)
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::Timeline {
class BlendUtility___c;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class BlendUtility;
}
namespace UnityEngine::Timeline {
class BlendUtility___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::BlendUtility*);
MARK_REF_T(::UnityEngine::Timeline::BlendUtility___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::BlendUtility*, "UnityEngine.Timeline", "BlendUtility");
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::BlendUtility___c*, "UnityEngine.Timeline", "BlendUtility/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.BlendUtility/<>c
class CORDL_TYPE BlendUtility___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Timeline::BlendUtility___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* __9__1_0;

  static inline ::UnityEngine::Timeline::BlendUtility___c* New_ctor();

  /// @brief Method <ComputeBlendsFromOverlaps>b__1_0, addr 0x6df65ec, size 0x120, virtual false, abstract: false, final false
  inline int32_t _ComputeBlendsFromOverlaps_b__1_0(::UnityEngine::Timeline::TimelineClip* c1, ::UnityEngine::Timeline::TimelineClip* c2);

  /// @brief Method .ctor, addr 0x6df65e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Timeline::BlendUtility___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* getStaticF___9__1_0();

  static inline void setStaticF___9(::UnityEngine::Timeline::BlendUtility___c* value);

  static inline void setStaticF___9__1_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendUtility___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlendUtility___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlendUtility___c(BlendUtility___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlendUtility___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlendUtility___c(BlendUtility___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::BlendUtility___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.BlendUtility
class CORDL_TYPE BlendUtility : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Timeline::BlendUtility___c;

  /// @brief Method ComputeBlendsFromOverlaps, addr 0x6df623c, size 0x20c, virtual false, abstract: false, final false
  static inline void ComputeBlendsFromOverlaps(::ArrayW<::UnityEngine::Timeline::TimelineClip*> clips);

  /// @brief Method Overlaps, addr 0x6df613c, size 0x100, virtual false, abstract: false, final false
  static inline bool Overlaps(::UnityEngine::Timeline::TimelineClip* blendOut, ::UnityEngine::Timeline::TimelineClip* blendIn);

  /// @brief Method UpdateClipIntersection, addr 0x6df6448, size 0x14c, virtual false, abstract: false, final false
  static inline void UpdateClipIntersection(::UnityEngine::Timeline::TimelineClip* blendOutClip, ::UnityEngine::Timeline::TimelineClip* blendInClip);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlendUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlendUtility(BlendUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlendUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlendUtility(BlendUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19367 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::BlendUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Timeline
