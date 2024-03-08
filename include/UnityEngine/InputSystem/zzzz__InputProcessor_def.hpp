#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputProcessor)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputProcessor);
// Type: UnityEngine.InputSystem::InputProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputProcessor*
class CORDL_TYPE InputProcessor : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Processors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Processors, put = setStaticF_s_Processors))::UnityEngine::InputSystem::Utilities::TypeTable s_Processors;

  /// @brief Method GetValueTypeFromType, addr 0x2bb2a60, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Type* GetValueTypeFromType(::System::Type* processorType);

  static inline ::UnityEngine::InputSystem::InputProcessor* New_ctor();

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Process(::cordl_internals::Ptr<void> buffer, int32_t bufferSize, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ProcessAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ProcessAsObject(::System::Object* value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method .ctor, addr 0x2bb2b54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Utilities::TypeTable getStaticF_s_Processors();

  static inline void setStaticF_s_Processors(::UnityEngine::InputSystem::Utilities::TypeTable value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputProcessor(InputProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputProcessor(InputProcessor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputProcessor*, "UnityEngine.InputSystem", "InputProcessor");
