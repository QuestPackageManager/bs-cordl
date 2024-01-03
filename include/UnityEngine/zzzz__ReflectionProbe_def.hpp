#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbe)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct __ReflectionProbe__ReflectionProbeEvent;
}
// Forward declare root types
namespace UnityEngine {
struct __ReflectionProbe__ReflectionProbeEvent;
}
namespace UnityEngine {
class ReflectionProbe;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent);
MARK_REF_PTR_T(::UnityEngine::ReflectionProbe);
// Type: ::ReflectionProbeEvent
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10149))
// CS Name: ::ReflectionProbe::ReflectionProbeEvent
struct CORDL_TYPE __ReflectionProbe__ReflectionProbeEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ReflectionProbe__ReflectionProbeEvent_Unwrapped
  enum struct ____ReflectionProbe__ReflectionProbeEvent_Unwrapped : int32_t {
    __E_ReflectionProbeAdded = static_cast<int32_t>(0x0),
    __E_ReflectionProbeRemoved = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ReflectionProbe__ReflectionProbeEvent_Unwrapped() const noexcept {
    return static_cast<____ReflectionProbe__ReflectionProbeEvent_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ReflectionProbe__ReflectionProbeEvent(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionProbe__ReflectionProbeEvent();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ReflectionProbeAdded value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeAdded;

  /// @brief Field ReflectionProbeRemoved value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeRemoved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ReflectionProbe
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10150))
// CS Name: ::UnityEngine::ReflectionProbe*
class CORDL_TYPE ReflectionProbe : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using ReflectionProbeEvent = ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent;

  /// @brief Field reflectionProbeChanged, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_reflectionProbeChanged,
               put = setStaticF_reflectionProbeChanged))::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* reflectionProbeChanged;

  /// @brief Field defaultReflectionTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultReflectionTexture, put = setStaticF_defaultReflectionTexture))::System::Action_1<::UnityEngine::Texture*>* defaultReflectionTexture;

  static inline void setStaticF_reflectionProbeChanged(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* value);

  static inline ::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* getStaticF_reflectionProbeChanged();

  static inline void setStaticF_defaultReflectionTexture(::System::Action_1<::UnityEngine::Texture*>* value);

  static inline ::System::Action_1<::UnityEngine::Texture*>* getStaticF_defaultReflectionTexture();

  /// @brief Method CallReflectionProbeEvent, addr 0x2cc68c8, size 0x80, virtual false, abstract: false, final false
  static inline void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent probeEvent);

  /// @brief Method CallSetDefaultReflection, addr 0x2cc6948, size 0x6c, virtual false, abstract: false, final false
  static inline void CallSetDefaultReflection(::UnityEngine::Texture* defaultReflectionCubemap);

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbe(ReflectionProbe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbe(ReflectionProbe const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbe();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
NEED_NO_BOX(::UnityEngine::ReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
