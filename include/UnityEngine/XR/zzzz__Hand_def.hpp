#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hand)
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::XR {
struct Hand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Hand);
// Type: UnityEngine.XR::Hand
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15622))
// CS Name: ::UnityEngine.XR::Hand
struct CORDL_TYPE Hand {
public:
  // Declarations
  __declspec(property(get = get_deviceId)) uint64_t deviceId;

  __declspec(property(get = get_featureIndex)) uint32_t featureIndex;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Hand>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::Hand>*();

  /// @brief Method get_deviceId, addr 0x2eb25b0, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_deviceId();

  /// @brief Method get_featureIndex, addr 0x2eb25b8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_featureIndex();

  /// @brief Method Equals, addr 0x2eb25c0, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2eb2648, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::Hand other);

  /// @brief Method GetHashCode, addr 0x2eb266c, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_FeatureIndex", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Hand(uint64_t m_DeviceId, uint32_t m_FeatureIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hand();

  /// @brief Field m_DeviceId, offset: 0x0, size: 0x8, def value: None
  uint64_t m_DeviceId;

  /// @brief Field m_FeatureIndex, offset: 0x8, size: 0x4, def value: None
  uint32_t m_FeatureIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Hand, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Hand, m_DeviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Hand, m_FeatureIndex) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Hand, "UnityEngine.XR", "Hand");
