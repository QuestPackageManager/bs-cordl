#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MouseCaptureDispatchingStrategy)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct __MouseCaptureDispatchingStrategy__EventBehavior;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __MouseCaptureDispatchingStrategy__EventBehavior;
}
namespace UnityEngine::UIElements {
class MouseCaptureDispatchingStrategy;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureDispatchingStrategy);
// Type: ::EventBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::MouseCaptureDispatchingStrategy::EventBehavior
struct CORDL_TYPE __MouseCaptureDispatchingStrategy__EventBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MouseCaptureDispatchingStrategy__EventBehavior_Unwrapped
  enum struct ____MouseCaptureDispatchingStrategy__EventBehavior_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IsCapturable = static_cast<int32_t>(0x1),
    __E_IsSentExclusivelyToCapturingElement = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MouseCaptureDispatchingStrategy__EventBehavior_Unwrapped() const noexcept {
    return static_cast<____MouseCaptureDispatchingStrategy__EventBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MouseCaptureDispatchingStrategy__EventBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MouseCaptureDispatchingStrategy__EventBehavior(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IsCapturable value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior const IsCapturable;

  /// @brief Field IsSentExclusivelyToCapturingElement value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior const IsSentExclusivelyToCapturingElement;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MouseCaptureDispatchingStrategy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseCaptureDispatchingStrategy*
class CORDL_TYPE MouseCaptureDispatchingStrategy : public ::System::Object {
public:
  // Declarations
  using EventBehavior = ::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior;

  /// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr operator ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept;

  /// @brief Method CanDispatchEvent, addr 0x339931c, size 0x7c, virtual true, abstract: false, final true
  inline bool CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method DispatchEvent, addr 0x33993b0, size 0x688, virtual true, abstract: false, final true
  inline void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel);

  static inline ::UnityEngine::UIElements::MouseCaptureDispatchingStrategy* New_ctor();

  /// @brief Method .ctor, addr 0x3399aa4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::IEventDispatchingStrategy"
  constexpr ::UnityEngine::UIElements::IEventDispatchingStrategy* i___UnityEngine__UIElements__IEventDispatchingStrategy() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureDispatchingStrategy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureDispatchingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureDispatchingStrategy(MouseCaptureDispatchingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureDispatchingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureDispatchingStrategy(MouseCaptureDispatchingStrategy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureDispatchingStrategy, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior, "UnityEngine.UIElements", "MouseCaptureDispatchingStrategy/EventBehavior");
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureDispatchingStrategy*, "UnityEngine.UIElements", "MouseCaptureDispatchingStrategy");
