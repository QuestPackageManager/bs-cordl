#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialBufferEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBufferTypeEXT_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialBufferEXT)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialBufferTypeEXT;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialBufferEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialBufferEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrSpatialBufferTypeEXT
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialBufferEXT
struct CORDL_TYPE XrSpatialBufferEXT {
public:
  // Declarations
  __declspec(property(get = get_bufferId)) uint64_t bufferId;

  __declspec(property(get = get_bufferType)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT bufferType;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>*();

  /// @brief Method Equals, addr 0x6e42b30, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e42824, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT other);

  /// @brief Method GetHashCode, addr 0x6e42bbc, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6e42b24, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t bufferId, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT bufferType);

  /// [CompilerGenerated]
  /// @brief Method get_bufferId, addr 0x6e42b14, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_bufferId();

  /// [CompilerGenerated]
  /// @brief Method get_bufferType, addr 0x6e42b1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT get_bufferType();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrSpatialBufferEXT_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialBufferEXT();

  // Ctor Parameters [CppParam { name: "_bufferId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bufferType_k__BackingField", ty:
  // "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialBufferEXT(uint64_t _bufferId_k__BackingField, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT _bufferType_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17554 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [CompilerGenerated]
  /// @brief Field <bufferId>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _bufferId_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <bufferType>k__BackingField, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferTypeEXT _bufferType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT, _bufferId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT, _bufferType_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
