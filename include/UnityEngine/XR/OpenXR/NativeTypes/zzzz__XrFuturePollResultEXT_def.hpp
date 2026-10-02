#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrFuturePollResultEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrFutureStateEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XrFuturePollResultEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrFutureStateEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrFuturePollResultEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrFuturePollResultEXT");
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrFutureStateEXT, UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrFuturePollResultEXT
struct CORDL_TYPE XrFuturePollResultEXT {
public:
  // Declarations
  __declspec(property(get = get_next, put = set_next)) void* next;

  __declspec(property(get = get_state, put = set_state)) ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT state;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e41664, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(void* next, ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT state);

  /// @brief Method .ctor, addr 0x6e41624, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT state);

  /// @brief Method get_defaultValue, addr 0x6e3e838, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT get_defaultValue();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e41644, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_state, addr 0x6e41654, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT get_state();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e4163c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  /// [CompilerGenerated]
  /// @brief Method set_next, addr 0x6e4164c, size 0x8, virtual false, abstract: false, final false
  inline void set_next(void* value);

  /// [CompilerGenerated]
  /// @brief Method set_state, addr 0x6e4165c, size 0x8, virtual false, abstract: false, final false
  inline void set_state(::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrFuturePollResultEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_state_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT",
  // modifiers: "", def_value: None, comment: None }]
  constexpr XrFuturePollResultEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                  ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT _state_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17534 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <state>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrFutureStateEXT _state_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT, _state_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrFuturePollResultEXT) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
