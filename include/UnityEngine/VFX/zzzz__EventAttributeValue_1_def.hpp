#pragma once
// IWYU pragma private; include "UnityEngine/VFX/EventAttributeValue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__EventAttribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventAttributeValue_1)
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
// Forward declare root types
namespace UnityEngine::VFX {
template <typename T> class EventAttributeValue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::VFX::EventAttributeValue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::VFX::EventAttributeValue_1, "UnityEngine.VFX", "EventAttributeValue`1");
// Dependencies UnityEngine.VFX.EventAttribute
namespace UnityEngine::VFX {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.VFX.EventAttributeValue`1<T>
class CORDL_TYPE EventAttributeValue_1 : public ::UnityEngine::VFX::EventAttribute {
public:
  // Declarations
  /// @brief Field m_ApplyFunc, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ApplyFunc, put = __cordl_internal_set_m_ApplyFunc)) ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* m_ApplyFunc;

  /// @brief Field m_HasFunc, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HasFunc, put = __cordl_internal_set_m_HasFunc)) ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* m_HasFunc;

  /// @brief Field value, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) T value;

  /// @brief Method ApplyToVFX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool ApplyToVFX(::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  static inline ::UnityEngine::VFX::EventAttributeValue_1<T>* New_ctor(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* hasFunc,
                                                                       ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* applyFunc);

  constexpr ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* const& __cordl_internal_get_m_ApplyFunc() const;

  constexpr ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>*& __cordl_internal_get_m_ApplyFunc();

  constexpr ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* const& __cordl_internal_get_m_HasFunc() const;

  constexpr ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*& __cordl_internal_get_m_HasFunc();

  constexpr T const& __cordl_internal_get_value() const;

  constexpr T& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_m_ApplyFunc(::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* value);

  constexpr void __cordl_internal_set_m_HasFunc(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value);

  constexpr void __cordl_internal_set_value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* hasFunc, ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* applyFunc);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributeValue_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeValue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttributeValue_1(EventAttributeValue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeValue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttributeValue_1(EventAttributeValue_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19903 };

  /// @brief Field m_HasFunc, offset: 0x18, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* ___m_HasFunc;

  /// @brief Field m_ApplyFunc, offset: 0x20, size: 0x8, def value: None
  ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* ___m_ApplyFunc;

  /// @brief Field value, offset: 0x28, size: 0x8, def value: None
  T ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::VFX
