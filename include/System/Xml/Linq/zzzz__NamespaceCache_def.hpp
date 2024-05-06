#pragma once
// IWYU pragma private; include "System/Xml/Linq/NamespaceCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NamespaceCache)
namespace System::Xml::Linq {
class XNamespace;
}
// Forward declare root types
namespace System::Xml::Linq {
struct NamespaceCache;
}
// Write type traits
MARK_VAL_T(::System::Xml::Linq::NamespaceCache);
// Type: System.Xml.Linq::NamespaceCache
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: true
// CS Name: ::System.Xml.Linq::NamespaceCache
struct CORDL_TYPE NamespaceCache {
public:
  // Declarations
  /// @brief Method Get, addr 0x2d9bc3c, size 0x34, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XNamespace* Get(::StringW namespaceName);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceCache();

  // Ctor Parameters [CppParam { name: "_ns", ty: "::System::Xml::Linq::XNamespace*", modifiers: "", def_value: None }, CppParam { name: "_namespaceName", ty: "::StringW", modifiers: "", def_value:
  // None }]
  constexpr NamespaceCache(::System::Xml::Linq::XNamespace* _ns, ::StringW _namespaceName) noexcept;

  /// @brief Field _ns, offset: 0x0, size: 0x8, def value: None
  ::System::Xml::Linq::XNamespace* _ns;

  /// @brief Field _namespaceName, offset: 0x8, size: 0x8, def value: None
  ::StringW _namespaceName;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::NamespaceCache, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceCache, _ns) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceCache, _namespaceName) == 0x8, "Offset mismatch!");

} // namespace System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::NamespaceCache, "System.Xml.Linq", "NamespaceCache");
