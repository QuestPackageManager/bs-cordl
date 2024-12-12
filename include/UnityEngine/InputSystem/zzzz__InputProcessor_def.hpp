#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include <cstddef>
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
namespace UnityEngine::InputSystem {
struct InputProcessor_CachingPolicy;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputProcessor_CachingPolicy;
}
namespace UnityEngine::InputSystem {
class InputProcessor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputProcessor_CachingPolicy);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputProcessor);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputProcessor/CachingPolicy
struct CORDL_TYPE InputProcessor_CachingPolicy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputProcessor_CachingPolicy_Unwrapped
  enum struct __InputProcessor_CachingPolicy_Unwrapped : int32_t {
    __E_CacheResult = static_cast<int32_t>(0x0),
    __E_EvaluateOnEveryRead = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputProcessor_CachingPolicy_Unwrapped() const noexcept {
    return static_cast<__InputProcessor_CachingPolicy_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputProcessor_CachingPolicy();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputProcessor_CachingPolicy(int32_t value__) noexcept;

  /// @brief Field CacheResult value: I32(0)
  static ::UnityEngine::InputSystem::InputProcessor_CachingPolicy const CacheResult;

  /// @brief Field EvaluateOnEveryRead value: I32(1)
  static ::UnityEngine::InputSystem::InputProcessor_CachingPolicy const EvaluateOnEveryRead;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6636 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputProcessor_CachingPolicy, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputProcessor_CachingPolicy, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object, UnityEngine.InputSystem.Utilities.TypeTable
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputProcessor
class CORDL_TYPE InputProcessor : public ::System::Object {
public:
  // Declarations
  using CachingPolicy = ::UnityEngine::InputSystem::InputProcessor_CachingPolicy;

  __declspec(property(get = get_cachingPolicy)) ::UnityEngine::InputSystem::InputProcessor_CachingPolicy cachingPolicy;

  /// @brief Field s_Processors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Processors, put = setStaticF_s_Processors)) ::UnityEngine::InputSystem::Utilities::TypeTable s_Processors;

  /// @brief Method GetValueTypeFromType, addr 0x458188c, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Type* GetValueTypeFromType(::System::Type* processorType);

  static inline ::UnityEngine::InputSystem::InputProcessor* New_ctor();

  /// @brief Method Process, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Process(::cordl_internals::Ptr<void> buffer, int32_t bufferSize, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ProcessAsObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ProcessAsObject(::System::Object* value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method .ctor, addr 0x4581984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Utilities::TypeTable getStaticF_s_Processors();

  /// @brief Method get_cachingPolicy, addr 0x458197c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputProcessor_CachingPolicy get_cachingPolicy();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputProcessor_CachingPolicy, "UnityEngine.InputSystem", "InputProcessor/CachingPolicy");
NEED_NO_BOX(::UnityEngine::InputSystem::InputProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputProcessor*, "UnityEngine.InputSystem", "InputProcessor");
