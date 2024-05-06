#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationEventSource_def.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationEvent)
namespace UnityEngine {
class AnimationState;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AnimationEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimationEvent);
// Type: UnityEngine::AnimationEvent
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AnimationEvent*
class CORDL_TYPE AnimationEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_AnimatorClipInfo, offset 0x6c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimatorClipInfo, put = __cordl_internal_set_m_AnimatorClipInfo))::UnityEngine::AnimatorClipInfo m_AnimatorClipInfo;

  /// @brief Field m_AnimatorStateInfo, offset 0x48, size 0x24
  __declspec(property(get = __cordl_internal_get_m_AnimatorStateInfo, put = __cordl_internal_set_m_AnimatorStateInfo))::UnityEngine::AnimatorStateInfo m_AnimatorStateInfo;

  /// @brief Field m_FloatParameter, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FloatParameter, put = __cordl_internal_set_m_FloatParameter)) float_t m_FloatParameter;

  /// @brief Field m_FunctionName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FunctionName, put = __cordl_internal_set_m_FunctionName))::StringW m_FunctionName;

  /// @brief Field m_IntParameter, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntParameter, put = __cordl_internal_set_m_IntParameter)) int32_t m_IntParameter;

  /// @brief Field m_MessageOptions, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MessageOptions, put = __cordl_internal_set_m_MessageOptions)) int32_t m_MessageOptions;

  /// @brief Field m_ObjectReferenceParameter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ObjectReferenceParameter, put = __cordl_internal_set_m_ObjectReferenceParameter))::UnityW<::UnityEngine::Object> m_ObjectReferenceParameter;

  /// @brief Field m_Source, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Source, put = __cordl_internal_set_m_Source))::UnityEngine::AnimationEventSource m_Source;

  /// @brief Field m_StateSender, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StateSender, put = __cordl_internal_set_m_StateSender))::UnityEngine::AnimationState* m_StateSender;

  /// @brief Field m_StringParameter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StringParameter, put = __cordl_internal_set_m_StringParameter))::StringW m_StringParameter;

  /// @brief Field m_Time, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Time, put = __cordl_internal_set_m_Time)) float_t m_Time;

  static inline ::UnityEngine::AnimationEvent* New_ctor();

  constexpr ::UnityEngine::AnimatorClipInfo const& __cordl_internal_get_m_AnimatorClipInfo() const;

  constexpr ::UnityEngine::AnimatorClipInfo& __cordl_internal_get_m_AnimatorClipInfo();

  constexpr ::UnityEngine::AnimatorStateInfo const& __cordl_internal_get_m_AnimatorStateInfo() const;

  constexpr ::UnityEngine::AnimatorStateInfo& __cordl_internal_get_m_AnimatorStateInfo();

  constexpr float_t const& __cordl_internal_get_m_FloatParameter() const;

  constexpr float_t& __cordl_internal_get_m_FloatParameter();

  constexpr ::StringW const& __cordl_internal_get_m_FunctionName() const;

  constexpr ::StringW& __cordl_internal_get_m_FunctionName();

  constexpr int32_t const& __cordl_internal_get_m_IntParameter() const;

  constexpr int32_t& __cordl_internal_get_m_IntParameter();

  constexpr int32_t const& __cordl_internal_get_m_MessageOptions() const;

  constexpr int32_t& __cordl_internal_get_m_MessageOptions();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_ObjectReferenceParameter() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_ObjectReferenceParameter();

  constexpr ::UnityEngine::AnimationEventSource const& __cordl_internal_get_m_Source() const;

  constexpr ::UnityEngine::AnimationEventSource& __cordl_internal_get_m_Source();

  constexpr ::UnityEngine::AnimationState*& __cordl_internal_get_m_StateSender();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationState*> const& __cordl_internal_get_m_StateSender() const;

  constexpr ::StringW const& __cordl_internal_get_m_StringParameter() const;

  constexpr ::StringW& __cordl_internal_get_m_StringParameter();

  constexpr float_t const& __cordl_internal_get_m_Time() const;

  constexpr float_t& __cordl_internal_get_m_Time();

  constexpr void __cordl_internal_set_m_AnimatorClipInfo(::UnityEngine::AnimatorClipInfo value);

  constexpr void __cordl_internal_set_m_AnimatorStateInfo(::UnityEngine::AnimatorStateInfo value);

  constexpr void __cordl_internal_set_m_FloatParameter(float_t value);

  constexpr void __cordl_internal_set_m_FunctionName(::StringW value);

  constexpr void __cordl_internal_set_m_IntParameter(int32_t value);

  constexpr void __cordl_internal_set_m_MessageOptions(int32_t value);

  constexpr void __cordl_internal_set_m_ObjectReferenceParameter(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set_m_Source(::UnityEngine::AnimationEventSource value);

  constexpr void __cordl_internal_set_m_StateSender(::UnityEngine::AnimationState* value);

  constexpr void __cordl_internal_set_m_StringParameter(::StringW value);

  constexpr void __cordl_internal_set_m_Time(float_t value);

  /// @brief Method .ctor, addr 0x33c428c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationEvent(AnimationEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationEvent(AnimationEvent const&) = delete;

  /// @brief Field m_Time, offset: 0x10, size: 0x4, def value: None
  float_t ___m_Time;

  /// @brief Field m_FunctionName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_FunctionName;

  /// @brief Field m_StringParameter, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_StringParameter;

  /// @brief Field m_ObjectReferenceParameter, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___m_ObjectReferenceParameter;

  /// @brief Field m_FloatParameter, offset: 0x30, size: 0x4, def value: None
  float_t ___m_FloatParameter;

  /// @brief Field m_IntParameter, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_IntParameter;

  /// @brief Field m_MessageOptions, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_MessageOptions;

  /// @brief Field m_Source, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::AnimationEventSource ___m_Source;

  /// @brief Field m_StateSender, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationState* ___m_StateSender;

  /// @brief Field m_AnimatorStateInfo, offset: 0x48, size: 0x24, def value: None
  ::UnityEngine::AnimatorStateInfo ___m_AnimatorStateInfo;

  /// @brief Field m_AnimatorClipInfo, offset: 0x6c, size: 0x8, def value: None
  ::UnityEngine::AnimatorClipInfo ___m_AnimatorClipInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationEvent, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_Time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_FunctionName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_StringParameter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_ObjectReferenceParameter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_FloatParameter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_IntParameter) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_MessageOptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_Source) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_StateSender) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_AnimatorStateInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEvent, ___m_AnimatorClipInfo) == 0x6c, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationEvent*, "UnityEngine", "AnimationEvent");
