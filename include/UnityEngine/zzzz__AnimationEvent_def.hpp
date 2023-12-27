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
class Object;
}
namespace UnityEngine {
class AnimationState;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14878)), TypeDefinitionIndex(TypeDefinitionIndex(14863)),
// TypeDefinitionIndex(TypeDefinitionIndex(14879))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14867)) CS Name: ::UnityEngine::AnimationEvent*
class CORDL_TYPE AnimationEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Time, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Time, put = __set_m_Time)) float_t m_Time;

  /// @brief Field m_FunctionName, offset 0x18, size 0x8
  __declspec(property(get = __get_m_FunctionName, put = __set_m_FunctionName))::StringW m_FunctionName;

  /// @brief Field m_StringParameter, offset 0x20, size 0x8
  __declspec(property(get = __get_m_StringParameter, put = __set_m_StringParameter))::StringW m_StringParameter;

  /// @brief Field m_ObjectReferenceParameter, offset 0x28, size 0x8
  __declspec(property(get = __get_m_ObjectReferenceParameter, put = __set_m_ObjectReferenceParameter))::UnityEngine::Object* m_ObjectReferenceParameter;

  /// @brief Field m_FloatParameter, offset 0x30, size 0x4
  __declspec(property(get = __get_m_FloatParameter, put = __set_m_FloatParameter)) float_t m_FloatParameter;

  /// @brief Field m_IntParameter, offset 0x34, size 0x4
  __declspec(property(get = __get_m_IntParameter, put = __set_m_IntParameter)) int32_t m_IntParameter;

  /// @brief Field m_MessageOptions, offset 0x38, size 0x4
  __declspec(property(get = __get_m_MessageOptions, put = __set_m_MessageOptions)) int32_t m_MessageOptions;

  /// @brief Field m_Source, offset 0x3c, size 0x4
  __declspec(property(get = __get_m_Source, put = __set_m_Source))::UnityEngine::AnimationEventSource m_Source;

  /// @brief Field m_StateSender, offset 0x40, size 0x8
  __declspec(property(get = __get_m_StateSender, put = __set_m_StateSender))::UnityEngine::AnimationState* m_StateSender;

  /// @brief Field m_AnimatorStateInfo, offset 0x48, size 0x24
  __declspec(property(get = __get_m_AnimatorStateInfo, put = __set_m_AnimatorStateInfo))::UnityEngine::AnimatorStateInfo m_AnimatorStateInfo;

  /// @brief Field m_AnimatorClipInfo, offset 0x6c, size 0x8
  __declspec(property(get = __get_m_AnimatorClipInfo, put = __set_m_AnimatorClipInfo))::UnityEngine::AnimatorClipInfo m_AnimatorClipInfo;

  constexpr float_t& __get_m_Time();

  constexpr float_t const& __get_m_Time() const;

  constexpr void __set_m_Time(float_t value);

  constexpr ::StringW& __get_m_FunctionName();

  constexpr ::StringW const& __get_m_FunctionName() const;

  constexpr void __set_m_FunctionName(::StringW value);

  constexpr ::StringW& __get_m_StringParameter();

  constexpr ::StringW const& __get_m_StringParameter() const;

  constexpr void __set_m_StringParameter(::StringW value);

  constexpr ::UnityEngine::Object*& __get_m_ObjectReferenceParameter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_m_ObjectReferenceParameter() const;

  constexpr void __set_m_ObjectReferenceParameter(::UnityEngine::Object* value);

  constexpr float_t& __get_m_FloatParameter();

  constexpr float_t const& __get_m_FloatParameter() const;

  constexpr void __set_m_FloatParameter(float_t value);

  constexpr int32_t& __get_m_IntParameter();

  constexpr int32_t const& __get_m_IntParameter() const;

  constexpr void __set_m_IntParameter(int32_t value);

  constexpr int32_t& __get_m_MessageOptions();

  constexpr int32_t const& __get_m_MessageOptions() const;

  constexpr void __set_m_MessageOptions(int32_t value);

  constexpr ::UnityEngine::AnimationEventSource& __get_m_Source();

  constexpr ::UnityEngine::AnimationEventSource const& __get_m_Source() const;

  constexpr void __set_m_Source(::UnityEngine::AnimationEventSource value);

  constexpr ::UnityEngine::AnimationState*& __get_m_StateSender();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationState*> const& __get_m_StateSender() const;

  constexpr void __set_m_StateSender(::UnityEngine::AnimationState* value);

  constexpr ::UnityEngine::AnimatorStateInfo& __get_m_AnimatorStateInfo();

  constexpr ::UnityEngine::AnimatorStateInfo const& __get_m_AnimatorStateInfo() const;

  constexpr void __set_m_AnimatorStateInfo(::UnityEngine::AnimatorStateInfo value);

  constexpr ::UnityEngine::AnimatorClipInfo& __get_m_AnimatorClipInfo();

  constexpr ::UnityEngine::AnimatorClipInfo const& __get_m_AnimatorClipInfo() const;

  constexpr void __set_m_AnimatorClipInfo(::UnityEngine::AnimatorClipInfo value);

  static inline ::UnityEngine::AnimationEvent* New_ctor();

  /// @brief Method .ctor addr 0x2c905d0 size 0x64 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AnimationEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationEvent(AnimationEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationEvent(AnimationEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationEvent();

public:
  /// @brief Field m_Time, offset: 0x10, size: 0x4, def value: None
  float_t ___m_Time;

  /// @brief Field m_FunctionName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_FunctionName;

  /// @brief Field m_StringParameter, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_StringParameter;

  /// @brief Field m_ObjectReferenceParameter, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Object* ___m_ObjectReferenceParameter;

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

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationEvent*, "UnityEngine", "AnimationEvent");
