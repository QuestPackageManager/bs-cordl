#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventDispatcherGate)
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class EventDispatcher;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventDispatcherGate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventDispatcherGate);
// Type: UnityEngine.UIElements::EventDispatcherGate
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::EventDispatcherGate
struct CORDL_TYPE EventDispatcherGate {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>*();

  /// @brief Method Dispose, addr 0x2f6a910, size 0x18, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Equals, addr 0x2f6a9bc, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2f6a9b0, size 0xc, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::EventDispatcherGate other);

  /// @brief Method GetHashCode, addr 0x2f6aa38, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2f6a894, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EventDispatcher* d);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>* i___System__IEquatable_1___UnityEngine__UIElements__EventDispatcherGate_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDispatcherGate();

  // Ctor Parameters [CppParam { name: "m_Dispatcher", ty: "::UnityEngine::UIElements::EventDispatcher*", modifiers: "", def_value: None }]
  constexpr EventDispatcherGate(::UnityEngine::UIElements::EventDispatcher* m_Dispatcher) noexcept;

  /// @brief Field m_Dispatcher, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventDispatcher* m_Dispatcher;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDispatcherGate, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventDispatcherGate, m_Dispatcher) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatcherGate, "UnityEngine.UIElements", "EventDispatcherGate");
