#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchPackedCullingViewID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchPackedCullingViewID)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchPackedCullingViewID;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchPackedCullingViewID);
// Type: UnityEngine.Rendering::BatchPackedCullingViewID
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BatchPackedCullingViewID
struct CORDL_TYPE BatchPackedCullingViewID {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>*();

  /// @brief Method Equals, addr 0x4867080, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4867070, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::BatchPackedCullingViewID other);

  /// @brief Method GetHashCode, addr 0x4867068, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchPackedCullingViewID>* i___System__IEquatable_1___UnityEngine__Rendering__BatchPackedCullingViewID_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchPackedCullingViewID();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr BatchPackedCullingViewID(uint64_t handle) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  uint64_t handle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11210 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchPackedCullingViewID, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchPackedCullingViewID, handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchPackedCullingViewID, "UnityEngine.Rendering", "BatchPackedCullingViewID");
