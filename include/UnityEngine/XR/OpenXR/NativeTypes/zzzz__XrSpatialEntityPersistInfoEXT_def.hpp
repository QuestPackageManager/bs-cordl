#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialEntityPersistInfoEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialEntityPersistInfoEXT)
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrStructureType;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialEntityPersistInfoEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialEntityPersistInfoEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrStructureType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialEntityPersistInfoEXT
struct CORDL_TYPE XrSpatialEntityPersistInfoEXT {
public:
  // Declarations
  __declspec(property(get = get_next)) void* next;

  __declspec(property(get = get_spatialContext)) uint64_t spatialContext;

  __declspec(property(get = get_spatialEntityId)) uint64_t spatialEntityId;

  __declspec(property(get = get_type)) ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType type;

  /// @brief Method .ctor, addr 0x6e44f80, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(void* next, uint64_t spatialContext, uint64_t spatialEntityId);

  /// @brief Method .ctor, addr 0x6e44f98, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint64_t spatialContext, uint64_t spatialEntityId);

  /// [CompilerGenerated]
  /// @brief Method get_next, addr 0x6e44f68, size 0x8, virtual false, abstract: false, final false
  inline void* get_next();

  /// [CompilerGenerated]
  /// @brief Method get_spatialContext, addr 0x6e44f70, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_spatialContext();

  /// [CompilerGenerated]
  /// @brief Method get_spatialEntityId, addr 0x6e44f78, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_spatialEntityId();

  /// [CompilerGenerated]
  /// @brief Method get_type, addr 0x6e44f60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialEntityPersistInfoEXT();

  // Ctor Parameters [CppParam { name: "_type_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_next_k__BackingField", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_spatialContext_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "_spatialEntityId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialEntityPersistInfoEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField, void* _next_k__BackingField, uint64_t _spatialContext_k__BackingField,
                                          uint64_t _spatialEntityId_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [CompilerGenerated]
  /// @brief Field <type>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType _type_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <next>k__BackingField, offset: 0x8, size: 0x8, def value: None
  void* _next_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <spatialContext>k__BackingField, offset: 0x10, size: 0x8, def value: None
  uint64_t _spatialContext_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <spatialEntityId>k__BackingField, offset: 0x18, size: 0x8, def value: None
  uint64_t _spatialEntityId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT, _type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT, _next_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT, _spatialContext_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT, _spatialEntityId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialEntityPersistInfoEXT) == 0x20, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
