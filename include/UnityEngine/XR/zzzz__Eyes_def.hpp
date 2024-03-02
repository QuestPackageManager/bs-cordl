#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Eyes)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR {
struct Eyes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Eyes);
// Type: UnityEngine.XR::Eyes
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::UnityEngine.XR::Eyes
struct CORDL_TYPE Eyes {
public:
  // Declarations
  __declspec(property(get = get_deviceId)) uint64_t deviceId;

  __declspec(property(get = get_featureIndex)) uint32_t featureIndex;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Eyes>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::Eyes>*();

  /// @brief Method Equals, addr 0x2fc1f34, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2fc1fbc, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::Eyes other);

  /// @brief Method GetHashCode, addr 0x2fc1fe0, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_deviceId, addr 0x2fc1f24, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_deviceId();

  /// @brief Method get_featureIndex, addr 0x2fc1f2c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_featureIndex();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::Eyes>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::Eyes>* i___System__IEquatable_1___UnityEngine__XR__Eyes_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Eyes();

  // Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_FeatureIndex", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Eyes(uint64_t m_DeviceId, uint32_t m_FeatureIndex) noexcept;

  /// @brief Field m_DeviceId, offset: 0x0, size: 0x8, def value: None
  uint64_t m_DeviceId;

  /// @brief Field m_FeatureIndex, offset: 0x8, size: 0x4, def value: None
  uint32_t m_FeatureIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Eyes, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Eyes, m_DeviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Eyes, m_FeatureIndex) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Eyes, "UnityEngine.XR", "Eyes");
