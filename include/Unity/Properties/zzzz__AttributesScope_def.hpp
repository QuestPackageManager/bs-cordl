#pragma once
// IWYU pragma private; include "Unity/Properties/AttributesScope.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AttributesScope)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Attribute;
}
namespace System {
class IDisposable;
}
namespace Unity::Properties::Internal {
class IAttributes;
}
namespace Unity::Properties {
class IProperty;
}
// Forward declare root types
namespace Unity::Properties {
struct AttributesScope;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::AttributesScope);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.AttributesScope
struct CORDL_TYPE AttributesScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x696a648, size 0xb8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x696a35c, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Properties::IProperty* target, ::Unity::Properties::IProperty* source);

  /// @brief Method .ctor, addr 0x696a530, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Properties::Internal::IAttributes* target, ::System::Collections::Generic::List_1<::System::Attribute*>* attributes);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributesScope();

  // Ctor Parameters [CppParam { name: "m_Target", ty: "::Unity::Properties::Internal::IAttributes*", modifiers: "", def_value: None }, CppParam { name: "m_Previous", ty:
  // "::System::Collections::Generic::List_1<::System::Attribute*>*", modifiers: "", def_value: None }]
  constexpr AttributesScope(::Unity::Properties::Internal::IAttributes* m_Target, ::System::Collections::Generic::List_1<::System::Attribute*>* m_Previous) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19308 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Target, offset: 0x0, size: 0x8, def value: None
  ::Unity::Properties::Internal::IAttributes* m_Target;

  /// @brief Field m_Previous, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Attribute*>* m_Previous;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::AttributesScope, m_Target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::AttributesScope, m_Previous) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::AttributesScope, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::AttributesScope, "Unity.Properties", "AttributesScope");
