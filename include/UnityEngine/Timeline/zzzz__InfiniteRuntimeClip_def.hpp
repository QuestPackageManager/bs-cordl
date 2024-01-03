#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InfiniteRuntimeClip)
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class InfiniteRuntimeClip;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::InfiniteRuntimeClip);
// Type: UnityEngine.Timeline::InfiniteRuntimeClip
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10428)), TypeDefinitionIndex(TypeDefinitionIndex(13884))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13877))
// CS Name: ::UnityEngine.Timeline::InfiniteRuntimeClip*
class CORDL_TYPE InfiniteRuntimeClip : public ::UnityEngine::Timeline::RuntimeElement {
public:
  // Declarations
  /// @brief Field m_Playable, offset 0x18, size 0x10
  __declspec(property(get = __get_m_Playable, put = __set_m_Playable))::UnityEngine::Playables::Playable m_Playable;

  /// @brief Field kIntervalEnd, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kIntervalEnd, put = setStaticF_kIntervalEnd)) int64_t kIntervalEnd;

  __declspec(property(get = get_intervalStart)) int64_t intervalStart;

  __declspec(property(get = get_intervalEnd)) int64_t intervalEnd;

  __declspec(property(put = set_enable)) bool enable;

  constexpr ::UnityEngine::Playables::Playable& __get_m_Playable();

  constexpr ::UnityEngine::Playables::Playable const& __get_m_Playable() const;

  constexpr void __set_m_Playable(::UnityEngine::Playables::Playable value);

  static inline void setStaticF_kIntervalEnd(int64_t value);

  static inline int64_t getStaticF_kIntervalEnd();

  static inline ::UnityEngine::Timeline::InfiniteRuntimeClip* New_ctor(::UnityEngine::Playables::Playable playable);

  /// @brief Method .ctor, addr 0x2c53fa8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::Playable playable);

  /// @brief Method get_intervalStart, addr 0x2c67744, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_intervalStart();

  /// @brief Method get_intervalEnd, addr 0x2c6774c, size 0x58, virtual true, abstract: false, final false
  inline int64_t get_intervalEnd();

  /// @brief Method set_enable, addr 0x2c677a4, size 0x74, virtual true, abstract: false, final false
  inline void set_enable(bool value);

  /// @brief Method EvaluateAt, addr 0x2c67818, size 0x58, virtual true, abstract: false, final false
  inline void EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method DisableAt, addr 0x2c67870, size 0x6c, virtual true, abstract: false, final false
  inline void DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData);

  // Ctor Parameters [CppParam { name: "", ty: "InfiniteRuntimeClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InfiniteRuntimeClip(InfiniteRuntimeClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InfiniteRuntimeClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InfiniteRuntimeClip(InfiniteRuntimeClip const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InfiniteRuntimeClip();

public:
  /// @brief Field m_Playable, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Playables::Playable ___m_Playable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::InfiniteRuntimeClip, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::InfiniteRuntimeClip, ___m_Playable) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::InfiniteRuntimeClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::InfiniteRuntimeClip*, "UnityEngine.Timeline", "InfiniteRuntimeClip");
