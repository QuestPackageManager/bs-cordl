#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceDataEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialPersistenceStateEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrUuid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialPersistenceDataEXT)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceStateEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrUuid;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceDataEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialPersistenceDataEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPersistenceStateEXT, UnityEngine.XR.OpenXR.NativeTypes.XrUuid
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPersistenceDataEXT
struct CORDL_TYPE XrSpatialPersistenceDataEXT {
public:
  // Declarations
  __declspec(property(get = get_persistState)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT persistState;

  __declspec(property(get = get_persistUuid)) ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>*();

  /// @brief Method Equals, addr 0x6e44db8, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e44d7c, size 0x3c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT other);

  /// @brief Method GetHashCode, addr 0x6e44e58, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6e44d70, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid persistUuid, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT persistState);

  /// [CompilerGenerated]
  /// @brief Method get_persistState, addr 0x6e44d68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT get_persistState();

  /// [CompilerGenerated]
  /// @brief Method get_persistUuid, addr 0x6e44d5c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid get_persistUuid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT>*
  i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrSpatialPersistenceDataEXT_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialPersistenceDataEXT();

  // Ctor Parameters [CppParam { name: "_persistUuid_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrUuid", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_persistState_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialPersistenceDataEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid _persistUuid_k__BackingField,
                                        ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT _persistState_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17583 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// [CompilerGenerated]
  /// @brief Field <persistUuid>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid _persistUuid_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <persistState>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT _persistState_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT, _persistUuid_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT, _persistState_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceDataEXT) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
