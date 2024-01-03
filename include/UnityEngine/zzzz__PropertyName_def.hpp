#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyName)
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct PropertyName;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PropertyName);
// Type: UnityEngine::PropertyName
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10159))
// CS Name: ::UnityEngine::PropertyName
struct CORDL_TYPE PropertyName {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PropertyName>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::PropertyName>*();

  /// @brief Method .ctor, addr 0x2cc8668, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x2cc8710, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PropertyName other);

  /// @brief Method IsNullOrEmpty, addr 0x2cc8718, size 0xc, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::UnityEngine::PropertyName prop);

  /// @brief Method op_Equality, addr 0x2cc8724, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::PropertyName lhs, ::UnityEngine::PropertyName rhs);

  /// @brief Method GetHashCode, addr 0x2cc8730, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2cc8738, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2cc87b0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::PropertyName other);

  /// @brief Method op_Implicit, addr 0x2cc87c0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PropertyName op_Implicit___UnityEngine__PropertyName(::StringW name);

  /// @brief Method ToString, addr 0x2cc880c, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PropertyName(int32_t id) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyName();

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  int32_t id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PropertyName, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::PropertyName, id) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PropertyName, "UnityEngine", "PropertyName");
