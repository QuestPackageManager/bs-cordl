#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialComponentDataQueryResultEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialComponentDataQueryResultEXT)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialEntityTrackingStateEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialComponentDataQueryResultEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialComponentDataQueryResultEXT");
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialComponentDataQueryResultEXT
struct CORDL_TYPE XrSpatialComponentDataQueryResultEXT {
public:
  // Declarations
  __declspec(property(get = get_entityIdCapacityInput, put = set_entityIdCapacityInput)) uint32_t entityIdCapacityInput;

  __declspec(property(get = get_entityIdCountOutput, put = set_entityIdCountOutput)) uint32_t entityIdCountOutput;

  __declspec(property(get = get_entityIds, put = set_entityIds)) uint64_t* entityIds;

  __declspec(property(get = get_entityStateCapacityInput, put = set_entityStateCapacityInput)) uint32_t entityStateCapacityInput;

  __declspec(property(get = get_entityStateCountOutput, put = set_entityStateCountOutput)) uint32_t entityStateCountOutput;

  __declspec(property(get = get_entityStates, put = set_entityStates)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT* entityStates;

  __declspec(property(get = get_next, put = set_next)) void* next;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method SetEntityIds, addr 0x6e4306c, size 0x50, virtual false, abstract: false, final false
  inline void SetEntityIds(::Unity::Collections::NativeArray_1<uint64_t> ids);

  /// @brief Method SetEntityStates, addr 0x6e430bc, size 0x50, virtual false, abstract: false, final false
  inline void SetEntityStates(::Unity::Collections::NativeArray_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT> states);

  /// @brief Method .ctor, addr 0x6e42f90, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(uint32_t entityIdCapacityInput, uint32_t entityIdCountOutput, uint64_t* entityIds, uint32_t entityStateCapacityInput, uint32_t entityStateCountOutput,
                    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT* entityStates);

  /// @brief Method .ctor, addr 0x6e43050, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(void* next);

  /// @brief Method .ctor, addr 0x6e4302c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint32_t entityIdCapacityInput, uint32_t entityIdCountOutput, uint64_t* entityIds, uint32_t entityStateCapacityInput, uint32_t entityStateCountOutput,
                    ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT* entityStates);

  /// @brief Method get_defaultValue, addr 0x6e42f6c, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT get_defaultValue();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_entityIdCapacityInput, addr 0x6e42fcc, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_entityIdCapacityInput();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_entityIdCountOutput, addr 0x6e42fdc, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_entityIdCountOutput();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_entityIds, addr 0x6e42fec, size 0x8, virtual false, abstract: false, final false
  inline uint64_t* get_entityIds();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_entityStateCapacityInput, addr 0x6e42ffc, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_entityStateCapacityInput();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_entityStateCountOutput, addr 0x6e4300c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_entityStateCountOutput();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_entityStates, addr 0x6e4301c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT* get_entityStates();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e42fbc, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e42fb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  /// [CompilerGenerated]
  /// @brief Method set_entityIdCapacityInput, addr 0x6e42fd4, size 0x8, virtual false, abstract: false, final false
  inline void set_entityIdCapacityInput(uint32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_entityIdCountOutput, addr 0x6e42fe4, size 0x8, virtual false, abstract: false, final false
  inline void set_entityIdCountOutput(uint32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_entityIds, addr 0x6e42ff4, size 0x8, virtual false, abstract: false, final false
  inline void set_entityIds(uint64_t* value);

  /// [CompilerGenerated]
  /// @brief Method set_entityStateCapacityInput, addr 0x6e43004, size 0x8, virtual false, abstract: false, final false
  inline void set_entityStateCapacityInput(uint32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_entityStateCountOutput, addr 0x6e43014, size 0x8, virtual false, abstract: false, final false
  inline void set_entityStateCountOutput(uint32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_entityStates, addr 0x6e43024, size 0x8, virtual false, abstract: false, final false
  inline void set_entityStates(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT* value);

  /// [CompilerGenerated]
  /// @brief Method set_next, addr 0x6e42fc4, size 0x8, virtual false, abstract: false, final false
  inline void set_next(void* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialComponentDataQueryResultEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entityIdCapacityInput_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "_entityIdCountOutput_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entityIds_k__BackingField", ty:
  // "uint64_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entityStateCapacityInput_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "_entityStateCountOutput_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entityStates_k__BackingField", ty:
  // "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT*", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialComponentDataQueryResultEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField,
                                                 uint32_t _entityIdCapacityInput_k__BackingField, uint32_t _entityIdCountOutput_k__BackingField, uint64_t* _entityIds_k__BackingField,
                                                 uint32_t _entityStateCapacityInput_k__BackingField, uint32_t _entityStateCountOutput_k__BackingField,
                                                 ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT* _entityStates_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17559 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <entityIdCapacityInput>k__BackingField, offset: 0x10, size: 0x4, def value: None
  uint32_t _entityIdCapacityInput_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <entityIdCountOutput>k__BackingField, offset: 0x14, size: 0x4, def value: None
  uint32_t _entityIdCountOutput_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <entityIds>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t* _entityIds_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <entityStateCapacityInput>k__BackingField, offset: 0x20, size: 0x4, def value: None
  uint32_t _entityStateCapacityInput_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <entityStateCountOutput>k__BackingField, offset: 0x24, size: 0x4, def value: None
  uint32_t _entityStateCountOutput_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <entityStates>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityTrackingStateEXT* _entityStates_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT, _entityIdCapacityInput_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT, _entityIdCountOutput_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT, _entityIds_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT, _entityStateCapacityInput_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT, _entityStateCountOutput_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT, _entityStates_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentDataQueryResultEXT) == 0x30, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
