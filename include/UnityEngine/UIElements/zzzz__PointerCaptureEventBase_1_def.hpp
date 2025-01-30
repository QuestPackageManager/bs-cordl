#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCaptureEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerCaptureEventInternal_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerCaptureEventBase_1)
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class PointerCaptureEventBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureEventBase_1);
// Dependencies UnityEngine.UIElements.EventBase`1<T>, UnityEngine.UIElements.IPointerCaptureEventInternal
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerCaptureEventBase`1<T>
class CORDL_TYPE PointerCaptureEventBase_1 : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
  // Declarations
  /// @brief Field <pointerId>k__BackingField, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__pointerId_k__BackingField, put = __cordl_internal_set__pointerId_k__BackingField)) int32_t _pointerId_k__BackingField;

  /// @brief Field <relatedTarget>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__relatedTarget_k__BackingField,
                      put = __cordl_internal_set__relatedTarget_k__BackingField)) ::UnityEngine::UIElements::IEventHandler* _relatedTarget_k__BackingField;

  __declspec(property(get = get_pointerId, put = set_pointerId)) int32_t pointerId;

  __declspec(property(put = set_relatedTarget)) ::UnityEngine::UIElements::IEventHandler* relatedTarget;

  /// @brief Convert operator to "::UnityEngine::UIElements::IPointerCaptureEventInternal"
  constexpr operator ::UnityEngine::UIElements::IPointerCaptureEventInternal*() noexcept;

  /// @brief Method GetPooled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetPooled(::UnityEngine::UIElements::IEventHandler* target, ::UnityEngine::UIElements::IEventHandler* relatedTarget, int32_t pointerId);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerCaptureEventBase_1<T>* New_ctor();

  constexpr int32_t const& __cordl_internal_get__pointerId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__pointerId_k__BackingField();

  constexpr ::UnityEngine::UIElements::IEventHandler* const& __cordl_internal_get__relatedTarget_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::IEventHandler*& __cordl_internal_get__relatedTarget_k__BackingField();

  constexpr void __cordl_internal_set__pointerId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__relatedTarget_k__BackingField(::UnityEngine::UIElements::IEventHandler* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pointerId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_pointerId();

  /// @brief Convert to "::UnityEngine::UIElements::IPointerCaptureEventInternal"
  constexpr ::UnityEngine::UIElements::IPointerCaptureEventInternal* i___UnityEngine__UIElements__IPointerCaptureEventInternal() noexcept;

  /// @brief Method set_pointerId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_pointerId(int32_t value);

  /// @brief Method set_relatedTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_relatedTarget(::UnityEngine::UIElements::IEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureEventBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEventBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureEventBase_1(PointerCaptureEventBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEventBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureEventBase_1(PointerCaptureEventBase_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5782 };

  /// @brief Field <relatedTarget>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::IEventHandler* ____relatedTarget_k__BackingField;

  /// @brief Field <pointerId>k__BackingField, offset: 0x90, size: 0x4, def value: None
  int32_t ____pointerId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PointerCaptureEventBase_1, "UnityEngine.UIElements", "PointerCaptureEventBase`1");
