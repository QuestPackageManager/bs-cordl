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
struct __InputProcessor__CachingPolicy;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputProcessor__CachingPolicy;
}
namespace UnityEngine::InputSystem {
class InputProcessor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputProcessor__CachingPolicy);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputProcessor);
// Type: ::CachingPolicy
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputProcessor::CachingPolicy
struct CORDL_TYPE __InputProcessor__CachingPolicy {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputProcessor__CachingPolicy_Unwrapped
  enum struct ____InputProcessor__CachingPolicy_Unwrapped : int32_t {
    __E_CacheResult = static_cast<int32_t>(0x0),
    __E_EvaluateOnEveryRead = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputProcessor__CachingPolicy_Unwrapped() const noexcept {
    return static_cast<____InputProcessor__CachingPolicy_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputProcessor__CachingPolicy();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputProcessor__CachingPolicy(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CacheResult value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::__InputProcessor__CachingPolicy const CacheResult;

  /// @brief Field EvaluateOnEveryRead value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputProcessor__CachingPolicy const EvaluateOnEveryRead;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6606 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputProcessor__CachingPolicy, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputProcessor__CachingPolicy, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputProcessor*
class CORDL_TYPE InputProcessor : public ::System::Object {
public:
  // Declarations
  using CachingPolicy = ::UnityEngine::InputSystem::__InputProcessor__CachingPolicy;

  __declspec(property(get = get_cachingPolicy)) ::UnityEngine::InputSystem::__InputProcessor__CachingPolicy cachingPolicy;

  /// @brief Field s_Processors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Processors, put = setStaticF_s_Processors)) ::UnityEngine::InputSystem::Utilities::TypeTable s_Processors;

  /// @brief Method GetValueTypeFromType, addr 0x450be60, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Type* GetValueTypeFromType(::System::Type* processorType);

  static inline ::UnityEngine::InputSystem::InputProcessor* New_ctor();

  /// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Process(::cordl_internals::Ptr<void> buffer, int32_t bufferSize, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ProcessAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ProcessAsObject(::System::Object* value, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method .ctor, addr 0x450bf58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Utilities::TypeTable getStaticF_s_Processors();

  /// @brief Method get_cachingPolicy, addr 0x450bf50, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputProcessor__CachingPolicy get_cachingPolicy();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6607 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputProcessor__CachingPolicy, "UnityEngine.InputSystem", "InputProcessor/CachingPolicy");
NEED_NO_BOX(::UnityEngine::InputSystem::InputProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputProcessor*, "UnityEngine.InputSystem", "InputProcessor");
