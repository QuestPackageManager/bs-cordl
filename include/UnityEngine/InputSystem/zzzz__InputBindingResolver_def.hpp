#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingResolver)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
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
class IInputInteraction;
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
namespace UnityEngine::InputSystem {
struct __InputActionState__UnmanagedMemory;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputBindingResolver;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputBindingResolver);
// Type: UnityEngine.InputSystem::InputBindingResolver
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 312, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(5437)), TypeDefinitionIndex(TypeDefinitionIndex(5446)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 3072 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5454)) CS Name:
// ::UnityEngine.InputSystem::InputBindingResolver
struct CORDL_TYPE InputBindingResolver {
public:
  // Declarations
  __declspec(property(get = get_totalMapCount)) int32_t totalMapCount;

  __declspec(property(get = get_totalActionCount)) int32_t totalActionCount;

  __declspec(property(get = get_totalBindingCount)) int32_t totalBindingCount;

  __declspec(property(get = get_totalControlCount)) int32_t totalControlCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method get_totalMapCount, addr 0x2a594f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalMapCount();

  /// @brief Method get_totalActionCount, addr 0x2a594f8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalActionCount();

  /// @brief Method get_totalBindingCount, addr 0x2a59500, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalBindingCount();

  /// @brief Method get_totalControlCount, addr 0x2a59508, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalControlCount();

  /// @brief Method Dispose, addr 0x2a59510, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method StartWithPreviousResolve, addr 0x2a59558, size 0xe8, virtual false, abstract: false, final false
  inline void StartWithPreviousResolve(::UnityEngine::InputSystem::InputActionState* state, bool isFullResolve);

  /// @brief Method AddActionMap, addr 0x2a59640, size 0x1610, virtual false, abstract: false, final false
  inline void AddActionMap(::UnityEngine::InputSystem::InputActionMap* actionMap);

  /// @brief Method InstantiateWithParameters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TType>
  inline int32_t InstantiateWithParameters(::UnityEngine::InputSystem::Utilities::TypeTable registrations, ::StringW namesAndParameters, ByRef<::ArrayW<TType, ::Array<TType>*>> array,
                                           ByRef<int32_t> count, ::UnityEngine::InputSystem::InputActionMap* actionMap, ByRef<::UnityEngine::InputSystem::InputBinding> binding);

  /// @brief Method InstantiateBindingComposite, addr 0x2a5ac50, size 0x2f4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputBindingComposite* InstantiateBindingComposite(ByRef<::UnityEngine::InputSystem::InputBinding> binding,
                                                                                               ::UnityEngine::InputSystem::InputActionMap* actionMap);

  /// @brief Method ApplyParameters, addr 0x2a5b17c, size 0x684, virtual false, abstract: false, final false
  static inline void ApplyParameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> parameters, ::System::Object* instance,
                                     ::UnityEngine::InputSystem::InputActionMap* actionMap, ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW objectRegistrationName,
                                     ::StringW namesAndParameters);

  /// @brief Method AssignCompositePartIndex, addr 0x2a5af44, size 0x238, virtual false, abstract: false, final false
  static inline int32_t AssignCompositePartIndex(::System::Object* composite, ::StringW name, ByRef<int32_t> currentCompositePartCount);

  // Ctor Parameters [CppParam { name: "totalProcessorCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCompositeCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "totalInteractionCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maps", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>", modifiers: "", def_value: None }, CppParam { name: "controls", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>", modifiers: "", def_value: None }, CppParam { name: "memory", ty:
  // "::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory", modifiers: "", def_value: None }, CppParam { name: "interactions", ty:
  // "::ArrayW<::UnityEngine::InputSystem::IInputInteraction*,::Array<::UnityEngine::InputSystem::IInputInteraction*>*>", modifiers: "", def_value: None }, CppParam { name: "processors", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputProcessor*,::Array<::UnityEngine::InputSystem::InputProcessor*>*>", modifiers: "", def_value: None }, CppParam { name: "composites", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*,::Array<::UnityEngine::InputSystem::InputBindingComposite*>*>", modifiers: "", def_value: None }, CppParam { name: "bindingMask", ty:
  // "::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>", modifiers: "", def_value: None }, CppParam { name: "m_IsControlOnlyResolve", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "m_Parameters", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*", modifiers: "", def_value: None }]
  constexpr InputBindingResolver(int32_t totalProcessorCount, int32_t totalCompositeCount, int32_t totalInteractionCount,
                                 ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> maps,
                                 ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> controls,
                                 ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory memory,
                                 ::ArrayW<::UnityEngine::InputSystem::IInputInteraction*, ::Array<::UnityEngine::InputSystem::IInputInteraction*>*> interactions,
                                 ::ArrayW<::UnityEngine::InputSystem::InputProcessor*, ::Array<::UnityEngine::InputSystem::InputProcessor*>*> processors,
                                 ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*, ::Array<::UnityEngine::InputSystem::InputBindingComposite*>*> composites,
                                 ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask, bool m_IsControlOnlyResolve,
                                 ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* m_Parameters) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingResolver();

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
  ::UnityEngine::InputSystem::__InputActionState__UnmanagedMemory memory;

  /// @brief Field interactions, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::IInputInteraction*, ::Array<::UnityEngine::InputSystem::IInputInteraction*>*> interactions;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x128 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingResolver, 0x128>, "Size mismatch!");

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

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingResolver, "UnityEngine.InputSystem", "InputBindingResolver");
