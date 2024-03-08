#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreCameraValues)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CoreCameraValues;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CoreCameraValues);
// Type: UnityEngine.Rendering::CoreCameraValues
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::CoreCameraValues
struct CORDL_TYPE CoreCameraValues {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>*();

  /// @brief Method Equals, addr 0x2e3deac, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2e3de78, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::CoreCameraValues other);

  /// @brief Method GetHashCode, addr 0x2e3df44, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>* i___System__IEquatable_1___UnityEngine__Rendering__CoreCameraValues_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreCameraValues();

  // Ctor Parameters [CppParam { name: "filterMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cullingMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "instanceID", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CoreCameraValues(int32_t filterMode, uint32_t cullingMask, int32_t instanceID) noexcept;

  /// @brief Field filterMode, offset: 0x0, size: 0x4, def value: None
  int32_t filterMode;

  /// @brief Field cullingMask, offset: 0x4, size: 0x4, def value: None
  uint32_t cullingMask;

  /// @brief Field instanceID, offset: 0x8, size: 0x4, def value: None
  int32_t instanceID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreCameraValues, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CoreCameraValues, filterMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CoreCameraValues, cullingMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CoreCameraValues, instanceID) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreCameraValues, "UnityEngine.Rendering", "CoreCameraValues");
