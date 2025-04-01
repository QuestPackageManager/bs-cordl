#pragma once
// IWYU pragma private; include "UnityEngine/PropertyName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyName)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct PropertyName;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PropertyName);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PropertyName
struct CORDL_TYPE PropertyName {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PropertyName>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::PropertyName>*();

  /// @brief Method Equals, addr 0x48a1300, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x48a1378, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::PropertyName other);

  /// @brief Method GetHashCode, addr 0x48a12f8, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsNullOrEmpty, addr 0x48a12e0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::UnityEngine::PropertyName prop);

  /// @brief Method ToString, addr 0x48a13d4, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x48a127c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x48a12d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::PropertyName other);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::PropertyName>"
  constexpr ::System::IEquatable_1<::UnityEngine::PropertyName>* i___System__IEquatable_1___UnityEngine__PropertyName_();

  /// @brief Method op_Equality, addr 0x48a12ec, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::PropertyName lhs, ::UnityEngine::PropertyName rhs);

  /// @brief Method op_Implicit, addr 0x48a1388, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PropertyName op_Implicit___UnityEngine__PropertyName(::StringW name);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyName();

  // Ctor Parameters [CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PropertyName(int32_t id) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10849 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  int32_t id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PropertyName, id) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PropertyName, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PropertyName, "UnityEngine", "PropertyName");
