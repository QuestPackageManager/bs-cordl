#pragma once
// IWYU pragma private; include "OSCE/Networking/IPureCSharpPoolElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPureCSharpPoolElement)
// Forward declare root types
namespace OSCE::Networking {
class IPureCSharpPoolElement;
}
// Write type traits
MARK_REF_PTR_T(::OSCE::Networking::IPureCSharpPoolElement);
// Dependencies
namespace OSCE::Networking {
// Is value type: false
// CS Name: OSCE.Networking.IPureCSharpPoolElement
class CORDL_TYPE IPureCSharpPoolElement {
public:
  // Declarations
  __declspec(property(get = get_CreatedByPool, put = set_CreatedByPool)) bool CreatedByPool;

  /// @brief Method ReturnedToPool, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReturnedToPool();

  /// @brief Method get_CreatedByPool, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_CreatedByPool();

  /// @brief Method set_CreatedByPool, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_CreatedByPool(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IPureCSharpPoolElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPureCSharpPoolElement(IPureCSharpPoolElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OSCE::Networking
NEED_NO_BOX(::OSCE::Networking::IPureCSharpPoolElement);
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Networking::IPureCSharpPoolElement*, "OSCE.Networking", "IPureCSharpPoolElement");
