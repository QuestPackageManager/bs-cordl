#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/RuntimeElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Timeline/zzzz__IInterval_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeElement)
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class RuntimeElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::RuntimeElement);
// Dependencies System.Object, UnityEngine.Timeline.IInterval
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.RuntimeElement
class CORDL_TYPE RuntimeElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field <intervalBit>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__intervalBit_k__BackingField, put = __cordl_internal_set__intervalBit_k__BackingField)) int32_t _intervalBit_k__BackingField;

  __declspec(property(put = set_enable)) bool enable;

  __declspec(property(get = get_intervalBit, put = set_intervalBit)) int32_t intervalBit;

  __declspec(property(get = get_intervalEnd)) int64_t intervalEnd;

  __declspec(property(get = get_intervalStart)) int64_t intervalStart;

  /// @brief Convert operator to "::UnityEngine::Timeline::IInterval"
  constexpr operator ::UnityEngine::Timeline::IInterval*() noexcept;

  /// @brief Method DisableAt, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData);

  /// @brief Method EvaluateAt, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData);

  static inline ::UnityEngine::Timeline::RuntimeElement* New_ctor();

  constexpr int32_t const& __cordl_internal_get__intervalBit_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__intervalBit_k__BackingField();

  constexpr void __cordl_internal_set__intervalBit_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x48264bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_intervalBit, addr 0x4826e24, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_intervalBit();

  /// @brief Method get_intervalEnd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_intervalEnd();

  /// @brief Method get_intervalStart, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_intervalStart();

  /// @brief Convert to "::UnityEngine::Timeline::IInterval"
  constexpr ::UnityEngine::Timeline::IInterval* i___UnityEngine__Timeline__IInterval() noexcept;

  /// @brief Method set_enable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_enable(bool value);

  /// @brief Method set_intervalBit, addr 0x4826e2c, size 0x8, virtual false, abstract: false, final false
  inline void set_intervalBit(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeElement(RuntimeElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeElement(RuntimeElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15845 };

  /// @brief Field <intervalBit>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____intervalBit_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::RuntimeElement, ____intervalBit_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::RuntimeElement, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::RuntimeElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::RuntimeElement*, "UnityEngine.Timeline", "RuntimeElement");
