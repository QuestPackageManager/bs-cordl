#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialMarkerDataEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBufferEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityEXT_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialMarkerDataEXT)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialBufferEXT;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialCapabilityEXT;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialMarkerDataEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialMarkerDataEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrSpatialBufferEXT, UnityEngine.XR.OpenXR.NativeTypes.XrSpatialCapabilityEXT
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialMarkerDataEXT
struct CORDL_TYPE XrSpatialMarkerDataEXT {
public:
  // Declarations
  __declspec(property(get = get_capability)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability;

  __declspec(property(get = get_data)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT data;

  __declspec(property(get = get_markerId)) uint32_t markerId;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>*();

  /// @brief Method Equals, addr 0x6e4441c, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e443d0, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT other);

  /// @brief Method GetHashCode, addr 0x6e444c8, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6e443c4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT capability, uint32_t markerId, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT data);

  /// [CompilerGenerated]
  /// @brief Method get_capability, addr 0x6e443a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT get_capability();

  /// [CompilerGenerated]
  /// @brief Method get_data, addr 0x6e443b8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT get_data();

  /// [CompilerGenerated]
  /// @brief Method get_markerId, addr 0x6e443b0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_markerId();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrSpatialMarkerDataEXT_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialMarkerDataEXT();

  // Ctor Parameters [CppParam { name: "_capability_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "_markerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data_k__BackingField", ty:
  // "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialMarkerDataEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT _capability_k__BackingField, uint32_t _markerId_k__BackingField,
                                   ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT _data_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17572 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// [CompilerGenerated]
  /// @brief Field <capability>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT _capability_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <markerId>k__BackingField, offset: 0x4, size: 0x4, def value: None
  uint32_t _markerId_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <data>k__BackingField, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT _data_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT, _capability_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT, _markerId_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT, _data_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialMarkerDataEXT) == 0x18, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
