#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingComposite_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingComposite_1)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template <typename TValue> class InputBindingComposite_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::InputBindingComposite_1);
// Dependencies UnityEngine.InputSystem.InputBindingComposite
namespace UnityEngine::InputSystem {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputBindingComposite`1<TValue>
class CORDL_TYPE InputBindingComposite_1 : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
  // Declarations
  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType)) ::System::Type* valueType;

  static inline ::UnityEngine::InputSystem::InputBindingComposite_1<TValue>* New_ctor();

  /// @brief Method ReadValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_valueSizeInBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_valueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_valueType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingComposite_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputBindingComposite_1(InputBindingComposite_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputBindingComposite_1(InputBindingComposite_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6591 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputBindingComposite_1, "UnityEngine.InputSystem", "InputBindingComposite`1");
