#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputFeatureType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputFeatureUsage)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct InputFeatureType;
}
// Forward declare root types
namespace UnityEngine::XR {
struct InputFeatureUsage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputFeatureUsage);
// Type: UnityEngine.XR::InputFeatureUsage
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::UnityEngine.XR::InputFeatureUsage
struct CORDL_TYPE InputFeatureUsage {
public:
  // Declarations
  __declspec(property(get = get_internalType))::UnityEngine::XR::InputFeatureType internalType;

  __declspec(property(get = get_name))::StringW name;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>*();

  /// @brief Method Equals, addr 0x301a0e4, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x301a16c, size 0x40, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::InputFeatureUsage other);

  /// @brief Method GetHashCode, addr 0x301a1ac, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_internalType, addr 0x301a0dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::InputFeatureType get_internalType();

  /// @brief Method get_name, addr 0x301a0d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>* i___System__IEquatable_1___UnityEngine__XR__InputFeatureUsage_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFeatureUsage();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_InternalType", ty: "::UnityEngine::XR::InputFeatureType", modifiers: "",
  // def_value: None }]
  constexpr InputFeatureUsage(::StringW m_Name, ::UnityEngine::XR::InputFeatureType m_InternalType) noexcept;

  /// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_InternalType, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::XR::InputFeatureType m_InternalType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputFeatureUsage, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::InputFeatureUsage, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::InputFeatureUsage, m_InternalType) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputFeatureUsage, "UnityEngine.XR", "InputFeatureUsage");
