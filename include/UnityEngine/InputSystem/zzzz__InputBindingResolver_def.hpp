#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingResolver)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class InputBindingComposite;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputProcessor;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputBindingResolver;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputBindingResolver);
// Dependencies System.IDisposable, System.Nullable`1<T>, UnityEngine.InputSystem.InputActionState::UnmanagedMemory, UnityEngine.InputSystem.InputBinding
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputBindingResolver
struct CORDL_TYPE InputBindingResolver {
public:
  // Declarations
  __declspec(property(get = get_totalActionCount)) int32_t totalActionCount;

  __declspec(property(get = get_totalBindingCount)) int32_t totalBindingCount;

  __declspec(property(get = get_totalControlCount)) int32_t totalControlCount;

  __declspec(property(get = get_totalMapCount)) int32_t totalMapCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddActionMap, addr 0x455cd48, size 0x1594, virtual false, abstract: false, final false
  inline void AddActionMap(::UnityEngine::InputSystem::InputActionMap* actionMap);

  /// @brief Method ApplyParameters, addr 0x455e798, size 0x4f0, virtual false, abstract: false, final false
  static inline void ApplyParameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> parameters, ::System::Object* instance,
                                     ::UnityEngine::InputSystem::InputActionMap* actionMap, ::ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW objectRegistrationName,
                                     ::StringW namesAndParameters);

  /// @brief Method AssignCompositePartIndex, addr 0x455e568, size 0x230, virtual false, abstract: false, final false
  static inline int32_t AssignCompositePartIndex(::System::Object* composite, ::StringW name, ::ByRef<int32_t> currentCompositePartCount);

  /// @brief Method Dispose, addr 0x455cc18, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method InstantiateBindingComposite, addr 0x455e2dc, size 0x28c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputBindingComposite* InstantiateBindingComposite(::ByRef<::UnityEngine::InputSystem::InputBinding> binding,
                                                                                               ::UnityEngine::InputSystem::InputActionMap* actionMap);

  /// @brief Method InstantiateWithParameters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TType>
  inline int32_t InstantiateWithParameters(::UnityEngine::InputSystem::Utilities::TypeTable registrations, ::StringW namesAndParameters, ::ByRef<::ArrayW<TType, ::Array<TType>*>> array,
                                           ::ByRef<int32_t> count, ::UnityEngine::InputSystem::InputActionMap* actionMap, ::ByRef<::UnityEngine::InputSystem::InputBinding> binding);

  /// @brief Method StartWithPreviousResolve, addr 0x455cc60, size 0xe8, virtual false, abstract: false, final false
  inline void StartWithPreviousResolve(::UnityEngine::InputSystem::InputActionState* state, bool isFullResolve);

  /// @brief Method get_totalActionCount, addr 0x455cc00, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalActionCount();

  /// @brief Method get_totalBindingCount, addr 0x455cc08, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalBindingCount();

  /// @brief Method get_totalControlCount, addr 0x455cc10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalControlCount();

  /// @brief Method get_totalMapCount, addr 0x455cbf8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalMapCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingResolver();

  // Ctor Parameters [CppParam { name: "totalProcessorCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCompositeCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "totalInteractionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maps", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>", modifiers: "", def_value: None }, CppParam { name: "controls", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>", modifiers: "", def_value: None }, CppParam { name: "memory", ty:
  // "::UnityEngine::InputSystem::InputActionState_UnmanagedMemory", modifiers: "", def_value: None }, CppParam { name: "interactions", ty:
  // "::ArrayW<::cordl_internals::InterfaceW,::Array<::cordl_internals::InterfaceW>*>", modifiers: "", def_value: None }, CppParam { name: "processors", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputProcessor*,::Array<::UnityEngine::InputSystem::InputProcessor*>*>", modifiers: "", def_value: None }, CppParam { name: "composites", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*,::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>", modifiers: "", def_value: None }, CppParam { name: "bindingMask", ty:
  // "::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>", modifiers: "", def_value: None }, CppParam { name: "m_IsControlOnlyResolve", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "m_Parameters", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*", modifiers: "", def_value: None }]
  constexpr InputBindingResolver(int32_t totalProcessorCount, int32_t totalCompositeCount, int32_t totalInteractionCount,
                                 ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> maps,
                                 ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> controls,
                                 ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory memory, ::ArrayW<::cordl_internals::InterfaceW, ::Array<::cordl_internals::InterfaceW>*> interactions,
                                 ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> processors,
                                 ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> composites,
                                 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask, bool m_IsControlOnlyResolve,
                                 ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* m_Parameters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6601 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x128 };

  /// @brief Field totalProcessorCount, offset: 0x0, size: 0x4, def value: None
  int32_t totalProcessorCount;

  /// @brief Field totalCompositeCount, offset: 0x4, size: 0x4, def value: None
  int32_t totalCompositeCount;

  /// @brief Field totalInteractionCount, offset: 0x8, size: 0x4, def value: None
  int32_t totalInteractionCount;

  /// @brief Field maps, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> maps;

  /// @brief Field controls, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> controls;

  /// @brief Field memory, offset: 0x20, size: 0x80, def value: None
  ::UnityEngine::InputSystem::InputActionState_UnmanagedMemory memory;

  /// @brief Field interactions, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::cordl_internals::InterfaceW, ::Array<::cordl_internals::InterfaceW>*> interactions;

  /// @brief Field processors, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> processors;

  /// @brief Field composites, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> composites;

  /// @brief Field bindingMask, offset: 0xb8, size: 0x60, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  /// @brief Field m_IsControlOnlyResolve, offset: 0x118, size: 0x1, def value: None
  bool m_IsControlOnlyResolve;

  /// @brief Field m_Parameters, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* m_Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, totalProcessorCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, totalCompositeCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, totalInteractionCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, maps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, controls) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, memory) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, interactions) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, processors) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, composites) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, bindingMask) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, m_IsControlOnlyResolve) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingResolver, m_Parameters) == 0x120, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingResolver, 0x128>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingResolver, "UnityEngine.InputSystem", "InputBindingResolver");
