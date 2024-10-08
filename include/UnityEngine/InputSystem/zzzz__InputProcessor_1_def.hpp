#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputProcessor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputProcessor_1)
namespace System {
class Object;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template <typename TValue> class InputProcessor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::InputProcessor_1);
// Type: UnityEngine.InputSystem::InputProcessor`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputProcessor`1<TValue>*
class CORDL_TYPE InputProcessor_1 : public ::UnityEngine::InputSystem::InputProcessor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::InputProcessor_1<TValue>* New_ctor();

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TValue Process(TValue value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Process(::cordl_internals::Ptr<void> buffer, int32_t bufferSize, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ProcessAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ProcessAsObject(::System::Object* value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputProcessor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputProcessor_1(InputProcessor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputProcessor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputProcessor_1(InputProcessor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6608 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputProcessor_1, "UnityEngine.InputSystem", "InputProcessor`1");
