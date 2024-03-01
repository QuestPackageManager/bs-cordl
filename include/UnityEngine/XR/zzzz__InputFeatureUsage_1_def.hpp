#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputFeatureUsage_1)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR {
template <typename T> struct InputFeatureUsage_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::XR::InputFeatureUsage_1);
// Type: UnityEngine.XR::InputFeatureUsage`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::UnityEngine.XR::InputFeatureUsage`1<T>
struct CORDL_TYPE InputFeatureUsage_1 {
public:
  // Declarations
  __declspec(property(get = get_name, put = set_name))::StringW name;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::InputFeatureUsage_1<T> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW usageName);

  /// @brief Method get_name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>* i___System__IEquatable_1___UnityEngine__XR__InputFeatureUsage_1_T__();

  /// @brief Method set_name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFeatureUsage_1();

  // Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr InputFeatureUsage_1(::StringW _name_k__BackingField) noexcept;

  /// @brief Field <name>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _name_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::XR::InputFeatureUsage_1, "UnityEngine.XR", "InputFeatureUsage`1");
